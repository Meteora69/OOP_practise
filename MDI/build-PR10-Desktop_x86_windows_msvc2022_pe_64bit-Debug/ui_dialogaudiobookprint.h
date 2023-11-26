/********************************************************************************
** Form generated from reading UI file 'dialogaudiobookprint.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAUDIOBOOKPRINT_H
#define UI_DIALOGAUDIOBOOKPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAudiobookPrint
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *DialogAudiobookPrint)
    {
        if (DialogAudiobookPrint->objectName().isEmpty())
            DialogAudiobookPrint->setObjectName("DialogAudiobookPrint");
        DialogAudiobookPrint->resize(536, 338);
        listWidget = new QListWidget(DialogAudiobookPrint);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 0, 521, 311));

        retranslateUi(DialogAudiobookPrint);

        QMetaObject::connectSlotsByName(DialogAudiobookPrint);
    } // setupUi

    void retranslateUi(QDialog *DialogAudiobookPrint)
    {
        DialogAudiobookPrint->setWindowTitle(QCoreApplication::translate("DialogAudiobookPrint", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAudiobookPrint: public Ui_DialogAudiobookPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAUDIOBOOKPRINT_H
