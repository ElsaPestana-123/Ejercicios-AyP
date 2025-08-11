#include <iostream>
#include <string>
using namespace std;

#define MAX 100

// Haga una accion que tome como entrada un arreglo A y un entero n y retorne 
//(usando parametros por referencia) el numero de elementos del arreglo que sean mayores a n

void elementosMayores(int array[], int size, int comparador, int &count, float &promedio){

    int suma = 0;
    count = 0;

    for(int i = 0; i < size; i++){

        if(array[i] > comparador){
            count ++;
            suma += array[i];
        }
    }

    promedio = float(suma) / count;

}

int main(){

    int size;
    int comparador;
    cout<<"Ingrese la cantidad elementos que va a tener el arreglo"<<endl;
    cin>> size; // cantidad de elementos del arreglo

    cout<<"Ingrese un numero a comparar"<<endl;
    cin>>comparador;

    int array[MAX];

    cout<<"Ingrese los elementos del arreglo"<<endl;
    for(int i = 0; i < size; i++){ // ingresamos los elementos del arreglo
        cin>>array[i]; 
    }

    int count = 0;
    float promedio = 0.0;

    elementosMayores(array, size, comparador, count, promedio);
    cout<<"la cantidad de elementos mayores a: "<<comparador<<" Es el siguiente"<<count<<endl;
    cout<<"Y su promedio es "<<promedio<<endl;

    return 0;
}    
