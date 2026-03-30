/* Dados tres enteros N, M y K que representan fechas de la forma
   AAAAMM, escriba un algoritmo que determine la diferencia en meses
   entre la menor y la mayor. Por ejemplo, para N = 200201, M = 200101
   K = 200401 se debe imprimir "36"
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int N, M, K;

    cout << "Ingrese la primera fecha (formato AAAAMM): ";
    cin >> N;
    cout << "Ingrese la segunda fecha (formato AAAAMM): ";
    cin >> M;
    cout << "Ingrese la tercera fecha (formato AAAAMM): ";
    cin >> K;

    int anioN = N / 100;
    int mesN = N % 100;
    int anioM = M / 100;
    int mesM = M % 100;
    int anioK = K / 100;
    int mesK = K % 100;

    int totalMesesN = anioN * 12 + mesN;
    int totalMesesM = anioM * 12 + mesM;
    int totalMesesK = anioK * 12 + mesK;

    int menor, mayor;

    if (totalMesesN < totalMesesM && totalMesesN < totalMesesK) {

        menor = totalMesesN;

        if (totalMesesM > totalMesesK) {

            mayor = totalMesesM;

        } else {

            mayor = totalMesesK;
        }

    } else if (totalMesesM < totalMesesN && totalMesesM < totalMesesK) {

        menor = totalMesesM;

        if (totalMesesN > totalMesesK) {

            mayor = totalMesesN;

        } else {

            mayor = totalMesesK;

        }
    } else {

        menor = totalMesesK;

        if (totalMesesN > totalMesesM) {

            mayor = totalMesesN;

        } else {
            
            mayor = totalMesesM;
        }
    }

    int diferencia = mayor - menor;
    cout << "La diferencia en meses es: " << diferencia << endl;

    return 0;
}