/*Haga un algoritmo para una función que reciba dos parámetros N y
K y que retorne los K dígitos más a la izquierda de N. Por ejemplo,
extraerDigitos(542207, 2) debe retornar 54.
*/
#include <iostream>
using namespace std;

int revertir(int N){

 int D, num, res=0;

 num=N;
  
  while (num!=0){

    D= num % 10;
    res= (res*10) + D;
    num /= 10;
  }

  cout<<"El numero revertido es: "<<res<<endl;

  return res;
}

int extraerDigitos(int N, int K){

    int revertido = revertir(N);
    int digitos = 0;

    for(int i = 1; i<= K; i++){

        int D = revertido % 10;
        digitos = (digitos*10) + D;
        revertido /= 10;

    }

    cout<<"Los digitos extraidos son: "<<digitos<<endl;

    return digitos;
}


int main(){

   cout<< extraerDigitos(542207, 2) <<endl;
   cout<< extraerDigitos(542207, 3) <<endl;

    return 0;
}