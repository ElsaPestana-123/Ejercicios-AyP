/*Dado un número entero positivo desde hasta 6 dígitos, se requiere realizar una operación
  denominada "Operación Alternante", que consiste en separar los dígitos del número original
  en dos grupos: los correspondientes a las posiciones impares y los de las posiciones pares, 
  generando así dos nuevos números. Si el número formado por los dígitos en posiciones
  impares es mayor que el formado por los dígitos en posiciones pares, se calcula la diferencia
  entre ambos (restando el número par al impar). De lo contrario, se calcula el producto de ambos.
  Por ejemplo, para el número 572314, se generan los números 521 (dígitos en posiciones impares) y 734
  (dígitos en posiciones pares); como 734 > 521, el resultado será el producto de 734 x 521 = 382414.
*/
#include <iostream> 
#include <cmath>
using namespace std;

int main(){

    int numero, d1, d2, d3, d4, d5, d6;
    
    cout << "Ingrese un numero de 6 digitos: ";
    cin >> numero;
    int aux = numero;

    d1 = aux / 100000;
    d2 = (aux / 10000) % 10;
    d3 = (aux / 1000) % 10;
    d4 = (aux / 100) % 10;
    d5 = (aux / 10) % 10;
    d6 = aux % 10;

    int posiciones_impares = d2 * 100 + d4 * 10 + d6;
    int posiciones_pares = d1 * 100 + d3 * 10 + d5;

    if (posiciones_impares > posiciones_pares){
        int diferencia = posiciones_pares - posiciones_impares;
    } else {
        int producto = posiciones_impares * posiciones_pares;
    }

    return 0;
}