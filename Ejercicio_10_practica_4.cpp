/*Escriba un algoritmo que imprima por pantalla en borde de un cuadrado de
lados de tamaño N.
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"ingrese un numero"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == 1 || i == n || j == 1 || j == n){

                cout<<"X";
            } else {

                cout<<" ";
            }

            
        }

        cout<<endl;
    }

    return 0;
}