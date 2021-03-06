#ifndef NEWTON_RAP_H
#define NEWTON_RAP_H

#include <QMainWindow>

namespace Ui {
class Newton_Rap;
}

class Newton_Rap : public QMainWindow
{
    Q_OBJECT

public:
    explicit Newton_Rap(QWidget *parent = 0);
    ~Newton_Rap();
    double funcion(double c); //functions declared
    double derivada(double c);

private:
    Ui::Newton_Rap *ui;

public slots:
   void metodo();//first slot
   void borrar();//second slot

};

#endif // NEWTON_RAP_H
