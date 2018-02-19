#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    int num1,num2,num3,num4;//VARIABLES TIPO ENTERO
    cout << "Ingrese el primer numero" << endl;//VALORES A INGRESAR TIPO ENTERO
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero" << endl;
    cin >> num3;
    cout << "Ingrese el cuarto numero" << endl;
    cin >> num4;
    if(num1<num2 && num1<num3 && num1<num4){//SIENDO EL PRIMER DIGITO EL MENOR DE TODOS
        if(num2<num3 && num3<num4){
            cout << num1 <<"." << num2 << "." << num3 << "." << num4; //1234/*POSIBLES COMBINACIONES*/
        }
        if(num3<num4 && num4<<num2){
            cout << num1 << "." << num3 << "." << num4 << "." << num2; //1342
        }
        if(num4<num2 && num2<num3){
            cout << num1 << "." << num4 << "." << num2 << "." << num3;//1423
        }
        if(num2<num4 && num4<num3){
            cout << num1 << "." << num2 << "." <<num4 << "." << num3;//1243
        }
        if(num3<num2 && num2<<num4){
            cout << num1 << "." << num3 << "." << num2 << "." << num4;//1324
        }
        if (num4<num3 && num3<num2){
            cout << num1 << "."  << num4 << "." << num3 << "." << num2;//1432
        }
    }
    if (num2<num1 && num2<num3 && num2<num4){//SIENDO  EL SEGUNDO DIGITO EL MENOR DE TODOS
        if(num3<num4 && num4<num1){
            cout << num2 << "." << num3 << "." << num4 << "." << num1;//2341/*POSIBLES COMBINACIONES*/
        }
        if(num4<num1 && num1<num3){
            cout << num2 << "." << num4 << "." << num1 << "." << num3;//2413
        }
        if(num1<num3 && num3<num4){
            cout << num2 << "." << num1 << "." << num3 << "." << num4;//2134
        }
        if(num3<num1 && num1<num4){
            cout << num2 << "." << num3 << "." << num1 << "." << num4;//2314
        }
        if(num4<num3 && num3<num1){
            cout << num2 << "." << num4 << "." << num3 << "." << num1;//2431
        }
        if(num1<num4 && num4<num3){
            cout << num2 << "." << num1 << "." << num4 << "." << num3;//2143
        }
    }
    if(num3<num1 && num3<num2 && num3<num4){ //SIENDO EL TERCER DIGITO EL MENOR DE TODOS
        if(num1<num2 && num2<num4){
            cout << num3<<"."<<num1<<"."<<num2<<"."<<num4; //3124 /*POSIBLES COMBINACIONES*/
        }if(num2<num4 && num4<num1){
            cout << num3<<"."<<num2<<"."<<num4<<"."<<num1; //3241
        }if(num4<num1 && num1<num2){
            cout << num3<<"."<<num4<<"."<<num1<<"."<<num2; //3412
        }if(num1<num4 && num4< num2){
            cout << num3<<"."<<num1<<"."<<num4<<"."<<num2; //3142
        }if(num2<num1 && num1<num4){
            cout << num3<<"."<<num2<<"."<<num1<<"."<<num4; //3214
        }if(num4<num2 && num2<num1){
            cout << num3<<"."<<num4<<"."<<num2<<"."<<num1; //3421
        }
    }
    if(num4<num1 && num4<num2 && num4<num3){ //SIENDO EL CUARTO DIGITO EL MENOR DE TODOS
        if(num1<num2 && num2<num3){
            cout << num4<<"."<<num1<<"."<<num2<<"."<<num3; //4123/*POSIBLES COMBINACIONES*/
        }if(num2<num3 && num3<num1){
            cout << num4<<"."<<num2<<"."<<num3<<"."<<num1; //4231
        }if(num3<num1 && num1<num2){
            cout << num4<<"."<<num3<<"."<<num1<<"."<<num2; //4312
        }if(num1<num3 && num3<num2){
            cout << num4<<"."<<num1<<"."<<num3<<"."<<num2; //4132
        }if(num2<num1 && num1<num3){
            cout << num4<<"."<<num2<<"."<<num1<<"."<<num3; //4213
        }if(num3<num2 && num2<num1){
            cout << num4<<"."<<num3<<"."<<num2<<"."<<num1; //4321
        }
    }
    return 0;
}
