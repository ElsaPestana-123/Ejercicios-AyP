/* Mark es un capataz de obras que requiere de un sistema
   para saber el total de albañiles necesarios para poner ladrillos
   Como capataz, él sabe que un número ´A´ de albañiles pueden colocar
   ´L´ ladrillos en cierta cantidad ´M´ minutos, pero también necesita
   saber exactamente cuántos albañiles ´X´ en total se requieren para 
   cualquier nueva obra que tenga presupuestada la instalación de ´Y´
   ladrillos en ´Z´ minutos. Escriba en c++ un algoritmo que tome 
   como entrada los valores numéricos de A, L, M, Y, Z e imprima 
   X. Por ejemplo: para A=10, L=10, M=10, Y=100 y Z=10 el resultado
   a imprimir es X=10.
*/
#include <iostream>
using namespace std;

int main() {

    int A, L, M, Y, Z;

    cout << "Ingrese el numero de albañiles (A): ";
    cin >> A;

    cout << "Ingrese el numero de ladrillos colocados por A albañiles en M minutos (L): ";
    cin >> L;

    cout << "Ingrese la cantidad de minutos (M): ";
    cin >> M;

    cout << "Ingrese el numero de ladrillos a colocar en la nueva obra (Y): ";
    cin >> Y;

    cout << "Ingrese la cantidad de minutos para la nueva obra (Z): ";
    cin >> Z;

    int X = (A * Y * M) / (L * Z);
    
    cout << "El total de albañiles necesarios (X) es: " << X << endl;

    return 0;
}