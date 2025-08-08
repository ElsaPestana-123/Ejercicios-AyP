/*Haga un algoritmo que reciba como entrada un número entre 1 y 12 e
imprima el nombre del mes correspondiente. Tome en cuenta posibles
valores erróneos en la entrada.
*/
#include <iostream>
using namespace std;

int main(){

 int numero;

 cout<<"ingrese un numero del 1 al 12"<<endl;
 cin>>numero;

 if (numero < 1 || numero > 12){

    cout<<"el numero que usted ingreso esta fuera del parametro"<<endl;

 } else if (numero == 1){

   cout<<"ENERO"<<endl;

 } else if (numero == 2){

   cout<<"FEBRERO"<<endl;

 } else if (numero == 3){

   cout<<"MARZO"<<endl;

 } else if (numero == 4){

   cout<<"ABRIL"<<endl; 

 } else if (numero == 5){

   cout<<"MAYO"<<endl;

 } else if (numero == 6){

   cout<<"JUNIO"<<endl;

 } else if (numero == 7){

   cout<<"JULIO"<<endl;

 } else if (numero == 8){

   cout<<"AGOSTO"<<endl;

 } else if (numero == 9){

   cout<<"SEPTIEMBRE"<<endl;

 } else if (numero == 10){

   cout<<"OCTUBRE"<<endl;

 } else if (numero == 11){

   cout<<"NOVIEMBRE"<<endl;

 } else if (numero == 12){

   cout<<"DICIEMBRE"<<endl;

 }
    return 0;
}