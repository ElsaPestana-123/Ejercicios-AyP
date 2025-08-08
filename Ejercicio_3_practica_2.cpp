/*Escriba un algoritmo que transforme un número binario de cuatro bits a
un número decimal.
*/
#include <iostream>
using namespace std;

int main() {
    int N_B, N_D, D1, D2, D3, D4;

    cout << "Ingrese un numero binario de 4 bits: ";
    cin >> N_B;

    // Extraer bits (D1 es el más significativo, D4 el menos significativo)
    D1 = N_B / 1000;       // Primer bit (2^3)
    D2 = (N_B / 100) % 10; // Segundo bit (2^2)
    D3 = (N_B / 10) % 10;  // Tercer bit (2^1)
    D4 = N_B % 10;         // Cuarto bit (2^0)

    // Calcular valor decimal con pesos correctos
    N_D = (D1 * 8) + (D2 * 4) + (D3 * 2) + (D4 * 1);

    cout << "El numero en decimal es: " << N_D << endl;

    return 0;
}