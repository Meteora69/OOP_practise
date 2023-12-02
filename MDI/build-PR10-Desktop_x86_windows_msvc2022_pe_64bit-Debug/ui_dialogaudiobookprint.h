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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogAudiobookPrint
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *DialogAudiobookPrint)
    {
        if (DialogAudiobookPrint->objectName().isEmpty())
            DialogAudiobookPrint->setObjectName("DialogAudiobookPrint");
        DialogAudiobookPrint->resize(521, 340);
        gridLayout_2 = new QGridLayout(DialogAudiobookPrint);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(DialogAudiobookPrint);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


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
