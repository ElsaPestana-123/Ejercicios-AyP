/*Escriba en C++ una función "int Juego(int Jugadores [], int numjugadores)" 
que retorne el índice del jugador que gane el juego. Las reglas del mismo son simples: 
los jugadores comienzan en la posición O y deben llegar a la posición 100, 
para esto asuma que existe una función "int Random()" que retorna el número de pasos 
que avanza el jugador actual; si el jugador cae en una posición divisible entre 5 
devuelve 5 pasos, si es divisible entre 7 vuelve a avanzar Random pasos y 
si la posición es un número primo avanza hasta el siguiente primo si es 
posible, cada jugador avanza una vez por ciclo y hasta que alguno llegue a la meta
*/
#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13
    || num == 17 || num == 19 || num == 23 || num == 29 || num == 31 || num == 37
    || num == 41 || num == 43 || num == 47 || num == 53 || num == 59 || num == 61
    || num == 67 || num == 71 || num == 73 || num == 79 || num == 83 || num == 89
    || num == 97) {
        return true; // Es primo
    }
    return false; // No es primo
}

int siguientePrimo(int num) {
    for (int i = num + 1; i <= 100; i++) {
        if (esPrimo(i)) {
            return i; // Retorna el siguiente número primo
        }
    }
    return num; // No hay siguiente primo dentro del rango
}

int Random() {
    return rand() % 6 + 1; // Retorna un número aleatorio entre 1 y 6
}

int juego( int jugadores[], int numjugadores){

    for (int i = 0; i < numjugadores; i++){
        jugadores[i] = 0;
    }

    while(true){

        for (int i = 0; i < numjugadores; i++){

            int pasos = Random();
            jugadores[i] += pasos;

            if (jugadores[i] % 5 == 0) {
                jugadores[i] += 5; // Avanza 5 pasos adicionales
            }
            if (jugadores[i] % 7 == 0) {
                jugadores[i] += Random(); // Avanza Random pasos adicionales
            }
            if (esPrimo(jugadores[i])) {
                jugadores[i] = siguientePrimo(jugadores[i]); // Avanza al siguiente primo
            }
            if (jugadores[i] >= 100) {
                return i; // Retorna el índice del jugador que gana
            }
        }

    }

}

int main(){

    int jugadores[10];
    int numjugadores = 4;

    int ganador = juego(jugadores, numjugadores);

    cout << "El jugador ganador es: " << ganador << endl;

    return 0;
}