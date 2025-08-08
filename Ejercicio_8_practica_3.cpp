/*Un número de 4 cifras es felíz si los dos primeros dígitos son mayores que
los dos últimos dígitos. Por ejemplo 5612 es felíz porque 56 es mayor que
12. Un número de 4 cifras es creciente si cada dígito es mayor al anterior.
Por ejemplo 1569 es creciente porque 9 > 6 > 5 > 1. Todo número que es
felíz y creciente se dice que es un número muy felíz. Todo número que no es
felíz ni creciente se dice que es infelíz. Haga un algoritmo que tome como
entrada un número de 4 dígitos e imprima el tipo de número encontrado,
según la clasficicación descrita.
*/
#include <iostream>
using namespace std;

int main(){

 int numero, D1, D2, D3, D4;

 cout<<"ingrese un numero de 4 digitos"<<endl;
 cin>> numero;

 D4 = numero % 10;
 numero /= 10;
 D3 = numero % 10;
 numero /= 10;
 D2 = numero % 10;
 numero /= 10;
 D1 = numero % 10;

 int primeros = D1 * 10 + D2; 
 int ultimos  = D3 * 10 + D4; 

  bool feliz = (primeros > ultimos);
  bool creciente = (D4 > D3 && D3 > D2 && D2 > D1);

  if (feliz && creciente) {
    
    cout << "El numero es MUY feliz" << endl;  

  } else if (feliz) {

    cout << "El numero es feliz" << endl;

  } else if (creciente) {

    cout << "El numero es creciente" << endl;

  } else {

    cout << "El numero es infeliz" << endl;
  }

  return 0;
}
