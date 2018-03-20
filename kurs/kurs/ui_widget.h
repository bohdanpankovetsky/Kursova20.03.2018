/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton_ok;
    QLabel *label_2;
    QFrame *line;
    QPushButton *pushButton_close;
    QListView *auto_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(803, 523);
        Widget->setStyleSheet(QStringLiteral("background-color: white;"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 60, 307, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton_ok = new QPushButton(Widget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(690, 420, 60, 60));
        pushButton_ok->setStyleSheet(QLatin1String("QPushButton { \n"
"background-color: #2196F3;\n"
"border-radius: 30px;\n"
"font:16px;\n"
"color: white;\n"
"font-weight: 600\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #70b8ef;\n"
"}"));
        pushButton_ok->setFlat(false);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(174, 20, 462, 26));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        line = new QFrame(Widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 90, 668, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_close = new QPushButton(Widget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(48, 433, 125, 47));
        pushButton_close->setStyleSheet(QLatin1String("QPushButton {\n"
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
        auto_2 = new QListView(Widget);
        auto_2->setObjectName(QStringLiteral("auto_2"));
        auto_2->setGeometry(QRect(61, 110, 669, 55));
        auto_2->setStyleSheet(QLatin1String("QListView {\n"
"	border: 0px;\n"
"}\n"
"QListView:hover {\n"
"	box-shadow: 0 0 10px rgba(0,0,0,0.5);\n"
"}"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\320\235\320\260 \320\264\320\260\320\275\320\270\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\261\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\262\321\226\320\264\321\201\321\203\321\202\320\275\321\217", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \320\276\320\261\320\273\321\226\320\272\321\203 \320\260\320\262\321\202\320\276 \320\275\320\260 \321\201\321\202\320\260\320\275\321\206\321\226\321\227 \321\202\320\265\321\205\320\276\320\261\321\201\320\273\321\203\320\263\320\276\320\262\321\203\320\262\320\260\320\275\320\275\321\217", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("Widget", "\320\222\320\270\321\205\321\226\320\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
