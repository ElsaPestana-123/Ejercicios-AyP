/*Un número de Armstrong (también conocido como número narcisista)
  es un número que es igual a la suma de sus propios dígitos elevados
  a la potencia del número total de dígitos. Por ejemplo, 153 es un
  número de Armstrong porque (1^3 + 5^3 + 3^3 = 153). Escribe un programa
  en c++ que dado un número ingresado por el usuario (máximo 5 dígitos),
  determine si es un número de Armstrong o no.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int numero, d1, d2, d3, d4, d5;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numero;

    int aux = numero;
    
    d1 = aux / 10000;
    d2 = (aux / 1000) % 10;
    d3 = (aux / 100) % 10;
    d4 = (aux / 10) % 10;
    d5 = aux % 10;

    int amstrong;
    int digitos;
    
    if (numero >= 10000 && numero <= 99999){
        digitos = 5;
       
    } else if (numero >= 1000 && numero <= 9999){
        digitos = 4;
        
    } else if (numero >= 100 && numero <= 999){
        digitos = 3;
        
    } else if (numero >= 10 && numero <= 99){
        digitos = 2;
        
    } else if (numero >= 0 && numero <= 9){
        digitos = 1;
        
    } else {
        cout << "El numero ingresado no es valido." << endl;
        return 0;
    }

    if (digitos == 5){
        amstrong = pow(d1, 5) + pow(d2, 5) + pow(d3, 5) + pow(d4, 5) + pow(d5, 5);
        
    } else if (digitos == 4){
        amstrong = pow(d2, 4) + pow(d3, 4) + pow(d4, 4) + pow(d5, 4);
        
    } else if (digitos == 3){
        amstrong = pow(d3, 3) + pow(d4, 3) + pow(d5, 3);
        
    } else if (digitos == 2){
        amstrong = pow(d4, 2) + pow(d5, 2);
        
    } else if (digitos == 1){
        amstrong = pow(d5, 1);
        
    }

    if (amstrong == numero){
        cout << "El numero " << numero << " es un numero de Armstrong." << endl;
    } else {
        cout << "El numero " << numero << " no es un numero de Armstrong." << endl;
    }

    return 0;
}