/*Escriba un algoritmo que lea un número real x, un número entero n y los coeficientes
reales ai de un polinomio p(x) = a0x0+a1x1+x2x2 . . . an−1xn−1
y calcule el valor del polinomio para el x dado. Por ejemplo, si x = 2, n = 3
y los coeficientes son 2, −1, 3, el polinomio es p(x) = 2 − x + 3x2, y debe
imprimir el valor 12.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x;
    int n;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    float a = 0.0;
    float resultado = 0.0;

    for (int i = 0; i < n; i++){
        cout << "Ingrese el coeficiente de x^" << i << ": ";
        cin >> a;

        resultado += a * pow(x,i);

    }

    cout << resultado << endl;

    return 0;
}
