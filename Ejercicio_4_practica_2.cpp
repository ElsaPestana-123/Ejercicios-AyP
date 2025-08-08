/*Escriba un algoritmo que dadas las longitudes de los catetos de un triángulo
rectángulo calcule la longitud de su hipotenusa.
*/
#include <iostream>
#include <cmath>  
using namespace std;

int main() {

    double co, ca, h;  

    cout << "Ingrese la longitud del cateto opuesto: ";
    cin >> co;

    cout << "Ingrese la longitud del cateto adyacente: ";
    cin >> ca;

    h = sqrt(co * co + ca * ca);

    cout << "La hipotenusa es: " << h << endl;

    return 0;
}