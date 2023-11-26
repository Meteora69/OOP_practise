/********************************************************************************
** Form generated from reading UI file 'dialogcreatesong.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATESONG_H
#define UI_DIALOGCREATESONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCreateSong
{
public:
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
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_ganre_input;
    QLineEdit *lineEdit_genre;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_languige_input;
    QLineEdit *lineEdit_languige;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_lyric_input;
    QLineEdit *lineEdit_lyric;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogCreateSong)
    {
        if (DialogCreateSong->objectName().isEmpty())
            DialogCreateSong->setObjectName("DialogCreateSong");
        DialogCreateSong->resize(728, 308);
        horizontalLayoutWidget = new QWidget(DialogCreateSong);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 301, 41));
        VL_ID = new QHBoxLayout(horizontalLayoutWidget);
        VL_ID->setObjectName("VL_ID");
        VL_ID->setContentsMargins(10, 0, 10, 0);
        label_id_input = new QLabel(horizontalLayoutWidget);
        label_id_input->setObjectName("label_id_input");

        VL_ID->addWidget(label_id_input);

        lineEdit_id = new QLineEdit(horizontalLayoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        VL_ID->addWidget(lineEdit_id);

        horizontalLayoutWidget_2 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(20, 70, 301, 41));
        HL_Name = new QHBoxLayout(horizontalLayoutWidget_2);
        HL_Name->setObjectName("HL_Name");
        HL_Name->setContentsMargins(10, 0, 10, 0);
        label_name_input = new QLabel(horizontalLayoutWidget_2);
        label_name_input->setObjectName("label_name_input");

        HL_Name->addWidget(label_name_input);

        lineEdit_name = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_name->setObjectName("lineEdit_name");

        HL_Name->addWidget(lineEdit_name);

        horizontalLayoutWidget_3 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(20, 130, 301, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 0, 10, 0);
        label_author_input = new QLabel(horizontalLayoutWidget_3);
        label_author_input->setObjectName("label_author_input");

        horizontalLayout_3->addWidget(label_author_input);

        lineEdit_author = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_author->setObjectName("lineEdit_author");

        horizontalLayout_3->addWidget(lineEdit_author);

        horizontalLayoutWidget_4 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(20, 240, 301, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, 0, 10, 0);
        label_duration_input = new QLabel(horizontalLayoutWidget_4);
        label_duration_input->setObjectName("label_duration_input");

        horizontalLayout_4->addWidget(label_duration_input);

        lineEdit_duration = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_duration->setObjectName("lineEdit_duration");

        horizontalLayout_4->addWidget(lineEdit_duration);

        horizontalLayoutWidget_5 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(20, 190, 301, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        label_year_input = new QLabel(horizontalLayoutWidget_5);
        label_year_input->setObjectName("label_year_input");

        horizontalLayout_5->addWidget(label_year_input);

        lineEdit_year = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_year->setObjectName("lineEdit_year");

        horizontalLayout_5->addWidget(lineEdit_year);

        horizontalLayoutWidget_6 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(370, 10, 301, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(10, 0, 10, 0);
        label_album_input = new QLabel(horizontalLayoutWidget_6);
        label_album_input->setObjectName("label_album_input");

        horizontalLayout_6->addWidget(label_album_input);

        lineEdit_album = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_album->setObjectName("lineEdit_album");

        horizontalLayout_6->addWidget(lineEdit_album);

        horizontalLayoutWidget_9 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_9->setObjectName("horizontalLayoutWidget_9");
        horizontalLayoutWidget_9->setGeometry(QRect(370, 70, 301, 41));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(10, 0, 10, 0);
        label_ganre_input = new QLabel(horizontalLayoutWidget_9);
        label_ganre_input->setObjectName("label_ganre_input");

        horizontalLayout_9->addWidget(label_ganre_input);

        lineEdit_genre = new QLineEdit(horizontalLayoutWidget_9);
        lineEdit_genre->setObjectName("lineEdit_genre");

        horizontalLayout_9->addWidget(lineEdit_genre);

        horizontalLayoutWidget_8 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_8->setObjectName("horizontalLayoutWidget_8");
        horizontalLayoutWidget_8->setGeometry(QRect(370, 190, 301, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, 0, 10, 0);
        label_languige_input = new QLabel(horizontalLayoutWidget_8);
        label_languige_input->setObjectName("label_languige_input");

        horizontalLayout_8->addWidget(label_languige_input);

        lineEdit_languige = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_languige->setObjectName("lineEdit_languige");

        horizontalLayout_8->addWidget(lineEdit_languige);

        horizontalLayoutWidget_7 = new QWidget(DialogCreateSong);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(370, 130, 301, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(10, 0, 10, 0);
        label_lyric_input = new QLabel(horizontalLayoutWidget_7);
        label_lyric_input->setObjectName("label_lyric_input");

        horizontalLayout_7->addWidget(label_lyric_input);

        lineEdit_lyric = new QLineEdit(horizontalLayoutWidget_7);
        lineEdit_lyric->setObjectName("lineEdit_lyric");

        horizontalLayout_7->addWidget(lineEdit_lyric);

        pushButton = new QPushButton(DialogCreateSong);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 250, 231, 31));

        retranslateUi(DialogCreateSong);

        QMetaObject::connectSlotsByName(DialogCreateSong);
    } // setupUi

    void retranslateUi(QDialog *DialogCreateSong)
    {
        DialogCreateSong->setWindowTitle(QCoreApplication::translate("DialogCreateSong", "Dialog", nullptr));
        label_id_input->setText(QCoreApplication::translate("DialogCreateSong", "ID:", nullptr));
        label_name_input->setText(QCoreApplication::translate("DialogCreateSong", "Name:", nullptr));
        label_author_input->setText(QCoreApplication::translate("DialogCreateSong", "Author:", nullptr));
        label_duration_input->setText(QCoreApplication::translate("DialogCreateSong", "Duration:", nullptr));
        label_year_input->setText(QCoreApplication::translate("DialogCreateSong", "Year:", nullptr));
        label_album_input->setText(QCoreApplication::translate("DialogCreateSong", "Album:", nullptr));
        label_ganre_input->setText(QCoreApplication::translate("DialogCreateSong", "Genre:", nullptr));
        label_languige_input->setText(QCoreApplication::translate("DialogCreateSong", "Languge:", nullptr));
        label_lyric_input->setText(QCoreApplication::translate("DialogCreateSong", "Lyric:", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogCreateSong", "Add Song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCreateSong: public Ui_DialogCreateSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATESONG_H
