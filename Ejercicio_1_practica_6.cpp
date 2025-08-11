/*Haga una función que tome como entrada un arreglo y retorne el máximo
valor del mismo
*/
#include <iostream>
#include <string>
using namespace std;

#define MAX 100

int maximo(int array[], int n){ // n es el total de elementos del arreglo
    int MaxValue = array[0]; // inicializamos el maximo valor con el primer elemento del arreglo

    for(int i = 0; i < n; i++){
        if (array[i] >= MaxValue){ // si el elemento actual es mayor o igual al maximo valor
            MaxValue = array[i]; // actualizamos el maximo valor
        }
    }

    return MaxValue; // retornamos el maximo valor

}

int main(){

    int n;
    cout<<"Ingrese la cantidad elementos que va a tener ele arreglo"<<endl;
    cin>>n; // cantidad de elementos del arreglo

    int array[MAX];

    cout<<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < n; i++){ // ingresamos los elementos del arreglo
        cin>>array[i]; 
    }

    cout<<"El maximo valor del arreglo es: "<<maximo(array, n)<<endl;

    return 0;
}