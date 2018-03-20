include "input.h"
include "ui_input.h"

Input::Input(QWidget *parent) : QDialog(parent), ui(new Ui::Input)
{
 ui->setupUi(this);
}
Input::~Input()
{
 delete ui;
}

void Json::read(const QJsonObject &json)
{
 mVorname= json["vorname"].toString();
 mNachname= json["nachname"].toString();
 mLand= json["land"].toString();
 mName= json["name"].toString();
 mPassword= json["password"].toString();
}

void Address::write(QJsonObject &json) const
{
 json["vorname"]= mVorname;
 json["nachmane"]= mNachname;
 json["land"]= mLand;
 json["name"]= mName;
 json["password"]= mPassword;
}
bool Address::saveData(Address::SaveFormat saveFormat) const
{
 QFile saveFile(saveFormat == Json ?
 QStringLiteral("data.json"):QStringLiteral("save.dat"));

 QJsonObject dataObject;
 write(dataObject);
 QJsonDocument saveDoc(dataObject);
 saveFile.write(saveFormat == Json ?
 saveDoc.toJson():saveDoc.toBinaryData());
 return true;
}

void Address::on_pb_save_clicked()
{ }
