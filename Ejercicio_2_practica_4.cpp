/*Haga un algoritmo que determine si un número es capicúa (palíndrome).
Un número es capicúa si se lee igual al derecho y a revés.
*/
#include <iostream>
using namespace std;

int main(){
 int D, n, num, res=0;

 cout<<"ingrese un numero"<<endl;
 cin>>n;

 num=n;
  
  while (n!=0){

    D= n % 10;
    res= (res*10) + D;
    n /= 10;
  }
    if(num==res){
        cout<<"El numero es capicua"<<endl;
    }else{
        cout<<"El numero no es capicua"<<endl;
    }

 return 0;
}