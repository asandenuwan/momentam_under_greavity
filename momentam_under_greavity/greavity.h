#include <iostream>
//#include <windows.h>
#include <QThread>
#include <cmath>
#include <QLabel>
#include <QMetaObject>


class greavity:public QThread{
    Q_OBJECT
    private:
        float mass,angel,power,time,uper_J,side_J;
        float x=0,y=0;
        void backend();
        float getV(float a,bool h);
        std::thread t;
        QLabel* L;

    public:
        int pixelPerSec=100;
        greavity(float mass, float angel, float power,QLabel* L);
        void run();
    Q_SIGNALS:
        void peak(float m);
        void far(float m);
};
