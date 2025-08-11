/*Haga una acción que tome como entrada un arreglo A de enteros y un
número entero K y realice K desplazamientos circulares de A hacia la
izquierda. Por ejemplo, si A = {4, 6,−1, 2} y K = 2, el valor final de A
debe ser {−1, 2, 4, 6}.
*/
#include <iostream>
using namespace std;

#define MAX 500

void desplazamientoCircular(int array[], int n, int k){

  for (int i = 0; i < k; i++){

    int aux = array[0];

    for (int j = 0; j < n - 1; j++){
      array[j] = array[j + 1];
    }

    array[n - 1] = aux;

  }
  
}

int main() {

  int n, k;

  cout << "Ingrese el tamaño del arreglo: ";
  cin >> n;

  int array[MAX];

  cout << "Ingrese los elementos del arreglo: ";

  for (int i = 0; i < n; i++) {

    cin >> array[i];

  }

  cout << "Ingrese K: ";
  cin >> k;

  desplazamientoCircular(array, n, k);

  cout << "El arreglo desplazado es: ";

  for (int i = 0; i < n; i++) {

    cout << array[i] << " ";

  }

  cout << endl;

  return 0;
}