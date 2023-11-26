/********************************************************************************
** Form generated from reading UI file 'dialogprintstuden.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPRINTSTUDEN_H
#define UI_DIALOGPRINTSTUDEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogPrintStuden
{
public:

    void setupUi(QDialog *DialogPrintStuden)
    {
        if (DialogPrintStuden->objectName().isEmpty())
            DialogPrintStuden->setObjectName("DialogPrintStuden");
        DialogPrintStuden->resize(400, 300);

        retranslateUi(DialogPrintStuden);

        QMetaObject::connectSlotsByName(DialogPrintStuden);
    } // setupUi

    void retranslateUi(QDialog *DialogPrintStuden)
    {
        DialogPrintStuden->setWindowTitle(QCoreApplication::translate("DialogPrintStuden", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPrintStuden: public Ui_DialogPrintStuden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPRINTSTUDEN_H
