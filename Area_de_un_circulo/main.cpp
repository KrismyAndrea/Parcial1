#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    float radio,area;//VARIABLES DE TIPO REALES
    float num_pi=3.1415926536;//VARIABLES DE TIPO REALES

    cout << "Ingresar el radio del circulo" << endl;//INGRESO DE VARIABLES REALES
    cin >> radio;

    area=num_pi*(radio*radio);//CALCULO DE AREA

    cout << "El area del circulo es :" << area << endl;

    if (area>5000){//DECTETAR DATOS ERRONEOS DEL AREA
        cout << "DATOS ERRONEOS";
    }
    return 0;
}
