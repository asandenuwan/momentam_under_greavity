#include "greavity.h"
#include "QDebug"
greavity::greavity(float mass, float angel, float power,QLabel* L){
    this->mass=mass;
    this->angel=angel;
    this->power=power;
    this->L=L;
}


void greavity::run(){
    this->backend();
}

void greavity::backend(){
    float a=-9.8;//gruthwaja thranaya [adu karanna]
    int i=1;// up velocity eke hema secand ekedima wedi karanna
    float vx=getV(this->angel,true);//velocity for -> side
    float vy=getV(this->angel,false);//velocity for up
    int Lx,Ly;
    QMetaObject::invokeMethod(L,[&](){
        Lx=L->geometry().x();
        Ly=L->geometry().y();

    },Qt::BlockingQueuedConnection);


    while (1){
        vy+=a;      //change up velocity by gruthwaja thwaranaya
        if(y<0){
            QMetaObject::invokeMethod(L,[&](){
                L->setGeometry(Lx+(x*pixelPerSec),Ly,21,21);
            },Qt::BlockingQueuedConnection);
            break;
        }   // when object hit the ground ---{object eke wetanakota eke velocity = mul awasthawe velocity}

        if (vy<=0){        //when object is stop in sky
            vy=0;      //object not moveing
            a=9.8;       //thranaya wedi wenawa
            i=-1;
            emit peak(y);
            continue;
        }

        msleep(1);
        x+=(vx/1000);
        y+=(vy/1000)*i;

        int localX=Lx+(x*pixelPerSec);
        int localY=Ly-(y*pixelPerSec);
        QMetaObject::invokeMethod(L,[&](){
            L->setGeometry(localX,localY,21,21);
        },Qt::BlockingQueuedConnection);
        emit far(x);
    }
}

float greavity::getV(float a,bool h){
    if(!h){
        a=90-a;
    }
    a=a*M_PI/180;
    float x=2*cos(a)*this->power;
    x=x/this->mass;
    if(x<0){
        t.join();
        exit(0);
    }
    x=std::sqrt(x);
    return x;
}
