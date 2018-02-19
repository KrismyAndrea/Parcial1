#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    int num1,num2,num3;//VARIABLES DE TIPO ENTERO
    cout << "Ingrese el primer numero" << endl;//INGRESO DE NUMEROS TIPO ENTERO
    cin >> num1;

    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;

    //PROCESO DE LA MULTIPLICACION
    if(num1*num2==num3){
        cout << "La multiplicacion de los dos primeros numeros es igual al tercer numero";
    }else{
        cout << "La multiplicacion de los dos primeros numeros no es igual al tercer numero";
    }
    return 0;
}
