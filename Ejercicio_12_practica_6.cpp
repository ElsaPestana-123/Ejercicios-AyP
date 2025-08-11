/*Haga una acción que tome como entrada una matriz (con cantidad par
de filas) e intercambie las filas pares y las impares. Por ejemplo, si la
matriz es {{4, 2}, {1, 2}, {6,−1}, {3, 5}}, la matriz resultante debería ser
{{1, 2}, {4, 2}, {3, 5}, {6,−1}}
*/
#include <iostream>
using namespace std;

#define MAX 500

void Intercambiar(int matriz[MAX][MAX], int n, int m){

  for(int i = 0; i < n; i += 2){
    for(int j = 0; j < m; j++){
      int aux = matriz[i][j];
      matriz[i][j] = matriz[i+1][j];
      matriz[i+1][j] = aux;
    }
  }

}

int main() {

  int filas, columnas;

  cout << "Ingrese la cantidad de filas (par): ";
  cin >> filas;

  if (filas % 2 != 0) {

    cout << "El número de filas debe ser par." << endl;

    return 1;

  }

  cout << "Ingrese la cantidad de columnas: ";
  cin >> columnas;

  int matriz[MAX][MAX];

  cout << "Ingrese los elementos de la matriz:" << endl;

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {

      cin >> matriz[i][j];

    }
  }

  Intercambiar(matriz, filas, columnas);

  cout << "Matriz después de intercambiar filas pares e impares:" << endl;

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {

      cout << matriz[i][j] << " ";

    }

    cout << endl;
  }

  return 0;
}