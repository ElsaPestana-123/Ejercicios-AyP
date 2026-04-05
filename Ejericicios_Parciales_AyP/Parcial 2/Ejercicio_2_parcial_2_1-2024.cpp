/*Implemente en c++ el método llamado "matrixMult", que tomr como entrada 2 matrices
  de tamaño nxm (distintos para cada una), y retorne la matriz resultante de la 
  multiplicación de ambas. Para calcular la multiplicación de matrices, el elemento
  C[i][j] de la matriz resultante C se calcula sumando los productos de los elementos
  correspondientes de la fila i de A y la columna j de B. Además tome en cuenta que para
  multiplicar dos matrices A y B, el número de columnas de A debe ser igual al número
  de filas de B.
*/
#include <iostream>
using namespace std;

const int n1=0, n2=0, m1=0, m2=0;

void matrixMult(int A[n1][n2], int B[m1][m2]) {
    int C[n1][m2];

    if (m1 != n2) {
        cout << "Error: las matrices no se pueden multiplicar debido a dimensiones incompatibles." << endl;
        return;
    }

    int k = 0;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m2; j++){
            C[i][j] = 0;
            for (int k = 0; k < n2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
            
        }
    }



    

    
}