/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *menublock;
    QLabel *label_menu;
    QPushButton *button_createSong;
    QPushButton *button_printSong;
    QPushButton *button_createAudiobook;
    QPushButton *button_printAudiobook;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(617, 369);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(50, 80, 491, 221));
        menublock = new QVBoxLayout(verticalLayoutWidget);
        menublock->setObjectName("menublock");
        menublock->setContentsMargins(0, 0, 0, 0);
        label_menu = new QLabel(verticalLayoutWidget);
        label_menu->setObjectName("label_menu");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_menu->sizePolicy().hasHeightForWidth());
        label_menu->setSizePolicy(sizePolicy);
        label_menu->setTextFormat(Qt::AutoText);
        label_menu->setAlignment(Qt::AlignCenter);
        label_menu->setMargin(0);

        menublock->addWidget(label_menu);

        button_createSong = new QPushButton(verticalLayoutWidget);
        button_createSong->setObjectName("button_createSong");

        menublock->addWidget(button_createSong);

        button_printSong = new QPushButton(verticalLayoutWidget);
        button_printSong->setObjectName("button_printSong");

        menublock->addWidget(button_printSong);

        button_createAudiobook = new QPushButton(verticalLayoutWidget);
        button_createAudiobook->setObjectName("button_createAudiobook");

        menublock->addWidget(button_createAudiobook);

        button_printAudiobook = new QPushButton(verticalLayoutWidget);
        button_printAudiobook->setObjectName("button_printAudiobook");

        menublock->addWidget(button_printAudiobook);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 617, 21));
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
        label_menu->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        button_createSong->setText(QCoreApplication::translate("MainWindow", "Create Song", nullptr));
        button_printSong->setText(QCoreApplication::translate("MainWindow", "Print Song", nullptr));
        button_createAudiobook->setText(QCoreApplication::translate("MainWindow", "Create Audiobook", nullptr));
        button_printAudiobook->setText(QCoreApplication::translate("MainWindow", "Print Audiobook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
