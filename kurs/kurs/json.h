#ifndef JSON_H
#define JSON_H
#include <QDialog>
#include <QFile>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QString>
#include <QDir>
#include "signalslotsample.h"
#include <QTemporaryFile>

namespace Ui
{
 class Input;
}
class Input : public QDialog
{
 Q_OBJECT
 public:
 explicit Address (QWidget *parent = 0);
~Address();
 enum SaveFormat
 {
   Json
 };
 Input(const QString &id, QString &vlasnik, QString &nazva_avto,//
 QString &harantia, QString &polomka1, QString &polomka2, QString &polomka3, QString &polomka4,
       QString &tech_obsl1, QString &tech_obsl2, QString &tech_obsl3, QString &vartist_robit);//

  QString id()const; //
  void setId (const QString &id);//

  QString vlasnik()const; //
  void setVlasnik (const QString &vlasnik); //

  QString nazva_avto()const; //
  void setNazva_avto(const QString &nazva_avto); //

  QString harantia()const; //
  void setHarantia (const QString &harantia); //

  QString polomka1()const; //
  void setPolomka1(const QString &polomka1); //

  QString polomka2()const; //
  void setPolomka2(const QString &polomka2); //

  QString polomka3()const; //
  void setPolomka3(const QString &polomka3); //

  QString polomka4()const; //
  void setPolomka4(const QString &polomka4); //

  QString tech_obsl1()const; //
  void setTech_obsl1(const QString &tech_obsl1); //

  QString tech_obsl2()const; //
  void setTech_obsl2(const QString &tech_obsl2); //

  QString tech_obsl3()const; //
  void setTech_obsl3(const QString &tech_obsl3); //

  QString vartist_robit()const; //
  void setVartist_robit(const QString &vartist_robit); //


  void read(const QJsonObject &json);
  void write(QJsonObject &json)const;

 private slots:
  void on_pb_save_clicked();

 private:
  Ui::Address *ui;
  QString mId;
  QString mVlasnik;
  QString mNazva_avto;
  QString mHarantia;
  QString mPolomka1;
  QString mPolomka2;
  QString mPolomka3;
  QString mPolomka4;
  QString mTech_obsl1;
  QString mTech_obsl2;
  QString mTech_obsl3;
  QString mVartist_robit;
  QVariant mQtData;
 };

#endif // JSON_H
