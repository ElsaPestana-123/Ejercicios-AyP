/*Escriba un algoritmo que tome como entrada una secuencia de números
0 y 1 terminada en −1 que representan un número binario y calcule el
número decimal representado. Por ejemplo, si la secuencia es 1 0 0 1 0 1
-1, su algoritmo debe imprimir 37.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, numero_binario = 0, i = 0, numero_decimal = 0;
    int d = 0;

    while (true)
    {
        cout<<"ingrese numeros entre 0 y 1 (escriba -1 para terminar)"<<endl;
        cin>> n;

        if (n == -1){
            break;
        }

        numero_binario = (numero_binario * 10) + n;

    }

    while(numero_binario > 0){

        d = numero_binario % 10; // 100101 me va a quedar 1
        numero_decimal += pow(2,i) * d; // 2 a la 0 multiplicado * 1 = 1
        i++; // aumenta i + 1
        numero_binario /= 10; // 100101 me va quedar 10010

    }

    cout<<numero_decimal<<endl;

    return 0;
}