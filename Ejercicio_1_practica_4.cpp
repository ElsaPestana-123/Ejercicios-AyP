#include <iostream>
using namespace std;

// Escriba un algoritmo que lea un numero N y calcule e imprima el numero de digitos de N

int main(){

    int Num;

    cout<<"ingrese un numero"<<endl;
    cin>> Num; 

    int cont = 0;

    while (Num !=  0){
        Num /= 10; // 345 / 10 = 34 / 10 = 3 / 10 = 0    
        cont++; // 1 + 1 = 2 + 1 = 3
    }

    cout<<"El numero de digitos es: "<<cont<<endl;

    return 0;
}