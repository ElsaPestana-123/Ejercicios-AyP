/* Frank se ha comprado una calculadora octoquinética la cual tiene 
   un comportamiento especial, ella cambia las posiciones pares por 
   un 8 si el valor original es par, en caso contrario coloca un 4,
   realice un algoritmo en c++ que dado un número de máximo 6 dígitos
   imprima el número octoquinético correspondiente, por ejemplo:
   325364, equivalente al número octoquinético 385468.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

   int numero, d1, d2, d3, d4, d5, d6;
   cout << "Ingrese un numero de maximo 6 digitos: ";
   cin >> numero;

   d1 = numero / 100000;
   d2 = (numero / 10000) % 10;
   d3 = (numero / 1000) % 10;
   d4 = (numero / 100) % 10;
   d5 = (numero / 10) % 10;
   d6 = numero % 10;

   if (d2 % 2 == 0){
      d2 = 8;
   } else {
      d2 = 4;
   }

   if (d4 % 2 == 0){
      d4 = 8;
   } else {
      d4 = 4;
   }

   if (d6 % 2 == 0){
      d6 = 8;
   } else {
      d6 = 4;
   }

   cout << "El numero octoquinético es: " << d1 << d2 << d3 << d4 << d5 << d6 << endl;

   return 0;
}