#ifndef DIALOGPRINTSONG_H
#define DIALOGPRINTSONG_H

#include <QDialog>
#include "song.h"
namespace Ui {
class DialogPrintSong;
}

class DialogPrintSong : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPrintSong(QWidget *parent = nullptr);
    ~DialogPrintSong();

public slots:
    void on_cretedSong(Song *song);
private:
    Ui::DialogPrintSong *ui;
    QVector<Song*> songs;
};

#endif // DIALOGPRINTSONG_H
