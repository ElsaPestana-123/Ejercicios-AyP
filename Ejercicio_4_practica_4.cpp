/*Dada una secuencia de números terminada en cero, elaborar un algoritmo
para calcular el porcentaje y la suma de los números impares, el porcentaje
y la suma de los números pares, y la suma de todos los números, y cuántos
números fueron ingresados.
*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(){

    int porcentaje_impar = 0, suma_impar = 0, porcentaje_par = 0, suma_par = 0, suma_total = 0, contador = 0, n = 0; // se declaran las variables que se van a usar
    int contador_impar = 0, contador_par = 0; 

    while(true){
        
        cout<<"ingrese un numero (escriba 0 para terminar)"<<endl;
        cin >> n; // se pide al usuario que ingrese un numero

        if(n == 0){ // si el usuario ingresa 0 se sale del bucle
            break;
        }

        if (n % 2 == 0){

            suma_par += n;

        } else{

            suma_impar += n;
        }

        contador++;
    }

    porcentaje_par = (contador_par * 100.0) / contador;
    porcentaje_impar = (contador_impar * 100.0) / contador;

    suma_total = suma_par + suma_impar;

    cout << "Suma de pares: " << suma_par << endl;
    cout << "Suma de impares: " << suma_impar << endl;
    cout << "Porcentaje de pares: " << porcentaje_par << "%" << endl;
    cout << "Porcentaje de impares: " << porcentaje_impar << "%" << endl;
    cout << "Suma total: " << suma_total << endl;
    cout << "Cantidad de numeros ingresados: " << contador << endl;

    return 0;
}