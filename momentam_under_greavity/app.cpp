#include "app.h"
#include "ui_main.h"

app::app(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::app)
{
    ui->setupUi(this);
    ui->ball->setGeometry(10,700,21,21);
    ui->window_f->showMaximized();
}

app::~app()
{
    delete ui;
}

void app::on_enter_clicked()
{   ui->ball->setGeometry(10,700,21,21);
    QString mass=ui->mass->text();
    float m=mass.toFloat();

    QString angel=ui->angle->text();
    float a=angel.toFloat();

    QString power=ui->power->text();
    float p=power.toFloat();

    if(!(a>90 || a<=0)){


        int f=ui->pixelPerSec->text().toInt();

        t=new greavity(m,a,p,ui->ball);
        t->pixelPerSec=f;
        t->start();
        connect(t, &greavity::peak, [=](float m){
            QString x= QString("Y : ")+QString::number(m,'f',4);
            ui->peak_L->setText(x);
        });

        // connect(t,&greavity::far,[=](float m){
        //     QString x= QString("X : ")+QString::number(m,'f',4);  //  <---       /// this and
        //     ui->far_L->setText(x);
        // });

        connect(t,&greavity::far,this,app::abc);        //          <---             /// this same
    }
    else{
        ui->angle->setText("ERROR");
    }
}

void app::abc(float a){
    QString x= QString("X : ")+QString::number(a,'f',4);
    ui->far_L->setText(x);
}

void app::on_clear_clicked()
{
    ui->ball->setGeometry(10,700,21,21);
}


void app::on_reset_clicked()
{
    ui->ball->setGeometry(10,700,21,21);
}

