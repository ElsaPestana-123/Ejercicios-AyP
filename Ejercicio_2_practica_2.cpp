/*Escriba un algoritmo que reciba como entrada los coeficientes A, B y C
de una ecuación de segundo grado (Ax2 + Bx + C = 0), e imprima por
pantalla los valores de x. Asuma que la ecuación siempre tiene solución
en números reales.
*/
#include <iostream>
#include <cmath>    
using namespace std;

int main() {
    double A, B, C, X1, X2;  

    cout << "Ingrese el coeficiente A: ";
    cin >> A;

    cout << "Ingrese el coeficiente B: ";
    cin >> B;

    cout << "Ingrese el coeficiente C: ";
    cin >> C;

    // Cálculo correcto de las raíces
    X1 = (-B + sqrt(B*B - 4*A*C)) / (2*A);
    X2 = (-B - sqrt(B*B - 4*A*C)) / (2*A);

    cout << "El resultado de x1 es: " << X1 << endl;
    cout << "El resultado de x2 es: " << X2 << endl;

    return 0;
}