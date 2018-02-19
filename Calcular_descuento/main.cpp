#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    float descuento=0;//VARIABLE TIPO REAL
    cout << "Ingresar el monto para aplicar el descuento" << endl;
    cin >> descuento;
    // APLICARLE EL DESCUENTO CORRESPONDIEDNTE AL MONTO
    if(descuento > 10000){
        descuento=descuento-descuento*0.20;
        cout << "El descuento aplicado es:" << descuento;
    }else{
        descuento=descuento-descuento*0.10;
        cout << "El descuento aplicado es:" << descuento;
    }
    return 0;
}
