/*Dados dos valores V1, V2 que forman un intervalo cerrado, y un valor X,
haga un algoritmo para determinar si X está dentro o fuera del intervalo
*/
#include <iostream>
using namespace std;

int main(){

 int V1, V2, X;

 cout<<"ingrese un valor para V1"<<endl;
 cin>> V1;

 cout<<"ingrese un valor para V2"<<endl;
 cin>> V2;

 cout<<"ingrese un valor para X"<<endl;
 cin>> X;

 if(X < V1){

    cout<<"X no pertenece al intervalo"<<endl;

 } else if ( X > V2) {

    cout<<"X no pertenece al intervalo"<<endl;

 } else {

    cout<<"X si pertenece al intervalo"<<endl;

 }
    return 0;
}