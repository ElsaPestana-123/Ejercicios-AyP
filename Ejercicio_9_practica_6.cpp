/*Dados dos arreglos ordenados de enteros A y B, haga una función que
permita obtener un tercer arreglo C que contenga todos los elementos de
A y B ordenados. Por ejemplo, si A = {1, 4, 9} y B = {2, 5, 10, 12}, el
resultado deberá ser C = {1, 2, 4, 5, 9, 10, 12}.
*/
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 500

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Ordenamientoarray(int arrayA[], int tamA, int arrayB[], int tamB, int arrayC[], int &tamC) {

    tamC = 0;

    for (int i=0; i < tamA; i++){
        arrayC[tamC++] = arrayA[i]; //1,4,9
    }

    for (int i=0; i < tamB; i++){
        arrayC[tamC++] = arrayB[i]; //2,5,10,12
    }

    for (int i = 0; i < tamC - 1; i++) {
        for (int j = 0; j < tamC - i - 1; j++) {
            if (arrayC[j] > arrayC[j + 1]) {
                swap(arrayC[j], arrayC[j + 1]);
            }
        }
    }

}

int main(){

    int arrayA[MAX], arrayB[MAX], tamA, tamB;
    int arrayC[MAX], tamC;

    cout << "Ingrese el tamano del primer array: ";
    cin >> tamA;

    cout << "Ingrese los elementos del primer array:\n";
    for (int i = 0; i < tamA; i++) {
        cin >> arrayA[i];
    }

    cout << "Ingrese el tamano del segundo array: ";
    cin >> tamB;

    cout << "Ingrese los elementos del segundo array:\n";
    for (int i = 0; i < tamB; i++) {
        cin >> arrayB[i];
    }

    Ordenamientoarray(arrayA, tamA, arrayB, tamB, arrayC, tamC);

    cout << "Array combinado y ordenado:\n";
    for (int i = 0; i < tamC; i++) {
        cout << arrayC[i] << " ";
    }
    cout << endl;

    return 0;
}