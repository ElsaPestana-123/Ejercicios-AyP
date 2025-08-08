/*Haga un algoritmo que tome como entrada un número menor a 100 y
determine si es primo (recuerde que un número N es primo si sus únicos
divisores son 1 y N).
*/
#include <iostream>
using namespace std;

int main(){

 int n;

 cout << "ingrese un numero que sea mayor a 1 y menos o igual a 100" << endl;
 cin>> n;

 bool Primo = (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31 || n == 37 || n == 41 || n == 43 || n == 47 || n == 53 || n == 59 || n == 61 || n == 67 || n == 71 || n == 73 || n == 79 || n == 83 || n == 89 || n == 97);

 if(Primo == true){

   cout<<"el numero es primo"<<endl;

 }else{

   cout<<"el numero no es primo"<<endl;

 }

    return 0;
}