/********************************************************************************
** Form generated from reading UI file 'dialogaudiobookcreate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUDIOBOOKCREATE_H
#define UI_DIALOGAUDIOBOOKCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAudiobookCreate
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
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_year_input;
    QLineEdit *lineEdit_year;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_duration_input;
    QLineEdit *lineEdit_duration;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_audioFormat_input;
    QLineEdit *lineEdit_audioFormat;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_publisher_input;
    QLineEdit *lineEdit_publisher;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_price_input;
    QLineEdit *lineEdit_year_4;

    void setupUi(QDialog *DialogAudiobookCreate)
    {
        if (DialogAudiobookCreate->objectName().isEmpty())
            DialogAudiobookCreate->setObjectName("DialogAudiobookCreate");
        DialogAudiobookCreate->resize(719, 369);
        horizontalLayoutWidget = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 301, 41));
        VL_ID = new QHBoxLayout(horizontalLayoutWidget);
        VL_ID->setObjectName("VL_ID");
        VL_ID->setContentsMargins(10, 0, 10, 0);
        label_id_input = new QLabel(horizontalLayoutWidget);
        label_id_input->setObjectName("label_id_input");

        VL_ID->addWidget(label_id_input);

        lineEdit_id = new QLineEdit(horizontalLayoutWidget);
        lineEdit_id->setObjectName("lineEdit_id");

        VL_ID->addWidget(lineEdit_id);

        horizontalLayoutWidget_2 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(30, 80, 301, 41));
        HL_Name = new QHBoxLayout(horizontalLayoutWidget_2);
        HL_Name->setObjectName("HL_Name");
        HL_Name->setContentsMargins(10, 0, 10, 0);
        label_name_input = new QLabel(horizontalLayoutWidget_2);
        label_name_input->setObjectName("label_name_input");

        HL_Name->addWidget(label_name_input);

        lineEdit_name = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_name->setObjectName("lineEdit_name");

        HL_Name->addWidget(lineEdit_name);

        horizontalLayoutWidget_3 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(30, 170, 301, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 0, 10, 0);
        label_author_input = new QLabel(horizontalLayoutWidget_3);
        label_author_input->setObjectName("label_author_input");

        horizontalLayout_3->addWidget(label_author_input);

        lineEdit_author = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_author->setObjectName("lineEdit_author");

        horizontalLayout_3->addWidget(lineEdit_author);

        horizontalLayoutWidget_5 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(390, 10, 301, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 0, 10, 0);
        label_year_input = new QLabel(horizontalLayoutWidget_5);
        label_year_input->setObjectName("label_year_input");

        horizontalLayout_5->addWidget(label_year_input);

        lineEdit_year = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_year->setObjectName("lineEdit_year");

        horizontalLayout_5->addWidget(lineEdit_year);

        horizontalLayoutWidget_4 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(30, 240, 301, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, 0, 10, 0);
        label_duration_input = new QLabel(horizontalLayoutWidget_4);
        label_duration_input->setObjectName("label_duration_input");

        horizontalLayout_4->addWidget(label_duration_input);

        lineEdit_duration = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_duration->setObjectName("lineEdit_duration");

        horizontalLayout_4->addWidget(lineEdit_duration);

        pushButton = new QPushButton(DialogAudiobookCreate);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 300, 201, 31));
        horizontalLayoutWidget_6 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(390, 80, 301, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(10, 0, 10, 0);
        label_audioFormat_input = new QLabel(horizontalLayoutWidget_6);
        label_audioFormat_input->setObjectName("label_audioFormat_input");

        horizontalLayout_6->addWidget(label_audioFormat_input);

        lineEdit_audioFormat = new QLineEdit(horizontalLayoutWidget_6);
        lineEdit_audioFormat->setObjectName("lineEdit_audioFormat");

        horizontalLayout_6->addWidget(lineEdit_audioFormat);

        horizontalLayoutWidget_7 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(390, 170, 301, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(10, 0, 10, 0);
        label_publisher_input = new QLabel(horizontalLayoutWidget_7);
        label_publisher_input->setObjectName("label_publisher_input");

        horizontalLayout_7->addWidget(label_publisher_input);

        lineEdit_publisher = new QLineEdit(horizontalLayoutWidget_7);
        lineEdit_publisher->setObjectName("lineEdit_publisher");

        horizontalLayout_7->addWidget(lineEdit_publisher);

        horizontalLayoutWidget_8 = new QWidget(DialogAudiobookCreate);
        horizontalLayoutWidget_8->setObjectName("horizontalLayoutWidget_8");
        horizontalLayoutWidget_8->setGeometry(QRect(390, 240, 301, 41));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(10, 0, 10, 0);
        label_price_input = new QLabel(horizontalLayoutWidget_8);
        label_price_input->setObjectName("label_price_input");

        horizontalLayout_8->addWidget(label_price_input);

        lineEdit_year_4 = new QLineEdit(horizontalLayoutWidget_8);
        lineEdit_year_4->setObjectName("lineEdit_year_4");

        horizontalLayout_8->addWidget(lineEdit_year_4);


        retranslateUi(DialogAudiobookCreate);

        QMetaObject::connectSlotsByName(DialogAudiobookCreate);
    } // setupUi

    void retranslateUi(QDialog *DialogAudiobookCreate)
    {
        DialogAudiobookCreate->setWindowTitle(QCoreApplication::translate("DialogAudiobookCreate", "Dialog", nullptr));
        label_id_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "ID:", nullptr));
        label_name_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Name:", nullptr));
        label_author_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Author:", nullptr));
        label_year_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Year:", nullptr));
        label_duration_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Duration:", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogAudiobookCreate", "Create Audiobook", nullptr));
        label_audioFormat_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Audio format", nullptr));
        label_publisher_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Publisher", nullptr));
        label_price_input->setText(QCoreApplication::translate("DialogAudiobookCreate", "Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAudiobookCreate: public Ui_DialogAudiobookCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUDIOBOOKCREATE_H
