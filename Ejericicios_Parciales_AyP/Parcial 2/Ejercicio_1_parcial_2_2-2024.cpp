/*Implementa un método llamado "polynomialfolding" que tome un arreglo de tamaño par y 
  aplique la operación binaria f(a, b) = 2 * b - a hasta reducirlo a un solo número.
  El plegado se realiza emparejando el primer elemento con el último, el segundo con 
  el penúltimo, y asi sucesivamente, reemplazando cada par por el resultado de f. Por
  ejemplo, dado el arreglo [1, 2, 3, 4], el primer plegado genera (1,4) al calcular
  f(1,4) = 7 y f(2,3) = 4; finalmente, al aplicar f(7,4) = 1, se obtiene el valor resultante.
*/
#include <iostream>
using namespace std;

int f(int a, int b){
    return 2 * b - a;
}

int polynomialfolding(int array[], int n){

    int array2[500];
    
    while(n > 1){
        int index = 0;

        for(int i = 0, j = n -1; i < n && j >= 0 && i < j; i++, j--){
           array2[index++] = f(array[i], array[j]);
        }

        for (int i = 0; i < index; i++){
            array[i] = array2[i];
        }

        n = index;
    }

    return array[0];
}

int main(){
 
    int array[] = {1, 2, 3, 4};
    int n = 4;

    cout << polynomialfolding(array, n) << endl;

    return 0;
}