#include "showdailypatients.h"
#include "ui_showdailypatients.h"

ShowDailyPatients::ShowDailyPatients(QWidget *parent, bool today_or_not) :
    QDialog(parent),
    ui(new Ui::ShowDailyPatients)
{
    ui->setupUi(this);
    this -> today_or_booked = today_or_not;

    this -> setFixedSize(size());

    ui -> today_patients_tabel -> setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui -> today_patients_tabel -> horizontalHeader() -> setStretchLastSection(true);
    ui -> today_patients_tabel -> horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    this -> load_data_to_table();
}

ShowDailyPatients::~ShowDailyPatients()
{
    delete ui;
}

void ShowDailyPatients::on_pushButton_clicked()
{
    this -> hide();
}

void ShowDailyPatients::load_data_to_table()
{
    patient p;
    QSqlQueryModel *model;
    if(this -> today_or_booked){
        model = p.fetch_all_today_patients();
    }else{
        model = p.fetch_all_today_booked_patients(QDate::currentDate().toString("yyyy/MM/dd"));
    }

    this -> ui -> today_patients_tabel -> setModel(model);
}
