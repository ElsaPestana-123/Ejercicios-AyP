/*José y Pedro son dos ranas. José puede dar saltos de J centímetros y
Pedro puede dar saltos de P centímetros. Suponiendo que ambas ranas
comienzan a saltar en el mismo punto (y en la misma dirección), haga
un algoritmo que determine si las ranas coincidirán en el mismo punto en
algún momento antes de que José de K saltos.
*/
#include <iostream>
using namespace std;

// Función para calcular el MCD (usando el algoritmo de Euclides)
int mcd(int a, int b) {

    while (b != 0) {

        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Función para calcular el MCM
int mcm(int a, int b) {

    return (a * b) / mcd(a, b);
}

int main() {

    int P, J, K;

    cout << "Ingrese el salto de Pedro (P): ";
    cin >> P;

    cout << "Ingrese el salto de Jose (J): ";
    cin >> J;

    cout << "Ingrese el numero maximo de saltos de Jose (K): ";
    cin >> K;

    int multiplo_comun = mcm(J, P);

    // Calcular la distancia máxima de José (K saltos)
    int distancia_maxima = K * J;

    cout << "Las ranas " << (multiplo_comun <= distancia_maxima ? "si" : "no") << " coincidiran." << endl;

    return 0;
}