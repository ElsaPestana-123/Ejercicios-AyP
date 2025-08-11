#include <iostream>
#include <string>
using namespace std;

#define MAX 100

// Haga una funcion que tome como entrada un arreglo de enteros A y un numero K,
// y determine si existe dos valores de A que sumados sean igual a K. Por ejemplo, si A = {4,−1, 6, 8, 10, 3} y K = 2, la función
// debe retornar verdadero ya que −1 + 3 = 2.

bool verficar_suma(int array[], int n, int k){

    for(int i = 0; i < n; i++){
        for(int j = i+1;j<n;j++){
            if(array[i] + array[j] == k){
                return true;
            }
        }
    }

    return false;
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

    int K; 
    cout<<"Ingrese un elemento de K";
    cin>> K;

    if(verficar_suma(array, n, K)){
        cout<<"Si existe dos valores de A que sumados sean igual a K"<<endl;
    }else{
        cout<<"No existe dos valores de A que sumados sean igual a K"<<endl;
    }    

    return 0;

}