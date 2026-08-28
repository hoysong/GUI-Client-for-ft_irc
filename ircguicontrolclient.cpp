#include "ircguicontrolclient.h"

void IRCGuiControlClient::sendMsg( QString msg )
{
	emit serverStatusNotify( QString("[Send msg to server]") );
	/*Chk connection with server before send*/
	if(m_socket->state() != QAbstractSocket::ConnectedState)
	{
		emit serverStatusNotify( QString("Failed: Not connected to server."));
		return;
	}
	else
		emit serverStatusNotify( QString("msg: ").append(msg) );
	QByteArray packet = msg.toUtf8();
	packet.append("\r\n");
	qint64 queued = m_socket->write(packet);
	if (queued == -1)
	{
		emit serverStatusNotify( QString("Write fail.") );
		return ;
	}
	emit sendDoneNotify(msg);
}

void IRCGuiControlClient::tryConnect( QString ip, QString port )
{
    emit serverStatusNotify( QString("[Trying to connect %1 %2]").arg(ip).arg(port));
    this->m_socket->connectToHost(ip, port.toUInt());
}

/*=======*/
/*Actions*/
/*=======*/

void IRCGuiControlClient::connectedAction( void )
{
	emit serverStatusNotify("Connect Success");
	emit connectDone();
}

void IRCGuiControlClient::disconnectedAction( void )
{
	qDebug() << "disconnected!";
}

void IRCGuiControlClient::connectionFailed( QAbstractSocket::SocketError err )
{
    if (err == QAbstractSocket::ConnectionRefusedError)
    {
        emit connectErrorDetected("REFUSED ERR");
	emit serverStatusNotify("IRC server may not running.");
    }
    else if (err == QAbstractSocket::OperationError)
    {
        emit connectErrorDetected("OPERATION ERR");
	emit serverStatusNotify("Your client may already connected.");
    }
    else
    {
        emit connectErrorDetected("UNKNOWN ERR");
	emit serverStatusNotify("Connection failed by unknown reason.");
    }
}

void IRCGuiControlClient::readMsgFromServer( void )
{
	QByteArray msgs = this->m_socket->readAll();
	emit msgReceived( msgs );
}

/*===========*/
/*constructor*/
/*===========*/

void IRCGuiControlClient::connectActions( void )
{
    /*연결 성공*/
    this->connect(m_socket, &QTcpSocket::connected,
                  this, &IRCGuiControlClient::connectedAction);
    /*접속 종료*/
    this->connect(m_socket, &QTcpSocket::disconnected,
                  this, &IRCGuiControlClient::disconnectedAction);
    /*연결 실패*/
    this->connect(m_socket, &QTcpSocket::errorOccurred,
                  this, &IRCGuiControlClient::connectionFailed);
    /**/
    this->connect(m_socket, &QTcpSocket::readyRead,
                  this, &IRCGuiControlClient::readMsgFromServer);
}

IRCGuiControlClient::IRCGuiControlClient( QWidget *parent )
    : QWidget( parent )
    , m_socket(new QTcpSocket(this))
{
	connectActions();
}
