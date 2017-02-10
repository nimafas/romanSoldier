#ifndef SHIP_H
#define SHIP_H
#include "obstacle.h"
class Ship : public QObject ,public Obstacle
{
    Q_OBJECT
public:
    Ship(bool hdir);
public slots:
    void moveV();
    void speedUP();
    void speedDOWN();
    void speedNORMAL();
    void STOP();
    void RESUME();
//    void moveH();
signals:
    void Stop();
};

#endif // SHIP_H
