#ifndef DIALOGCREATESONG_H
#define DIALOGCREATESONG_H

#include <QDialog>
#include "song.h"
namespace Ui {
class DialogCreateSong;
}

class DialogCreateSong : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCreateSong(QWidget *parent = nullptr);
    ~DialogCreateSong();
signals:
    void createdSong(Song*);
private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogCreateSong *ui;

};

#endif // DIALOGCREATESONG_H
