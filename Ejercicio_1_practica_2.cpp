/*Escriba un algoritmo que lea un número de cuatro dígitos y muestre en
pantalla el número escrito en reverso. Por ejemplo, si el número es 4678, la
salida debería ser 8764.
*/
#include <iostream>
using namespace std;

int main(){

 int N_C, D1, D2, D3, D4;

 cout<<"ingrese un numero de 4 digitos"<<endl;
 cin>> N_C;

 D4 = N_C % 10;
 N_C /= 10;
 D3 = N_C % 10;
 N_C /= 10;
 D2 = N_C % 10;
 N_C /= 10;
 D1 = N_C % 10;

 cout<< "El numero al reves es el siguiente:"<<"  "<< D4 << D3 << D2 << D1 <<endl;

    return 0;
}