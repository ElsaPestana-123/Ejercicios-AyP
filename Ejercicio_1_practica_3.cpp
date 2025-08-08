/*Haga un algoritmo que imprima “Capicua” si un número de entrada de 5
dígitos es capicua, o “No lo es” en caso contrario. Un número es capicua
si se escribe igual al derecho y a revés. Por ejemplo, 545 es un número
capicua
*/
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero de 5 digitos: ";
    cin >> num;

    // Verificar que el número tenga exactamente 5 dígitos
    if (num < 10000 || num > 99999) {
        cout << "El numero debe tener exactamente 5 digitos." << endl;
        return 1; // Terminar el programa con error
    }

    int D1, D2, D3, D4, D5;

    D5 = num % 10;
    num /= 10;
    D4 = num % 10;
    num /= 10;
    D3 = num % 10;
    num /= 10;
    D2 = num % 10;
    D1 = num / 10;

    if (D1 == D5 && D2 == D4) {
        cout << "Capicua" << endl;
    } else {
        cout << "No lo es" << endl;
    }

    return 0;
}