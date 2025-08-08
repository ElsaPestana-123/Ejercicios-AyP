/*Escriba un algoritmo que tome como entrada la base y la altura de un
triángulo, el radio de un círculo y determine si el triángulo tiene un área
mayor al círculo.
*/
#include <iostream>
using namespace std;

int main(){

 int base, altura, radio, areat, areac;

 cout<<"ingrese la base de un triangulo"<<endl;
 cin>> base;

 cout<<"ingrese la altura de un triangulo"<<endl;
 cin>> altura;

 cout<<"ingrese el radio de un circulo"<<endl;
 cin>> radio;

 areat = (base * altura)/2;

 areac = 3.14 * radio * radio;

 if (areat > areac)
 {

    cout<<"El area del triangulo es mayor que la del circulo"<<"   "<< areat <<endl;
 
 }else{

    cout<<"El area del circulo es mayor que la del triangulo"<<"   "<< areac <<endl;

 }
    return 0;
}