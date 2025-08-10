/*Haga una función para determinar si un punto (X, Y) está dentro de un
rectángulo. El rectángulo es definido por la coordenada del vértice superior
izquierdo, su altura y su ancho.
*/
#include <iostream>
using namespace std;

bool the_point_is_in_the_rectanculo(float leftSx, float leftSy, float height, float width, float PX, float PY){

    float rightSx = leftSx + width;
    float rightSy = leftSy;
    float leftIx = leftSx;
    float leftIy = leftSy - height;
    float rightIx = rightSx;
    float rightIy = leftIy;

    return (PX >= leftSx && PX <= rightSx && PY >= leftIy && PY <= leftSy);
}

int main(){

    float leftSx, leftSy, height, width;
    float PX, PY;

    cout<<"Ingrese el valor de leftSx: ";
    cin>>leftSx;

    cout<<"Ingrese el valor de leftSy: ";
    cin>>leftSy;

    cout<<"Ingrese el valor de height: ";
    cin>>height;

    cout<<"Ingrese el valor de width: ";
    cin>>width;

    cout<<"Ingrese el valor de PX: ";
    cin>>PX;

    cout<<"Ingrese el valor de PY: ";
    cin>>PY;

    the_point_is_in_the_rectanculo(leftSx,leftSy,height,width, PX, PY);

    return 0;
}