/********************************************************************************
** Form generated from reading UI file 'dialogprintsong.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPRINTSONG_H
#define UI_DIALOGPRINTSONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPrintSong
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *DialogPrintSong)
    {
        if (DialogPrintSong->objectName().isEmpty())
            DialogPrintSong->setObjectName("DialogPrintSong");
        DialogPrintSong->resize(744, 400);
        listWidget = new QListWidget(DialogPrintSong);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 10, 701, 371));

        retranslateUi(DialogPrintSong);

        QMetaObject::connectSlotsByName(DialogPrintSong);
    } // setupUi

    void retranslateUi(QDialog *DialogPrintSong)
    {
        DialogPrintSong->setWindowTitle(QCoreApplication::translate("DialogPrintSong", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPrintSong: public Ui_DialogPrintSong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPRINTSONG_H
