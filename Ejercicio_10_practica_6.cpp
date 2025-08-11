/*Haga una función que tome como entrada una matriz cuadrada de N ×M y
retorne la matriz traspuesta de M ×N. Recuerde que la matriz traspuesta
es aquella en donde se intercambian filas por columnas. Por ejemplo,
si la matriz original es A = {{1, 5}, {2, 3}}, la función debe retornar
{{1, 2}, {5, 3}}.
*/
#include <iostream>
using namespace std;

#define MAX 500

void matrizTranspuesta(int matriz[MAX][MAX], int n, int m) {
  int transpuesta[MAX][MAX];

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      transpuesta[j][i] = matriz[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << transpuesta[i][j] << " ";
    }
    cout << endl;
  }
  
}

int main(){

  int matriz[MAX][MAX];
  int n, m;

  cout << "Ingrese el número de filas: ";
  cin >> n;
  cout << "Ingrese el número de columnas: ";
  cin >> m;

  cout << "Ingrese los elementos de la matriz:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matriz[i][j];
    }
  }

  matrizTranspuesta(matriz, n, m);

  return 0;
}