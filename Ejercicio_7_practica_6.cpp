/*Dado un arreglo con valores entre 0 y 100 haga una función para determinar
el valor que más se repite.
*/ 
#include <iostream>
#include <string>
using namespace std;

#define MAX 100


int contador(int (&array)[], int n){

    int count[101];

    for(int i = 0; i < 101; i++){ // aseguramos que todos los valores de count sean 0

        count[i] = 0;
    }

    for(int i = 0; i<n; i++){

        count[array[i]]++;

    }

    int maxIndex = 0;
    int maxValue = count[maxIndex];

    for (int i = 0; i < 101; i++) {
        if (count[i] > maxValue) {
         maxIndex = i;
         maxValue = count[i];
        }
    }

    return maxIndex;

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

    cout<<"El elemento que ma se repite es el"<<contador(array, n)<<endl;

    return 0;
}