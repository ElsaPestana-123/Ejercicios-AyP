/*Utilice ciclos para calcular el valor de la expresión: sumatoria hasta n de i=1 de 
multiplicacion hasta i de j = 1 de j^2.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;

    cout<<"ingrese un numero"<<endl;
    cin>>n;

    int res = 0;

    for(int i = 1; i<= n; i++){ 
        int aux = 1;
        for(int j = 1; j<=i; j++){
            aux *= pow(j,2);
            
        }
      res+= aux;
    }

  cout<<res<<endl;

    return 0;

}