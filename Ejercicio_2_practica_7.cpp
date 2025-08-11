/*Un punto en 3 dimensiones tiene tres coordenadas X, Y , Z. Defina
un registro para representarlos. Usando el registro definido anteriormente,
haga una función que calcule la distancia entre dos puntos.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

struct Punto{
    float x;
    float y;
    float z;

}; 

float dimension(Punto p1, Punto p2){
    float d;
    d = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
    return d;

}


int main(){

    Punto point1;
    point1.x;
    point1.y;
    point1.z;

    Punto point2;
    point2.x;
    point2.y;
    point2.z;

    cout << "Ingrese las coordenadas del primer punto: " << endl;
    cout << "x: ";
    cin >> point1.x;
    cout << "y: ";
    cin >> point1.y;
    cout << "z: ";
    cin >> point1.z;

    cout << "Ingrese las coordenadas del segundo punto: " << endl;
    cout << "x: ";
    cin >> point2.x;
    cout << "y: ";
    cin >> point2.y;
    cout<< "z: ";
    cin >> point2.z;

    float d = dimension(point1, point2);
    cout << "La distancia entre los dos puntos es: " << d << endl;
    
    return 0;
}
