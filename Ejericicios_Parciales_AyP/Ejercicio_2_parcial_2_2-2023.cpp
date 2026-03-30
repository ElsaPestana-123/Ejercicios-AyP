/* La operación Alternante consiste en sumar y restar valores de una secuencia
   de forma consecutiva; ej, para la secuencia: 3, 4, 6,, 2, 1, la operación
   resulta en: 3 + 4 - 6 + 2 - 1. Realice una función llamada ZigZagAlternante
   que tome como entrada una matriz A de NxM y calcule el resultado de aplicar
   Alternante sobre el recorrido ZigZag de la matriz.
*/
#include <iostream>
using namespace std;

const int MAXF = 100;
const int MAXC = 100;

int ZigZagAlternante(int A[MAXF][MAXC], int filas, int columnas) {

    int resultado = 0;
    int contador = 1;
    
    for (int i = 0; i < filas; i++) {
        if(i % 2 == 0) {
            for (int j = 0; j < columnas; j++) {
                if (contador < 3) {
                    resultado += A[i][j];

                } else if (contador % 2 != 0) {
                    resultado -= A[i][j];

                } else {
                    resultado += A[i][j];
                }
                contador++;
            }

        } else {
            for(int j = columnas -1; j >= 0; j--){

                if (contador < 2) {
                    resultado += A[i][j];

                } else if (contador % 2 != 0) {
                    resultado -= A[i][j];

                } else {
                    resultado += A[i][j];
                }
                contador++;
            }
        }

    }

    return resultado;
}

int main() {

    int A[MAXF][MAXC] = { {9, 4, 5},
                          {7, 8, 9},
                          {3, 2, 1} };

    int filas = 3;
    int columnas = 3;

    cout << "El resultado de la operacion Alternante sobre el recorrido ZigZag es: "
         << ZigZagAlternante(A, filas, columnas) << endl;

    return 0;
}