#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    float descuento,sueldo;//VARIABLES TIPO REALES
    cout << "Ingresar sueldo" << endl;//INGRESO DE VALORES
    cin >> sueldo;
    //PROCESO APLICACION DE DESCUENTO Y MUESTRA DE SUELDO NETO
    if (sueldo <= 1000){
            descuento=sueldo*0.10;
            cout << "El descuento en el sueldo es:" << descuento << endl;
            cout << "El sueldo neto es:" << (sueldo-descuento);
    }
    if (sueldo > 1000 && sueldo < 2000){
            descuento=sueldo*0.05;
            cout << "El descuento en el sueldo es:" << descuento << endl;
            cout << "El sueldo neto es:" << (sueldo-descuento);
    }
    if (sueldo >= 2000){
            descuento=sueldo*0.03;
            cout << "El descuento en el sueldo es:" << descuento << endl;
            cout << "El sueldo neto es:" << (sueldo-descuento);
    }
    return 0;
}
