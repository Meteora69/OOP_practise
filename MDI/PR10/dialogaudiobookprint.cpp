#include "dialogaudiobookprint.h"
#include "ui_dialogaudiobookprint.h"

DialogAudiobookPrint::DialogAudiobookPrint(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAudiobookPrint)
{
    ui->setupUi(this);
}

DialogAudiobookPrint::~DialogAudiobookPrint()
{
    delete ui;
}
void DialogAudiobookPrint::on_cretedAudiobook(Audiobook *audiobook)
{
//    students.push_back(student);
    QListWidgetItem* item = new QListWidgetItem(audiobook->toString());
    ui->listWidget->addItem(item);
}
