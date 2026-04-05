/*Se tiene un grupo de bombillos led donde cada uno se enciende de forma independiente
  cada cierta cantidad de segundos (y luego inmediantemente se apaga). Escriba un método
  en c++ llamado "lightSync", que tome como entrada un arreglo de enteros que representan
  los segundos que tarda cada bombillo en encender para el arreglo A[3]={1,2,3} el resultado
  es 6
  */
#include <iostream>
using namespace std;

int mcd(int a, int b){
    int resto;
    
    if (a > b){
        resto = a % b;
        if (resto == 0){
            return b;
        } else {
            return mcd(b, resto);
        }

    } else {
        resto = b % a;
        if (resto == 0){
            return a;
        } else {
            return mcd(a, resto);
        }
    }

    /*
    int mcd(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
    algoritmo de Euclides sin recursividad
    */
}

int mcm(int a, int b){

    int resultado = (a * b) / mcd(a, b);
    return resultado;
}

int lightSync(int array[], int n){

   if (n == 0) return 0;
   int resultado = array[0];

   for(int i = 1; i < n; i++){
        resultado = mcm(resultado, array[i]);
   }

   return resultado;

}

int main(){
    int array[3] = {1, 2, 3};
    int resultado = lightSync(array, 3);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}