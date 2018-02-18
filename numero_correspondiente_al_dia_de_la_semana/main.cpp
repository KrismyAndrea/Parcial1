#include <iostream>

using namespace std;

int main()
{
    int dia=0; // VARIABLE PARA DEFINIR QUE LOS VALORES A INGRESAR SON NUMEROS ENTEROS
    cout << "Ingresar un numero del 1 al 7 para saber a que dia de la semana corresponde " << endl;//INGRESO DE NUMEROS
    cin >> dia;
    //PROCESO DE LECTURA DE DATOS PARA ASIGNAR UN DIA A UN NUMERO
    if(dia==1){
        cout << "El dia corresondiente a la semana es: LUNES";
    }
    if(dia==2){
        cout << "El dia corresondiente a la semana es: MARTES";
    }
    if (dia==3){
        cout << "El dia corresondiente a la semana es: MIERCOLES";
    }
    if(dia==4){
        cout << "El dia corresondiente a la semana es: JUEVES";
    }
    if (dia==5){
        cout << "El dia corresondiente a la semana es: VIERNES";
    }
    if(dia==6){
        cout << "El dia corresondiente a la semana es: SABADO";
    }
    if(dia==7){
        cout << "El dia corresondiente a la semana es: DOMINGO";
    }
    return 0;
}
