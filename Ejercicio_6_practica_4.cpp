/*Escriba un algoritmo que tome como entrada un número N e imprima
la secuencia de Fibonacci hasta N. La secuencia de Fibonacci comienza
con los números 0 y 1 y se calcula en cada paso sumando los últimos dos
números de la secuencia. Por ejemplo, los primeros números de la secuencia
de Fibonacci son 0, 1, 1, 2, 3, 5, 8, 13, . . .
*/
#include <iostream>
using namespace std;

int main(){

   int n, F, V1 = 0, V2 =1;

    cout<<"ingrese el numero de veces que se va repetir la secuencia de fibonacci"<<endl;
    cin>> n;

    cout<<V1<<endl;
    cout<<V2<<endl; 

    while (n > 0){

        F = V1 + V2; //1 // 2 // 3 // 5 // 8 // 13
        V1 = V2; // V1 ahora va valer 1 // v1 valia 1 ahora 1
        V2 = F; // V2 valia 1 ahora vale 1 // v2 valia 1 ahora vale 2
      
        cout<<F<<endl;

        n--;
    }
    

    return 0;
}