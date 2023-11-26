#ifndef DIALOGAUDIOBOOKCREATE_H
#define DIALOGAUDIOBOOKCREATE_H

#include <QDialog>
#include "audiobook.h"
namespace Ui {
class DialogAudiobookCreate;
}

class DialogAudiobookCreate : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAudiobookCreate(QWidget *parent = nullptr);
    ~DialogAudiobookCreate();
signals:
    void createdAudiobook(Audiobook*);
private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogAudiobookCreate *ui;
};

#endif // DIALOGAUDIOBOOKCREATE_H
