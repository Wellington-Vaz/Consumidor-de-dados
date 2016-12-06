#ifndef PLOTTER_H
#define PLOTTER_H
#include <QWidget>
class Plotter : public QWidget{
    Q_OBJECT

private:
    float amplit, freq, angulo, veloc;
//    float teta;
//    float veloc;

public:
    explicit Plotter(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
   // void mouseMoveEvent(QMouseEvent *e);

signals:
    void pos_x(int);
    void pos_y(int);

public slots:
    void setAmplitude(int amplit);
    void setFrequencia(int freq);
    void timerEvent(QTimerEvent *e);
    void setVelocidade(int veloc);

};

#endif // PLOTTER_H
