/*Haga una acción que tome como entrada un arreglo de enteros A y un
elemento K y coloque K en las posiciones potencia de dos del arreglo (1,
2, 4, 8, . . .).
*/
#include <iostream>
#include <string>   
using namespace std;

#define MAX 100

bool esPotencia2(int x){
    return (x != 0 && (x & (x - 1)) == 0);
}

void colocarK(int array[], int n, int k){
    
    for (int i = 0; i < n; i++){
        if (esPotencia2(i + 1)){
            array[i] = k;
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

    int K; 
    cout<<"Ingrese un elemento de K";
    cin>> K;

    colocarK(array, n, K);

    cout<<"El arreglo modificado es ";

    for(int i = 0; i<n ; i++){
        cout<<array[i]<<endl;

    }
    cout << endl;

    return 0;
}