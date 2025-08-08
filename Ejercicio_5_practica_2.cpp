/*Escriba un algoritmo que dados la distancia recorrida por un objeto y el
tiempo que tomó el objeto en recorrer esa distancia, calcule su velocidad
*/
#include <iostream>
using namespace std;

int main() {

    double distancia, tiempo, velocidad;

    cout << "Ingrese la distancia recorrida (en metros): ";
    cin >> distancia;

    cout << "Ingrese el tiempo transcurrido (en segundos): ";
    cin >> tiempo;

    tiempo = tiempo + (tiempo == 0) * 1;  // Si tiempo==0, suma 1 (evita error)
    distancia = distancia * (distancia >= 0) + (-distancia) * (distancia < 0);  // Valor absoluto

    velocidad = distancia / tiempo;
    
    int velocidad_redondeada = int(velocidad * 100 + 0.5);  // Redondeo a 2 decimales
    double resultado_final = velocidad_redondeada / 100.0;

    cout << "La velocidad del objeto es: " << resultado_final << " m/s" << endl;

    return 0;
}