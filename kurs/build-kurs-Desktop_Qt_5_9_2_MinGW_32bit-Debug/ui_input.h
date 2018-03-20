/********************************************************************************
** Form generated from reading UI file 'input.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_H
#define UI_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Input
{
public:
    QLineEdit *vlasnik;
    QLabel *label_3;
    QLineEdit *id;
    QLabel *label_13;
    QLineEdit *tech_obsl3;
    QLineEdit *polomka4;
    QLineEdit *polomka3;
    QLabel *label_4;
    QLineEdit *vartist_robit;
    QLabel *label_5;
    QLineEdit *tech_obsl1;
    QCheckBox *harantia;
    QPushButton *pushButton_3;
    QPushButton *pushButton_save;
    QLineEdit *polomka2;
    QLineEdit *polomka1;
    QLineEdit *tech_obsl2;
    QLabel *label_12;
    QLineEdit *nazva_avto;

    void setupUi(QWidget *Input)
    {
        if (Input->objectName().isEmpty())
            Input->setObjectName(QStringLiteral("Input"));
        Input->resize(536, 668);
        Input->setStyleSheet(QStringLiteral("background-color: white"));
        vlasnik = new QLineEdit(Input);
        vlasnik->setObjectName(QStringLiteral("vlasnik"));
        vlasnik->setGeometry(QRect(99, 114, 120, 28));
        vlasnik->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(Input);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(77, 209, 55, 16));
        id = new QLineEdit(Input);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(99, 82, 20, 28));
        id->setStyleSheet(QStringLiteral(""));
        label_13 = new QLabel(Input);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(207, 18, 175, 19));
        QFont font;
        font.setPointSize(12);
        label_13->setFont(font);
        tech_obsl3 = new QLineEdit(Input);
        tech_obsl3->setObjectName(QStringLiteral("tech_obsl3"));
        tech_obsl3->setGeometry(QRect(100, 503, 365, 28));
        tech_obsl3->setStyleSheet(QStringLiteral(""));
        polomka4 = new QLineEdit(Input);
        polomka4->setObjectName(QStringLiteral("polomka4"));
        polomka4->setGeometry(QRect(100, 353, 365, 28));
        polomka4->setStyleSheet(QStringLiteral(""));
        polomka3 = new QLineEdit(Input);
        polomka3->setObjectName(QStringLiteral("polomka3"));
        polomka3->setGeometry(QRect(100, 313, 365, 28));
        polomka3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(Input);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(78, 393, 185, 16));
        vartist_robit = new QLineEdit(Input);
        vartist_robit->setObjectName(QStringLiteral("vartist_robit"));
        vartist_robit->setGeometry(QRect(80, 549, 77, 20));
        vartist_robit->setLayoutDirection(Qt::LeftToRight);
        vartist_robit->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(Input);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 52, 110, 16));
        tech_obsl1 = new QLineEdit(Input);
        tech_obsl1->setObjectName(QStringLiteral("tech_obsl1"));
        tech_obsl1->setGeometry(QRect(100, 423, 365, 28));
        tech_obsl1->setFocusPolicy(Qt::StrongFocus);
        tech_obsl1->setStyleSheet(QStringLiteral(""));
        harantia = new QCheckBox(Input);
        harantia->setObjectName(QStringLiteral("harantia"));
        harantia->setGeometry(QRect(100, 181, 78, 20));
        harantia->setMouseTracking(true);
        harantia->setStyleSheet(QLatin1String(" QCheckBox::indicator:unchecked {\n"
"     image: url(unchecked.jpg);\n"
"	width: 16px;\n"
"	height: 16px;\n"
"	\n"
" }\n"
"QCheckBox::indicator:unchecked:hover {\n"
"     image: url(uncheckedhover.jpg);\n"
"	width: 16px;\n"
"	height: 16px;\n"
" }\n"
"QCheckBox::indicator:checked {\n"
"     image: url(checked.jpg);\n"
"width: 16px;\n"
"	height: 16px;\n"
" }\n"
" QCheckBox::indicator:checked:hover {\n"
"     image: url(checkedhover.jpg);\n"
"width: 16px;\n"
"	height: 16px;\n"
" }\n"
""));
        harantia->setIconSize(QSize(16, 16));
        pushButton_3 = new QPushButton(Input);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(211, 599, 125, 47));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #2196F3;\n"
"border: 0px;\n"
"color: white;\n"
"font-size: 18;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #70b8ef;\n"
"}\n"
""));
        pushButton_save = new QPushButton(Input);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(348, 599, 125, 47));
        pushButton_save->setStyleSheet(QLatin1String("QPushButton {\n"
"background-color: #2196F3;\n"
"border: 0px;\n"
"color: white;\n"
"font-size: 18;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #70b8ef;\n"
"}\n"
""));
        polomka2 = new QLineEdit(Input);
        polomka2->setObjectName(QStringLiteral("polomka2"));
        polomka2->setGeometry(QRect(100, 273, 365, 28));
        polomka2->setStyleSheet(QStringLiteral(""));
        polomka1 = new QLineEdit(Input);
        polomka1->setObjectName(QStringLiteral("polomka1"));
        polomka1->setGeometry(QRect(100, 231, 365, 28));
        polomka1->setStyleSheet(QStringLiteral(""));
        tech_obsl2 = new QLineEdit(Input);
        tech_obsl2->setObjectName(QStringLiteral("tech_obsl2"));
        tech_obsl2->setGeometry(QRect(100, 463, 365, 28));
        tech_obsl2->setStyleSheet(QStringLiteral(""));
        label_12 = new QLabel(Input);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 550, 22, 16));
        nazva_avto = new QLineEdit(Input);
        nazva_avto->setObjectName(QStringLiteral("nazva_avto"));
        nazva_avto->setGeometry(QRect(99, 149, 156, 28));
        nazva_avto->setStyleSheet(QStringLiteral(""));
        QWidget::setTabOrder(id, vlasnik);
        QWidget::setTabOrder(vlasnik, nazva_avto);
        QWidget::setTabOrder(nazva_avto, harantia);
        QWidget::setTabOrder(harantia, polomka1);
        QWidget::setTabOrder(polomka1, vartist_robit);
        QWidget::setTabOrder(vartist_robit, tech_obsl1);
        QWidget::setTabOrder(tech_obsl1, polomka4);
        QWidget::setTabOrder(polomka4, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_save);
        QWidget::setTabOrder(pushButton_save, polomka2);
        QWidget::setTabOrder(polomka2, polomka3);
        QWidget::setTabOrder(polomka3, tech_obsl2);
        QWidget::setTabOrder(tech_obsl2, tech_obsl3);

        retranslateUi(Input);

        QMetaObject::connectSlotsByName(Input);
    } // setupUi

    void retranslateUi(QWidget *Input)
    {
        Input->setWindowTitle(QApplication::translate("Input", "Form", Q_NULLPTR));
        vlasnik->setPlaceholderText(QApplication::translate("Input", "\320\222\320\273\320\260\321\201\320\275\320\270\320\272 \320\260\320\262\321\202\320\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("Input", "\320\237\320\276\320\273\320\276\320\274\320\272\320\270", Q_NULLPTR));
        id->setPlaceholderText(QApplication::translate("Input", "\342\204\226", Q_NULLPTR));
        label_13->setText(QApplication::translate("Input", "\320\224\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\217", Q_NULLPTR));
        tech_obsl3->setPlaceholderText(QApplication::translate("Input", "\320\242\320\265\321\205\320\275\321\226\321\207\320\275\320\265 \320\276\320\261\321\201\320\273\321\203\320\263\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217 3", Q_NULLPTR));
        polomka4->setPlaceholderText(QApplication::translate("Input", "4", Q_NULLPTR));
        polomka3->setPlaceholderText(QApplication::translate("Input", "3", Q_NULLPTR));
        label_4->setText(QApplication::translate("Input", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226 \321\202\320\265\321\205\320\275\321\226\321\207\320\275\321\226 \320\276\320\261\321\201\320\273\321\203\320\263\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217", Q_NULLPTR));
        vartist_robit->setPlaceholderText(QApplication::translate("Input", "\320\222\320\260\321\200\321\202\321\226\321\201\321\202\321\214 \321\200\320\276\320\261\321\226\321\202", Q_NULLPTR));
        label_5->setText(QApplication::translate("Input", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", Q_NULLPTR));
        tech_obsl1->setPlaceholderText(QApplication::translate("Input", "\320\242\320\265\321\205\320\275\321\226\321\207\320\275\320\265 \320\276\320\261\321\201\320\273\321\203\320\263\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217 1", Q_NULLPTR));
        harantia->setText(QApplication::translate("Input", "\320\235\320\260 \320\263\320\260\321\200\320\260\320\275\321\202\321\226\321\227", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Input", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("Input", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\276 \320\261\320\260\320\267\320\270", Q_NULLPTR));
        polomka2->setPlaceholderText(QApplication::translate("Input", "2", Q_NULLPTR));
        polomka1->setText(QString());
        polomka1->setPlaceholderText(QApplication::translate("Input", "1", Q_NULLPTR));
        tech_obsl2->setPlaceholderText(QApplication::translate("Input", "\320\242\320\265\321\205\320\275\321\226\321\207\320\275\320\265 \320\276\320\261\321\201\320\273\321\203\320\263\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217 2", Q_NULLPTR));
        label_12->setText(QApplication::translate("Input", "\320\263\321\200\320\275", Q_NULLPTR));
        nazva_avto->setPlaceholderText(QApplication::translate("Input", "\320\235\320\260\320\267\320\262\320\260 \320\260\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Input: public Ui_Input {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_H
