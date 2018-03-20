#include "widget.h"
#include "ui_widget.h"
#include "input.h"
//#include <QGraphicsDropShadowEffect>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QGraphicsDropShadowEffect(QObject * parent = 0)
//    ui->auto_2->blurRadius() const;
    this->setWindowTitle("Програма обліку автомобілів");

//     connect(ui->pushButton_ok,SIGNAL(clicked()),this,SLOT(on_push_button_clicked()));
     connect(ui->pushButton_close, SIGNAL(clicked()), this, SLOT(close()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButton_ok_clicked()
{
    Input *inp = new Input();
    inp->show();
}
//void Widget::show_json() {

//}

