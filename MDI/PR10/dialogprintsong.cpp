#include "dialogprintsong.h"
#include "ui_dialogprintsong.h"
#include "song.h"

DialogPrintSong::DialogPrintSong(DBManager* dbManager,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPrintSong), dbManager(dbManager)
{


    if (!dbManager) {
           qDebug() << "Неправильний вказівник DBManager у конструкторі DialogPrintSong";
           // Обробте помилку, можливо, закрийте діалогове вікно або покажіть повідомлення про помилку
           // в залежності від логіки вашого додатка.
           return;
       }
    ui->setupUi(this);
    this->setupModel(TABLE_SONG,
                         QStringList() << tr("id")
                                       << tr("Name")
                                       << tr("Author")
                                       << tr("Album")
                                       << tr("Genre")
                                       << tr("Lyricist")
                                       << tr("Language")
                                       << tr("Year")
                                       << tr("Duration")
        );

        // Initialize the UI for displaying the table data
        this->createUI();
}

DialogPrintSong::~DialogPrintSong()
{
    delete ui;
    if (model)
            delete model;
}
void DialogPrintSong::on_cretedSong(Song *song)
{

    if (!dbManager->inserIntoTable(*song)) {
          qDebug() << "Error inserting data into the database.";}
 model->select();

}

void DialogPrintSong::setupModel(const QString& tableName, const QStringList& headers) {
    /* Виконуємо ініціалізацію моделі представлення даних
     * з вказанням імені таблиці в базі даних, до якої
     * буде виконуватись звернення
     * */
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable(tableName);

    // Встановлюємо назви стовпців в таблиці із сортуванням даних
    for (int i = 0, j = 0; i < model->columnCount(); i++, j++) {
        model->setHeaderData(i, Qt::Horizontal, headers[j]);
    }
    // Встановлюємо сортування по збільшення даних по нульовому стовпцю
    model->setSort(0, Qt::AscendingOrder);
}

void DialogPrintSong::createUI() {
    ui->tableView->setModel(model);     // Встановлюємо модель на TableView
    ui->tableView->setColumnHidden(0, true);    // Приховуємо колонку з  id записів таблиці БД
    // Дозволяємо виділення рядків
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Встановлюємо режим виділення лише одного рядка в таблиці
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Встановлюємо розмір колонок по вмісту
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // Виконуємо вибірку даних із таблиці
}
