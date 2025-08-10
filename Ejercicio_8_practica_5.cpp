/*Usando la función desarrollada en el problema (7) haga una función que
tome como entrada dos rectángulos y determine si algún vértice del 1er
rectángulo está contenido en el 2do rectángulo.
*/
#include <iostream>
using namespace std;

bool the_point_is_in_the_rectanculo(float leftSx, float leftSy, float height, float width, float PX, float PY){

    float rightSx = leftSx + width;
    float rightSy = leftSy;
    float leftIx = leftSx;
    float leftIy = leftSy - height;

    return (PX >= leftSx && PX <= rightSx && PY >= leftIy && PY <= leftSy);
}

bool Interseccion(float leftSx0, float leftSy0, float height0, float width0, float leftSx1, float leftSy1, float height1, float width1){

    return the_point_is_in_the_rectanculo(leftSx0, leftSy0, height0, width0, leftSx1, leftSy1) ||
    the_point_is_in_the_rectanculo(leftSx0, leftSy0, height0, width0, leftSx1 + width1, leftSy1) ||
    the_point_is_in_the_rectanculo(leftSx0, leftSy0, height0, width0, leftSx1, leftSy1 - height1) ||
    the_point_is_in_the_rectanculo(leftSx0, leftSy0, height0, width0, leftSx1 + width1, leftSy1 - height1) ||
    the_point_is_in_the_rectanculo(leftSx1, leftSy1, height1, width1, leftSx0, leftSy0) ||
    the_point_is_in_the_rectanculo(leftSx1, leftSy1, height1, width1, leftSx0 + width0, leftSy0) ||
    the_point_is_in_the_rectanculo(leftSx1, leftSy1, height1, width1, leftSx0, leftSy0 - height0) ||
    the_point_is_in_the_rectanculo(leftSx1, leftSy1, height1, width1, leftSx0 + width0, leftSy0 - height0);

}
    
int main(){

    return 0;
}