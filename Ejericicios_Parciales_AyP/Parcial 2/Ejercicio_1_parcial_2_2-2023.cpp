/* Un arreglo se considera feliz si el promedio de los números pares es mayor
   al promedio de los números impares, se considera Completo si la suma de los 
   elementos en las posiciones pares es igual a la suma de los elementos en las
   posiciones impares. Además, si un arreglo es Feliz y Completo, se denomina
   como Estable, y en cualquier otro caso se denomina Inestable. Realice una 
   función llamada isStable que tome como entrada un arreglo A y retorne true
   o false si el arreglo es Estable o no.
*/
#include <iostream>
using namespace std;

bool isEstable(int arr[], int n) {

    int contpares = 0, sumapares = 0;
    int contimpares = 0, sumaimpares = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {

            contpares++;
            sumapares += arr[i];

        } else {

            contimpares++;
            sumaimpares += arr[i];
        }  
    }

    int promediopares = sumapares / contpares;
    int promedioimpares = sumaimpares / contimpares;

    int sumapares = 0, sumaimpares = 0;

    for (int i = 0; i < n; i+=2){
        sumapares += arr[i];
    }

    for (int i = 1; i < n; i+=2){
        sumaimpares += arr[i];
    }

    bool esFeliz = false, esCompleto = false, esEstable = false; 

    if (promediopares > promedioimpares) esFeliz = true;
    if (sumapares == sumaimpares) esCompleto = true;

    if (esFeliz && esCompleto) esEstable = true;
    else esEstable = false;

    return esEstable;
}


int main(){

    int n;
    cout << "Ingrese la cantidad de elementos del arreglo: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    if (isEstable(arr, n)) {
        cout << "El arreglo es estable." << endl;
    } else {
        cout << "El arreglo es inestable." << endl;
    }

    return 0;
}