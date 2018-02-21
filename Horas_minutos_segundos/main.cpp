#include <iostream>//LIBRERIAS

using namespace std;//PALABRAS RESERVADAS

int main()
{
    //DECLARACION DE VARIABLES TIPO REAL
    float segundos, minutos, horas;
    cout << "Ingresar los segundos a convertir en horas, minutos y segundos:" ;//INGRESO DE DATOS
    cin >> segundos;
    //PROCESO PARA CONVERTIR SEGUNDOS A MINUTOS Y  HORAS
    minutos=segundos/60;
    horas=segundos/3600;
    //TIEMPO CONVERTIDO
    cout << "Tiempo convertido en horas:" << horas << endl;
    cout << "Tiempo convertido en minutos:" << minutos << endl;
    cout << "Tiempo convertido en segundos:" << segundos;
    return 0;
}
