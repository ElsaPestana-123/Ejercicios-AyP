/* Suponga una variente del juego de Pac-Man que se representa por una
   matriz de NxM donde se colocan de forma aleatoria los Personajes 
   (1 Pac-Man y 4 fantasmas) además de las Pastillas que el Pac-Man
   se come. Utilice Progrmación Orientada a Objetos para modelar
   el juego, incluya una clase llamada PacMan e implemente un
   método llamado summary que imprima por pantalla: a) los 
   personajes ordenados por su coordenada X (de izquierda a derecha
   según su posición); b) el número de pastillas presentes en el
   tablero; c) la cantidad de casillas vacías en ese instantes 

   Nota: Asuma que el tablero ya está inicializado, puede utilizar
   cualquier método adicional, atributos y estructuras que considere
   necesarias.
*/   
#include <iostream>
using namespace std;

const int NMAX = 10;
const int MMAX = 10;

class Personaje {
public:
    string tipo; // "PacMan" o "Fantasma"
    int x, y;
    Personaje(string t, int x_, int y_) : tipo(t), x(x_), y(y_) {}
};

class PacMan {
    public: 
    int N, M;
    char tablero[NMAX][MMAX];
    Personaje personajes[5]; 
    int numPersonajes;

   void summary(){

    // a) Personajes ordenados por coordenada X

    for (int i = 0; i < numPersonajes; i++){
        for (int j = i + 1; j < numPersonajes; j++){
            if (personajes[i].x > personajes[j].x){
                Personaje temp = personajes[i];
                personajes[i] = personajes[j];
                personajes[j] = temp;
            }
        }
    }

    cout << "Personajes ordenados por coordenada X:" << endl;
    for (int i = 0; i < numPersonajes; i++){
        cout << personajes[i].tipo << " en (" << personajes[i].x << ", " << personajes[i].y << ")" << endl;
    }

     // b) Número de pastillas
    int numPastillas = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (tablero[i][j] == '.'){
                numPastillas++;
            }
        }
    }
    cout << "Número de pastillas en el tablero: " << numPastillas << endl;

    // c) Número de casillas vacías
    int numVacias = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (tablero[i][j] == ' '){
                numVacias++;
            }
        }
    }
    cout << "Casillas vacías: " << numVacias << endl;

   }
}; 