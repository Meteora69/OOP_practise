#ifndef DIALOGAUDIOBOOKPRINT_H
#define DIALOGAUDIOBOOKPRINT_H

#include <QDialog>
#include "audiobook.h"

namespace Ui {
class DialogAudiobookPrint;
}

class DialogAudiobookPrint : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAudiobookPrint(QWidget *parent = nullptr);
    ~DialogAudiobookPrint();
public slots:
    void on_cretedAudiobook(Audiobook *Audiobook);
private:
    Ui::DialogAudiobookPrint *ui;
     QVector<Audiobook*> audiobook;
};

#endif // DIALOGAUDIOBOOKPRINT_H
