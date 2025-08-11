/*Haga una acción que tome como entrada un arreglo de enteros y retorne
(usando parámetros por referencia) el número de elementos pares e impares
del arreglo.
*/
#include <iostream>
using namespace std;

#define MAX 100

void pares_impares(int array[], int n, int &pares, int &impares){


    for(int i=0; i<n; i++){

        if(array[i]%2==0){
            pares++;
        } else {
            impares++;
        }
    }
}

int main(){

    int n;
    cout<<"Ingrese la cantidad elementos que va a tener el arreglo"<<endl;
    cin>>n; // cantidad de elementos del arreglo

    int array[MAX];

    cout<<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < n; i++){ // ingresamos los elementos del arreglo
        cin>>array[i]; 
    }

    int pares = 0;
    int impares = 0;

    pares_impares(array, n, pares, impares);
    cout<<"Cantidad de pares: "<<pares<<endl;
    cout<<"Cantidad de impares: "<<impares<<endl;

    return 0;
}