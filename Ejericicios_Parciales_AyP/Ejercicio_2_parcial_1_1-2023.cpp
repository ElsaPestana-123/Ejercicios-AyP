/* Escriba un algoritmo que tome como entrada 6 caracteres y que determine 
   cuántos tienen una distancia numérica par respecto al carácter de valor
   mínimo. Por ejemplo, para los caracteres 'a', 'f', 'd', 'e', 'c', 'b' el
   resultado es 2.
*/
#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3, c4, c5, c6;
    cout << "Ingrese 6 caracteres: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6;

    char menor = c1;

    if (c2 < menor) menor = c2;
    if (c3 < menor) menor = c3;
    if (c4 < menor) menor = c4;
    if (c5 < menor) menor = c5;
    if (c6 < menor) menor = c6;

    int diferencias_pares;

    if ((c1 - menor) % 2 == 0) diferencias_pares++;
    if ((c2 - menor) % 2 == 0) diferencias_pares++;
    if ((c3 - menor) % 2 == 0) diferencias_pares++;
    if ((c4 - menor) % 2 == 0) diferencias_pares++;
    if ((c5 - menor) % 2 == 0) diferencias_pares++;
    if ((c6 - menor) % 2 == 0) diferencias_pares++;

    cout << "Cantidad de caracteres con distancia par: " << diferencias_pares << endl;

    return 0;
}