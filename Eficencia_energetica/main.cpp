#include <iostream>//LIBRERIA

using namespace std;//PALABRAS RESERVADAS

int main()
{
    float consumo;
    cout << "Ingrese el consumo en kilowatts (kW)" << endl;
    cin >> consumo;
    if(consumo > 8000 && consumo < 10000){
        cout << "Consumo medio" << endl;
    }
    if (consumo >= 10000){
        cout << "Consumo alto de energia";
    }
    return 0;
}
