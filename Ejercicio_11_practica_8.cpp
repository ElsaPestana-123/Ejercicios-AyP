/*Defina una clase punto que tendrá dos atributos, de tipo Real x e y,
que representarán las coordenadas del punto dentro del plano. Defina un
método que tenga como argumento otro objeto de la clase punto y que
calcule la distancia entre los dos puntos. Un punto puede estar ubicado en
cualquier parte del sistema de coordenada. Puede definir otros métodos
que considere necesarios.
*/

#include <iostream>
#include <cmath> 
using namespace std;

class Punto {
    
    private: 

      float x;
      float y;

    public:

     Punto() : x(0), y(0) {}

     Punto(float x, float y) {
         this->x = x;
         this->y = y;
     }

     float calcularDistancia(Punto otro) {

         float dx = x - otro.x;
         float dy = y - otro.y;

         return sqrt(dx * dx + dy * dy);
     }

};