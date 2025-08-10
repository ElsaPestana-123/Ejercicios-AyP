/*Escriba un algoritmo que imprima por pantalla en borde de cuadrados de
tamaño impar desde N hasta 1 insertados uno dentro de otro.
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    bool print = false;

    cout<<"ingrese un numero"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j = 1; j<=n; j++){

            for (int k = 0; k <= n; k+=2){
                print = false;
                print = print || (i == 1 + k || i == n - k || j == 1 + k || j == n - k)
                && (i >= 1 + k && i <= n - k && j >= 1 + k && j <= n - k);
            }

            if (print) {
                cout << "X";
            } else {
                cout << " ";
            }

        }

        cout<<endl;
    }

    return 0;

}