/*Haga un algoritmo que lea números enteros almacenados en dos archivos
que contienen números enteros ordenados y genere un tercer archivo que
contiene los mismos elementos de los dos archivos ordenados. Por ejemplo, si
el primer archivo contiene los elementos 1 40 50 100 y el segundo contiene
los elementos 5 20 40 80, el archivo resultante tendría los elementos:
1 5 20 40 40 50 80 100
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

#define MAX 100

int leerArchivo(string nombreArchivo, int array[], int &n) {

    ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo" << endl;
        return -1;
    }

    int num, i = 0;
    while (archivo >> num && i < MAX) {
        array[i++] = num;
    }

    archivo.close();

    return i;
}   

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int array[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void verContenidoArchivo(string nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        return;
    }

    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
}

int main() {

    string nombreArchivo1 = "numeros1.txt";
    string nombreArchivo2 = "numeros2.txt";
    int numeros1[MAX];
    int numeros2[MAX];
    int numeros3[MAX];
    int n1;
    int n2;

    n1 = leerArchivo(nombreArchivo1, numeros1, n1);
    n2 = leerArchivo(nombreArchivo2, numeros2, n2);

    cout<<"El archivo 1 tiene: "<<endl;
    for(int i = 0; i < n1; i++){
        cout<<numeros1[i]<<endl;;

    }

    cout<<"El archivo 2 tiene: "<<endl;
    for(int i = 0; i < n2; i++){
        cout<<numeros2[i]<<endl;

    }

    int n3 = n1 + n2;

    for (int i = 0; i < n1; i++) {
        numeros3[i] = numeros1[i];
    }

    for (int i = 0; i < n2; i++) {
        numeros3[n1 + i] = numeros2[i];
    }

    bubbleSort(numeros3, n3);

    ofstream archivo;

    archivo.open("ordenado.txt", ios::out);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    cout<<"El archivo ordenado es: "<<endl;

    for(int i = 0; i < n3; i++){
        archivo<<numeros3[i]<<endl;
    }

    archivo.close();

    verContenidoArchivo("ordenado.txt");

    return 0;
}