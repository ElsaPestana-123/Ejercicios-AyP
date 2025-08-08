/*Haga un algoritmo que tome como entrada 2 números distintos e imprima
el segundo número mayor
*/
#include <iostream>
using namespace std;

int main(){

    int A, B;

 cout<<"ingrese un numero"<<endl;
 cin>> A;

 cout<<"ingrese un segundo numero"<<endl;
 cin>> B;

 if (A > B){

  cout<< B;

 } else {

   cout<< A;

 }
    return 0;
}