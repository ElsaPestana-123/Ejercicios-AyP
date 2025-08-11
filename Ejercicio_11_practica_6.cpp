/*Haga una función que tome como entrada una matriz cuadrada y retorne
la suma de los elementos de la diagonal secundaria.*/
#include <iostream>
#include <string>
using namespace std;

#define MAX 100

int sumatoria(int mat[MAX][MAX], int n){

    int suma = 0;

    for(int i = 0; i < n ; i++){
        suma += mat[i][n - 1 - i];
    }

    return suma;

}

int main(){

    int n,m;

    cout<<"Ingrese la cantidad de filas(horizontal de la matriz)"<<endl;
    cin>> n;

    cout<<"Ingrese la cantidad de columnas(vertical de la matriz)"<<endl;
    cin>> m;

    int matrix [MAX] [MAX];

    cout<<"Ingrese los elementos de la matriz"<<endl;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
       cin >> matrix[i][j];
      }
    }

    int resultado = sumatoria(matrix, n);

    cout<<"El resultado de la sumatoria de los elementos de la diagonal secundaria es: "<< resultado <<endl;


    return 0;
}