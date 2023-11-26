#include "dialogprintsong.h"
#include "ui_dialogprintsong.h"

DialogPrintSong::DialogPrintSong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPrintSong)
{
    ui->setupUi(this);
}

DialogPrintSong::~DialogPrintSong()
{
    delete ui;
}
void DialogPrintSong::on_cretedSong(Song *song)
{
//    students.push_back(student);
    QListWidgetItem* item = new QListWidgetItem(song->toString());
    ui->listWidget->addItem(item);
}
