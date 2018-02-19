#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    int num1,num2,num3;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;

    if(num1+num2==num3){
        cout << "La suma de los dos primeros numeros es igual al tercer numero";
    }else{
        cout << "La suma de los dos primeros numeros no es igual al tercer numero";
    }
    return 0;
}
