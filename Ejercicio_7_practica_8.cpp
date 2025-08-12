/*Escribir la clase Fraccion que contenga los siguientes métodos:
Fraccion(N1,N2): Constructor que recibe valores enteros para el numerador (N1) y el denominador (N2).
Sumar(b): Sumar la fracción b a la fracción invocante.
Multiplicar(b): Multiplicar la fracción b a la fracción invocante.
Dividir(b): Dividir la fracción b a la fracción invocante.
Comparar(b): Retorna verdadero si la fracción invocante es igual a b, sino retorna falso.
Simplificar(): Simplificar la fracción.
aString(): Devuelve un String con la fracción llamante expresada en la forma N1/N2.
Escriba adicionalmente, un algoritmo principal que utilice la clase Fraccion
para almacenar tres fracciones dadas por el usuario (F1, F2, F3) y calcule
la suma de F1 + F2 + F3, la multiplicación de F1 * F3, la división de F2
entre F1 e imprima los tres resultados.
*/
#include <iostream>
#include <string>
using namespace std;

class Fraccion {
    private:

     int numerador;
     int denominador;

     int obtenerMCD(int a, int b) {
        if (b == 0) return a;

        return obtenerMCD(b, a % b);
     }

    public:

     Fraccion(int N1, int N2) {
        numerador = N1;
        denominador = N2;
     }

     void suma (Fraccion b) {
        numerador = numerador * b.denominador + b.numerador * denominador;
        denominador = denominador * b.denominador;
     }

     void multiplicar (Fraccion b) {
        numerador = numerador * b.numerador;
        denominador = denominador * b.denominador;
     }

     void dividir (Fraccion b) {
        numerador = numerador * b.denominador;
        denominador = denominador * b.numerador;
     }

     bool comparar (Fraccion b) {
        return (numerador * b.denominador == b.numerador * denominador);
     }

     void simplificar () {
        int mcd = obtenerMCD(numerador, denominador);
        numerador /= mcd;
        denominador /= mcd;
        if (denominador < 0) { 
            numerador *= -1;
            denominador *= -1;
        }
     }

     string aString () {
        return to_string(numerador) + "/" + to_string(denominador);
     }

};

int main() {
    int n1, d1, n2, d2, n3, d3;

    cout << "Ingrese F1 (numerador y denominador): ";
    cin >> n1 >> d1;

    cout << "Ingrese F2 (numerador y denominador): ";
    cin >> n2 >> d2;

    cout << "Ingrese F3 (numerador y denominador): ";
    cin >> n3 >> d3;

    Fraccion F1(n1, d1), F2(n2, d2), F3(n3, d3);

    Fraccion suma = F1;
    suma.suma(F2);
    suma.suma(F3);

    Fraccion mult = F1;
    mult.multiplicar(F3);

    Fraccion div = F2;
    div.dividir(F1);

    cout << "\nResultados:\n";
    cout << "F1 + F2 + F3 = " << suma.aString() << endl;
    cout << "F1 * F3 = " << mult.aString() << endl;
    cout << "F2 / F1 = " << div.aString() << endl;

    return 0;
}