// Numerical Diferentiation Method Program V1.0.0 // Programa del metodo de diferenciacion numerica V1.0.0
#ifndef DIFNUM_H
#define DIFNUM_H

#include <QMainWindow>

namespace Ui {
class DifNum;
}

class DifNum : public QMainWindow
{
    Q_OBJECT

public:
    explicit DifNum(QWidget *parent = 0);
    ~DifNum();
    // Variables declaration
    double puntosy[11];// This array will save the points provided by the user.
    double atras[8][2], centro[8][2], adelante[9][2];// These three matrices will the value for each derivative in each direction.
    double h, derivadaf;// This variable will save the increment value, provided by the user.
    int i,j,k,npuntos,countp;// Auxiliar variables for cycles or point-control.
public slots:
    // Slots declaration.
    void ejecutar();// Slot for run the method.
    void cargar();// Slot for save the points provided by the user from table widget.
    void limpiar();// Slot for clear all user interface fields.
    void activar();// Slot for active the table widget after the user choose a option from combo box.
private:
    Ui::DifNum *ui;
};

#endif // DIFNUM_H
