/*Dadas las ecuaciones de dos rectas no paralelas y = m1x+b1 y y = m2x+b2,
escribir un algoritmo que calcule su punto de intersección.
*/
#include <iostream>
using namespace std;

int main() {
    
    double m1, m2, b1, b2, x, y;

    cout << "Ingrese la pendiente de la primera recta (m1): ";
    cin >> m1;

    cout << "Ingrese el intercepto de la primera recta (b1): ";
    cin >> b1;

    cout << "Ingrese la pendiente de la segunda recta (m2): ";
    cin >> m2;

    cout << "Ingrese el intercepto de la segunda recta (b2): ";
    cin >> b2;

    // Verificar si las rectas son paralelas 
    bool son_paralelas = (m1 == m2);

    // Calcular el punto de intersección
    x = (b2 - b1) / (m1 - m2 + son_paralelas);
    y = m1 * x + b1;

    // Mostrar resultado
    cout << "El punto de interseccion es: (" << x << ", " << y << ")" << endl;

    return 0;
}