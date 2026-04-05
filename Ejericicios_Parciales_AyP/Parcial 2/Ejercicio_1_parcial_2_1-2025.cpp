/* Un cartón de Bingo está conformado por 5 filas y 5 columnas de números que
   están entre 1 y 90. Cada vez que se saca un número del bombo, el jugador 
   debe verificar si se encuentra en su cartón y marcarlo. Cuando el jugador
   detecta que ha completado con marcas una fila, columna o cualquiera de las
   diagonales, gana el juego y canta "Bingo". Escriba en C++ un procedimiento
   llamado "Bingo", que tome como entrada un car´ton con casillas previamente
   marcadas por un jugador y determine si dicho cartón es ganador 
*/
#include <iostream>
using namespace std;

const int MAX = 100;

bool Bingo(char cartones[MAX][MAX], int n) {
    
    bool isBingo = false;

    // diagonal principal y secundaria

    if(cartones[0][0] == 'M' && cartones[1][1] == 'M' && cartones[2][2] == 'M' && cartones[3][3] == 'M' && cartones[4][4] == 'M') {
        isBingo = true;

    } else if (cartones[4][0] == 'M' && cartones[3][1] == 'M' && cartones[2][2] == 'M' && cartones[1][3] == 'M' && cartones[0][4] == 'M') {
        isBingo = true;

    // filas    

    } else if (cartones[0][0] == 'M' && cartones[1][0] == 'M' && cartones[2][0] == 'M' && cartones[3][0] == 'M' && cartones[4][0] == 'M') {
        isBingo = true;

    } else if (cartones[0][1] == 'M' && cartones[1][1] == 'M' && cartones[2][1] == 'M' && cartones[3][1] == 'M' && cartones[4][1] == 'M') {
        isBingo = true;

    } else if (cartones[0][2] == 'M' && cartones[1][2] == 'M' && cartones[2][2] == 'M' && cartones[3][2] == 'M' && cartones[4][2] == 'M') {
        isBingo = true;

    } else if (cartones[0][3] == 'M' && cartones[1][3] == 'M' && cartones[2][3] == 'M' && cartones[3][3] == 'M' && cartones[4][3] == 'M') {
        isBingo = true;

    } else if (cartones[0][4] == 'M' && cartones[1][4] == 'M' && cartones[2][4] == 'M' && cartones[3][4] == 'M' && cartones[4][4] == 'M') {
        isBingo = true;

    // columnas

    } else if (cartones[0][0] == 'M' && cartones[0][1] == 'M' && cartones[0][2] == 'M' && cartones[0][3] == 'M' && cartones[0][4] == 'M') {
        isBingo = true;

    } else if (cartones[1][0] == 'M' && cartones[1][1] == 'M' && cartones[1][2] == 'M' && cartones[1][3] == 'M' && cartones[1][4] == 'M') {
        isBingo = true;

    } else if (cartones[2][0] == 'M' && cartones[2][1] == 'M' && cartones[2][2] == 'M' && cartones[2][3] == 'M' && cartones[2][4] == 'M') {
        isBingo = true;

    } else if (cartones[3][0] == 'M' && cartones[3][1] == 'M' && cartones[3][2] == 'M' && cartones[3][3] == 'M' && cartones[3][4] == 'M') {
        isBingo = true;

    } else if (cartones[4][0] == 'M' && cartones[4][1] == 'M' && cartones[4][2] == 'M' && cartones[4][3] == 'M' && cartones[4][4] == 'M') {
        isBingo = true;
    } else {
        isBingo = false;
    }

    return isBingo;
}

int main() {
    char cartones[MAX][MAX] = {
        {'M', 'A', 'A', 'B', 'C'},
        {'B', 'M', 'A', 'A', 'A'},
        {'M', 'B', 'M', 'C', 'B'},
        {'M', 'A', 'B', 'M', 'A'},
        {'M', 'M', 'A', 'B', 'M'}
    };
    int n = 5;

    if (Bingo(cartones, n)) {
        cout << "Bingo!" << endl;
    } else {
        cout << "No hay Bingo." << endl;
    }

    return 0;
}
