#include <iostream>//LIBRERIA


using namespace std;//PALABRAS RESERVADAS

int main()
{
    int bruto=0;//VARIABLE TIPO ENTERO
    cout << "Ingrese el importe bruto" << endl;//INGRESO DE VARIABLES
    cin >> bruto;
    if(bruto>15000){//EVALUACION DEL IMPORTE BRUTO PARA DAR EL IMPORTE NETO
        bruto=bruto-bruto*0.16;
        cout << "Tu importe netos es:" << bruto; //IMPORTE NETO CON EL 16% DE DESCUENTO
    }else{
        bruto=bruto-bruto*0.10;
        cout << "Tu importe neto es:" << bruto; //IMPORTE NETO CON EL 10% DE DESCUENTO
    }
    return 0;
}
