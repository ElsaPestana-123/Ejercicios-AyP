/*Escriba un algoritmo lea una secuencia de dígitos entre 0 y 9 terminada en
−1 que representan un número decimal e imprima el número decimal. Por
ejemplo, si la secuencia de entrada es 5 0 3 8 -1 debe imprimir 5038.
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    int res = 0;

    while(true){

        cout<<"Ingrese numeros entre el 0 y 9 (escriba -1 para salir del bucle)"<<endl;
        cin>>n;

        if(n == -1){
            break;
        }

        res = (res * 10) + n;
    }

    cout<<res<<endl;


    return 0;
}