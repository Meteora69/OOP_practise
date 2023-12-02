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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogPrintSong
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *DialogPrintSong)
    {
        if (DialogPrintSong->objectName().isEmpty())
            DialogPrintSong->setObjectName("DialogPrintSong");
        DialogPrintSong->resize(744, 400);
        gridLayout_2 = new QGridLayout(DialogPrintSong);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(DialogPrintSong);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


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
