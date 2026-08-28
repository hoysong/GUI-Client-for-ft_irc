#ifndef IRCGUICONTROLCLIENT_H
#define IRCGUICONTROLCLIENT_H

#include <QWidget>
#include <QTcpSocket>

class IRCGuiControlClient : public QWidget
{
    Q_OBJECT

    signals:
        void connectErrorDetected( const QString reason );
    	void serverStatusNotify( const QString msg );
	void sendDoneNotify( const QString msg );
	void connectDone( void );
	void msgReceived( QString msg );

    private:
        QTcpSocket *m_socket;
        void connectedAction( void );
        void disconnectedAction( void );
	void connectActions( void );
	void readMsgFromServer( void );

    public:
        IRCGuiControlClient( QWidget *parent = nullptr );
        void tryConnect( QString ip, QString port );
	void sendMsg( QString msg );
        void connectionFailed( QAbstractSocket::SocketError err );
};

#endif // IRCGUICONTROLCLIENT_H
