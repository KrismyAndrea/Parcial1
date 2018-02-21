#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    //VARIABLES TIPO ENTERO
    int horas = 0;
    int extra =5000*0.50;
    cout << "Ingrese el numero de horas trabajadas " << endl;//INGRESO DE HORAS TRABAJADAS
    cin >> horas;
    //VALOR DE LA HORA
    horas= horas*5000;
    if (horas > 200000) {//EVALUACION DE HORAS EXTRAS
        horas= horas + extra;
        cout << "El salario es :" << horas << endl;//SALARIO TOTAL
        cout << "la tarifa  por horas extras es :" << extra << endl;//TARIFA DE LAS HORAS EXTRAS
    }else{
        cout << "El salario por horas trabajadas es:" <<  horas;//SALARIO TOTAL
    }
    return 0;
}
