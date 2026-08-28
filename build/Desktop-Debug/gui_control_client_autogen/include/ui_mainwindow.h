/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *iPLabel;
    QLineEdit *iPLineEdit;
    QLabel *portLabel;
    QLineEdit *portLineEdit;
    QLabel *passWordLabel;
    QLineEdit *passWordLineEdit;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QLabel *nickNameLabel;
    QLineEdit *nickNameLineEdit;
    QFrame *line_4;
    QPushButton *tryConnectButton;
    QFrame *line;
    QLineEdit *msgToSendLineEdit;
    QLabel *label;
    QPlainTextEdit *statusPlainTextEdit;
    QGridLayout *gridLayout;
    QPlainTextEdit *toServerplainTextEdit;
    QFrame *line_3;
    QLabel *toServerLabel;
    QLabel *fromServerLabel;
    QPlainTextEdit *fromServerPlainTextEdit;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1148, 884);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        iPLabel = new QLabel(centralwidget);
        iPLabel->setObjectName("iPLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, iPLabel);

        iPLineEdit = new QLineEdit(centralwidget);
        iPLineEdit->setObjectName("iPLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, iPLineEdit);

        portLabel = new QLabel(centralwidget);
        portLabel->setObjectName("portLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, portLabel);

        portLineEdit = new QLineEdit(centralwidget);
        portLineEdit->setObjectName("portLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, portLineEdit);

        passWordLabel = new QLabel(centralwidget);
        passWordLabel->setObjectName("passWordLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, passWordLabel);

        passWordLineEdit = new QLineEdit(centralwidget);
        passWordLineEdit->setObjectName("passWordLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, passWordLineEdit);

        userNameLabel = new QLabel(centralwidget);
        userNameLabel->setObjectName("userNameLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, userNameLabel);

        userNameLineEdit = new QLineEdit(centralwidget);
        userNameLineEdit->setObjectName("userNameLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, userNameLineEdit);

        nickNameLabel = new QLabel(centralwidget);
        nickNameLabel->setObjectName("nickNameLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, nickNameLabel);

        nickNameLineEdit = new QLineEdit(centralwidget);
        nickNameLineEdit->setObjectName("nickNameLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, nickNameLineEdit);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line_4);


        horizontalLayout_3->addLayout(formLayout);

        tryConnectButton = new QPushButton(centralwidget);
        tryConnectButton->setObjectName("tryConnectButton");

        horizontalLayout_3->addWidget(tryConnectButton);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        msgToSendLineEdit = new QLineEdit(centralwidget);
        msgToSendLineEdit->setObjectName("msgToSendLineEdit");

        verticalLayout->addWidget(msgToSendLineEdit);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        statusPlainTextEdit = new QPlainTextEdit(centralwidget);
        statusPlainTextEdit->setObjectName("statusPlainTextEdit");
        statusPlainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(statusPlainTextEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        toServerplainTextEdit = new QPlainTextEdit(centralwidget);
        toServerplainTextEdit->setObjectName("toServerplainTextEdit");
        toServerplainTextEdit->setReadOnly(true);

        gridLayout->addWidget(toServerplainTextEdit, 1, 0, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 1, 1, 1);

        toServerLabel = new QLabel(centralwidget);
        toServerLabel->setObjectName("toServerLabel");
        toServerLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(toServerLabel, 0, 0, 1, 1);

        fromServerLabel = new QLabel(centralwidget);
        fromServerLabel->setObjectName("fromServerLabel");
        fromServerLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fromServerLabel, 0, 2, 1, 1);

        fromServerPlainTextEdit = new QPlainTextEdit(centralwidget);
        fromServerPlainTextEdit->setObjectName("fromServerPlainTextEdit");
        fromServerPlainTextEdit->setReadOnly(true);

        gridLayout->addWidget(fromServerPlainTextEdit, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1148, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        iPLabel->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        iPLineEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        iPLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        portLabel->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        portLineEdit->setText(QCoreApplication::translate("MainWindow", "8080", nullptr));
        portLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "IRC server port", nullptr));
        passWordLabel->setText(QCoreApplication::translate("MainWindow", "PassWord", nullptr));
        passWordLineEdit->setText(QCoreApplication::translate("MainWindow", "1234", nullptr));
        passWordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "IRC server passwd", nullptr));
        userNameLabel->setText(QCoreApplication::translate("MainWindow", "UserName", nullptr));
        userNameLineEdit->setText(QCoreApplication::translate("MainWindow", "user", nullptr));
        userNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "username you want to use", nullptr));
        nickNameLabel->setText(QCoreApplication::translate("MainWindow", "NickName", nullptr));
        nickNameLineEdit->setText(QCoreApplication::translate("MainWindow", "nick", nullptr));
        nickNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "nickname you want to use", nullptr));
        tryConnectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        msgToSendLineEdit->setText(QCoreApplication::translate("MainWindow", "Type 'Enter' to send message to server.", nullptr));
        msgToSendLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Message to send to server", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        toServerplainTextEdit->setPlaceholderText(QString());
        toServerLabel->setText(QCoreApplication::translate("MainWindow", "To Server", nullptr));
        fromServerLabel->setText(QCoreApplication::translate("MainWindow", "From Server", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
