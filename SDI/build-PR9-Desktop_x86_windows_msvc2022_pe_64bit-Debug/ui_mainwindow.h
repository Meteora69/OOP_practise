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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionCreate;
    QAction *actionOutput;
    QAction *actionExit;
    QAction *actionCreate_2;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *VL_ID;
    QLabel *label_id_input;
    QLineEdit *lineEdit_id;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *HL_Name;
    QLabel *label_name_input;
    QLineEdit *lineEdit_name;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_author_input;
    QLineEdit *lineEdit_author;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_duration_input;
    QLineEdit *lineEdit_duration;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_year_input;
    QLineEdit *lineEdit_year;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_album_input;
    QLineEdit *lineEdit_album;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_lyric_input;
    QLineEdit *lineEdit_lyric;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_languige_input;
    QLineEdit *lineEdit_languige;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_ganre_input;
    QLineEdit *lineEdit_genre;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuCreate_object;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(800, 600);
        actionCreate = new QAction(mainWindow);
        actionCreate->setObjectName("actionCreate");
        actionOutput = new QAction(mainWindow);
        actionOutput->setObjectName("actionOutput");
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName("actionExit");
        actionCreate_2 = new QAction(mainWindow);
        actionCreate_2->setObjectName("actionCreate_2");
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 10, 301, 41));
        VL_ID = new QHBoxLayout(horizontalLayoutWidget);
        VL_ID->setObjectName("VL_ID");
        VL_ID->setContentsMargins(10, 0, 10, 0);
        label_id_input = new QLabel(horizontalLayoutWidget);
        label_id_input->setObjectName("label_id_input");

        VL_ID->addWidget(label_id_input);

        lineEdit_id = new QLineEdit(horizontalLayoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        VL_ID->addWidget(lineEdit_id);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(80, 70, 301, 41));
        HL_Name = new QHBoxLayout(horizontalLayoutWidget_2);
        HL_Name->setObjectName("HL_Name");
        HL_Name->setContentsMargins(10, 0, 10, 0);
        label_name_input = new QLabel(horizontalLayoutWidget_2);
        label_name_input->setObjectName("label_name_input");

        HL_Name->addWidget(label_name_input);

        lineEdit_name = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_name->setObjectName("lineEdit_name");

        HL_Name->addWidget(lineEdit_name);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(80, 120, 301, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 0, 10, 0);
        label_author_input = new QLabel(horizontalLayoutWidget_3);
        label_author_input->setObjectName("label_author_input");

        horizontalLayout_3->addWidget(label_author_input);

        lineEdit_author = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_author->setObjectName("lineEdit_author");

        horizontalLayout_3->addWidget(lineEdit_author);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(80, 180, 301, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, 0, 10, 0);
        label_duration_input = new QLabel(horizontalLayoutWidget_4);
        label_duration_input->setObjectName("label_duration_input");

        horizontalLayout_4->addWidget(label_duration_input);

        lineEdit_duration = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_duration->setObjectName("lineEdit_duration");

        horizontalLayout_4->addWidget(lineEdit_duration);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(80, 240, 301, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        label_year_input = new QLabel(horizontalLayoutWidget_5);
        label_year_input->setObjectName("label_year_input");

        horizontalLayout_5->addWidget(label_year_input);

        lineEdit_year = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_year->setObjectName("lineEdit_year");

        horizontalLayout_5->addWidget(lineEdit_year);

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(80, 300, 301, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(10, 0, 10, 0);
        label_album_input = new QLabel(horizontalLayoutWidget_6);
        label_album_input->setObjectName("label_album_input");

        horizontalLayout_6->addWidget(label_album_input);

        lineEdit_album = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_album->setObjectName("lineEdit_album");

        horizontalLayout_6->addWidget(lineEdit_album);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(80, 480, 301, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(10, 0, 10, 0);
        label_lyric_input = new QLabel(horizontalLayoutWidget_7);
        label_lyric_input->setObjectName("label_lyric_input");

        horizontalLayout_7->addWidget(label_lyric_input);

        lineEdit_lyric = new QLineEdit(horizontalLayoutWidget_7);
        lineEdit_lyric->setObjectName("lineEdit_lyric");

        horizontalLayout_7->addWidget(lineEdit_lyric);

        horizontalLayoutWidget_8 = new QWidget(centralwidget);
        horizontalLayoutWidget_8->setObjectName("horizontalLayoutWidget_8");
        horizontalLayoutWidget_8->setGeometry(QRect(80, 420, 301, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, 0, 10, 0);
        label_languige_input = new QLabel(horizontalLayoutWidget_8);
        label_languige_input->setObjectName("label_languige_input");

        horizontalLayout_8->addWidget(label_languige_input);

        lineEdit_languige = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_languige->setObjectName("lineEdit_languige");

        horizontalLayout_8->addWidget(lineEdit_languige);

        horizontalLayoutWidget_9 = new QWidget(centralwidget);
        horizontalLayoutWidget_9->setObjectName("horizontalLayoutWidget_9");
        horizontalLayoutWidget_9->setGeometry(QRect(80, 360, 301, 41));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(10, 0, 10, 0);
        label_ganre_input = new QLabel(horizontalLayoutWidget_9);
        label_ganre_input->setObjectName("label_ganre_input");

        horizontalLayout_9->addWidget(label_ganre_input);

        lineEdit_genre = new QLineEdit(horizontalLayoutWidget_9);
        lineEdit_genre->setObjectName("lineEdit_genre");

        horizontalLayout_9->addWidget(lineEdit_genre);

        mainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName("statusbar");
        mainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCreate_object = new QMenu(menubar);
        menuCreate_object->setObjectName("menuCreate_object");
        mainWindow->setMenuBar(menubar);

        menubar->addAction(menuCreate_object->menuAction());
        menuCreate_object->addSeparator();
        menuCreate_object->addAction(actionCreate_2);
        menuCreate_object->addSeparator();
        menuCreate_object->addSeparator();
        menuCreate_object->addAction(actionOutput);
        menuCreate_object->addAction(actionExit);
        menuCreate_object->addSeparator();

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        actionCreate->setText(QCoreApplication::translate("mainWindow", "Create", nullptr));
        actionOutput->setText(QCoreApplication::translate("mainWindow", "Output", nullptr));
        actionExit->setText(QCoreApplication::translate("mainWindow", "Exit", nullptr));
        actionCreate_2->setText(QCoreApplication::translate("mainWindow", "Create", nullptr));
        label_id_input->setText(QCoreApplication::translate("mainWindow", "ID:", nullptr));
        label_name_input->setText(QCoreApplication::translate("mainWindow", "Name:", nullptr));
        label_author_input->setText(QCoreApplication::translate("mainWindow", "Author:", nullptr));
        label_duration_input->setText(QCoreApplication::translate("mainWindow", "Duration:", nullptr));
        label_year_input->setText(QCoreApplication::translate("mainWindow", "Year:", nullptr));
        label_album_input->setText(QCoreApplication::translate("mainWindow", "Album:", nullptr));
        label_lyric_input->setText(QCoreApplication::translate("mainWindow", "Lyric:", nullptr));
        label_languige_input->setText(QCoreApplication::translate("mainWindow", "Languge:", nullptr));
        label_ganre_input->setText(QCoreApplication::translate("mainWindow", "Genre:", nullptr));
        menuCreate_object->setTitle(QCoreApplication::translate("mainWindow", "Create object", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
