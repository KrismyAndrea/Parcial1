#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    int num1,num2,num3;//VARIABLES DE TIPO ENTERO

    cout << "Ingrese el primer numero" << endl;//INGRESO DE NUMEROS ENTEROS
    cin >> num1;

    cout <<"Ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;

    //PROCESO EVALUATIVO CRECIENTE

    if(num1<num2 && num2<num3){
        cout << "Ingreso los numeros de manera creciente" << endl;
    }else{
        cout << "No ingreso los numeros de manera creciente";
    }

    return 0;
}
