#ifndef MAINWINDOW_H
#define MAINWINDOW_H

# include "ircguicontrolclient.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    IRCGuiControlClient *controlClient;
    void connectActions( void );
    void connectionFailedAction( QString reason );
    void updateServerStatusPlain( QString msg );
    void tryConnectButtonPressed( void );
    void sendLoginMsgs( void );
    void sendMsgToServer( void );
    void fillToServerTextEdit( QString msg );
    void fillFromServerTextEdit( QString msg );
};
#endif // MAINWINDOW_H
