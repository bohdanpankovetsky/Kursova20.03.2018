#include "input.h"
#include "ui_input.h"
#include <QMessageBox>
#include <QValidator>

Input::Input(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Input)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_save,SIGNAL(clicked(bool)),this,SLOT(on_pb_save_clicked()));
    QString styleSheet = "QLineEdit {border: 0px solid black; border-bottom: 1px solid #C0C0C0;} QLineEdit:focus{border: 0px solid black; border-bottom: 2px solid #2196F3;}";

    ui->id->setStyleSheet(styleSheet);
    ui->id->setValidator(new QIntValidator(this));
    ui->vlasnik->setStyleSheet(styleSheet);
    ui->nazva_avto->setStyleSheet(styleSheet);
    ui->polomka1->setStyleSheet(styleSheet);
    ui->polomka2->setStyleSheet(styleSheet);
    ui->polomka3->setStyleSheet(styleSheet);
    ui->polomka4->setStyleSheet(styleSheet);
    ui->tech_obsl1->setStyleSheet(styleSheet);
    ui->tech_obsl2->setStyleSheet(styleSheet);
    ui->tech_obsl3->setStyleSheet(styleSheet);
    ui->vartist_robit->setStyleSheet(styleSheet);
}

Input::~Input()
{
    delete ui;
}

void Input::read(const QJsonObject &json)
{
 mId= json["id"].toString();
 mVlasnik= json["Власник"].toString();
 mNazva_avto= json["Назва авто"].toString();
 mHarantia= json["Гарантія"].toString();
 mPolomka1= json["Поломка 1"].toString();
 mPolomka2= json["Поломка 2"].toString();
 mPolomka3= json["Поломка 3"].toString();
 mPolomka4= json["Поломка 4"].toString();
 mTech_obsl1= json["Технічне обслуговування 1"].toString();
 mTech_obsl2= json["Технічне обслуговування 2"].toString();
 mTech_obsl3= json["Технічне обслуговування 3"].toString();
 mVartist_robit= json["Вартість робіт"].toString();
}

void Input::write(QJsonObject &json) const
{
 json["id"]= mId;
 json["Власник"]= mVlasnik;
 json["Назва авто"]= mNazva_avto;
 json["Гарантія"]= mHarantia;
 json["Поломка 1"]= mPolomka1;
 json["Поломка 2"]= mPolomka2;
 json["Поломка 3"]= mPolomka3;
 json["Поломка 4"]= mPolomka4;
 json["Технічне обслуговування 1"]= mTech_obsl1;
 json["Технічне обслуговування 2"]= mTech_obsl2;
 json["Технічне обслуговування 3"]= mTech_obsl3;
 json["Вартість робіт"]= mVartist_robit;
}
bool Input::saveData(Input::SaveFormat saveFormat) const
{
 QFile saveFile(saveFormat == Json ?
 QStringLiteral("./data.json"):QStringLiteral("./save.dat"));

 QJsonObject dataObject;
 write(dataObject);
 QJsonDocument saveDoc(dataObject);
 saveFile.open(QIODevice::WriteOnly);
 saveFile.write(saveFormat == Json ?
 saveDoc.toJson():saveDoc.toBinaryData());
 return true;
}

void Input::on_pushButton_save_clicked()
{
    mId= ui->id->text();
    mVlasnik= ui->vlasnik->text();
    mNazva_avto= ui->nazva_avto->text();
    mHarantia= ui->harantia->isChecked();
    mPolomka1= ui->polomka1->text();
    mPolomka2= ui->polomka2->text();
    mPolomka3= ui->polomka3->text();
    mPolomka4= ui->polomka4->text();
    mTech_obsl1= ui->tech_obsl1->text();
    mTech_obsl2= ui->tech_obsl2->text();
    mTech_obsl3= ui->tech_obsl3->text();
    mVartist_robit= ui->vartist_robit->text();
    QMessageBox msgBox;
    msgBox.setWindowTitle("Повідомлення");
    msgBox.setText("Автомобіль додано в базу даних");
//    msgBox.button(QMessageBox::Yes)->setObjectName("Yes");
    msgBox.setStyleSheet("QPushButton {width: 100px; height: 30px; background-color: #2196F3; border: 0px; color: white; font-size: 18;}" "QPushButton:pressed {background-color: #70b8ef;}");
    msgBox.exec();




   saveData(Json);
}
