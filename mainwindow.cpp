#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

void MainWindow::tryConnectButtonPressed( void )
{
	this->controlClient->tryConnect(
			this->ui->iPLineEdit->text(),
			this->ui->portLineEdit->text()
			);
}

/*===============*/
/*connect actions*/
/*===============*/

void MainWindow::connectionFailedAction( QString reason )
{
	QString msg = "[Try connect to server Failed]\n";
	QMessageBox::warning(this, "Warning", msg.append("Reason: ").append(reason));
}

void MainWindow::updateServerStatusPlain( QString msg )
{
	ui->statusPlainTextEdit->appendPlainText(msg);
}

void MainWindow::sendLoginMsgs( void )
{
	/*login*/
	this->controlClient->sendMsg(
			QString("PASS ").append(this->ui->passWordLineEdit->text())
			);
	this->controlClient->sendMsg(
			QString("NICK ").append(this->ui->nickNameLineEdit->text())
			);
	this->controlClient->sendMsg(
			QString("USER ").append(this->ui->userNameLineEdit->text())
			.append(" 0 * :ControlClient")
			);
}

void MainWindow::sendMsgToServer( void )
{
	QLineEdit &msgLineEdit = *(this->ui->msgToSendLineEdit);
	controlClient->sendMsg( msgLineEdit.text() );
	msgLineEdit.clear();
}

void MainWindow::fillToServerTextEdit( QString msg )
{
	this->ui->toServerplainTextEdit->appendPlainText(msg);
}

void MainWindow::fillFromServerTextEdit( QString msg )
{
	this->ui->fromServerPlainTextEdit->appendPlainText(msg);
}

void MainWindow::connectActions( void )
{
    connect(ui->tryConnectButton, &QPushButton::pressed,
		    this, &MainWindow::tryConnectButtonPressed);
    /*controlClient에서 에러감지시*/
    connect(controlClient, &IRCGuiControlClient::connectErrorDetected,
		    this, &MainWindow::connectionFailedAction);
    connect(controlClient, &IRCGuiControlClient::serverStatusNotify,
		    this, &MainWindow::updateServerStatusPlain);
    /*connect 성공*/
    connect(controlClient, &IRCGuiControlClient::connectDone,
		    this, &MainWindow::sendLoginMsgs);
    /*메시지 입력란 엔터 누를 시*/
    connect(ui->msgToSendLineEdit, &QLineEdit::returnPressed,
		    this, &MainWindow::sendMsgToServer);
    /*메시지 전송 완료 시그널 연결*/
    connect(controlClient, &IRCGuiControlClient::sendDoneNotify,
		    this, &MainWindow::fillToServerTextEdit);
    /*서버로부터의 메시지*/
    connect(controlClient, &IRCGuiControlClient::msgReceived,
		    this, &MainWindow::fillFromServerTextEdit);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , controlClient( new IRCGuiControlClient( this ))
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Control Client");
    connectActions();
}

MainWindow::~MainWindow()
{
    delete ui;
}
