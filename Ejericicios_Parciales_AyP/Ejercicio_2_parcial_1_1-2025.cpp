/* Dados 2 números reales A y B con 3 dígitos enteros y 2 decimales
   escriba en c++ un algoritmo que imprima el promedio de los dígitos 
   enteros de ambos números cuando A sea mayor que B y en caso contrario
   que imprima el promedio de los dígitos decimales de ambos números.
   Por ejemplo, para A=111.22 y B=333.11 el resultado es 1.5.
*/
#include <iostream>
using namespace std;

int main(){

    float A, B;
    float promedio_enteros, promedio_decimales;

    cout << "Ingrese el numero A (3 digitos enteros y 2 decimales): ";
    cin >> A;
    cout << "Ingrese el numero B (3 digitos enteros y 2 decimales): ";
    cin >> B;

    int A_enteros = A;
    int B_enteros = B; 
    int A_decimales = (A * 100);
    A_decimales %= 100;
    int B_decimales = (B * 100);
    B_decimales %= 100;

    int d1_EA,d2_EA,d3_EA; 
    d1_EA = A_enteros / 100;
    d2_EA = (A_enteros / 10) % 10;
    d3_EA = A_enteros % 10;

    int d1_EB,d2_EB,d3_EB;
    d1_EB = B_enteros / 100;
    d2_EB = (B_enteros / 10) % 10;
    d3_EB = B_enteros % 10;

    int d1_DA,d2_DA; 
    d1_DA = A_decimales / 10;
    d2_DA = A_decimales % 10;

    int d1_DB,d2_DB; 
    d1_DB = B_decimales / 10;
    d2_DB = B_decimales % 10;

    if (A > B) {

        promedio_enteros = (d1_EA + d2_EA + d3_EA + d1_EB + d2_EB + d3_EB) / 6.0;
        cout << "El promedio de los digitos enteros de A es: " << promedio_enteros << endl;

    } else {

        promedio_decimales = (d1_DA + d2_DA + d1_DB + d2_DB) / 4.0;
        cout << "El promedio de los digitos decimales de A es: " << promedio_decimales << endl;
    }

    return 0;
}