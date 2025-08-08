/*Escriba un algoritmo utilizando un ciclo para que calcule el valor aproximado
de pi usando la serie: pi = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 - ... + 4/n
*/
#include <iostream>
using namespace std;

int main(){

    int n; 

    cout<<"ingrese un numero: ";
    cin>>n; // el usuario ingresa un numero

    int impar; // para hacer la aproxmacion de pi se va a sumar y restar 4/impar
    float pi=0.0; // se va a guardar el valor de pi

    for(int i=0, impar=1; impar<=n; i++, impar+=2){ //este bucle se va a repetir n veces tanto como el usuario lo haya indicado

        if(i % 2 == 0){ // si i es par se suma 4/impar

            pi += 4.0/impar; 

        }else{ // si i es impar se resta 4/impar

            pi-= 4.0/impar;

        }
    }

    cout<<"El valor de pi es: "<<pi<<endl; // se imprime el valor de pi

    return 0;
}