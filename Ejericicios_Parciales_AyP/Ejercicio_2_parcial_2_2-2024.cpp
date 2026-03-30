/*Jerry es un coleccionista de hormigas que tiene tres grupos denominados A, B y C. 
con cantidades X, Y y Z respectivamente, y dispone de una caja especial representada 
por una matriz de tamaño NxN que requiere cumplir algunas condiciones especiales. 
Se pide escribir un método en C++ llamado "distributeAnts" que tome como entrada 
las cantidades X, Y, Z y N; y retorne dos resultados primero, una matriz NxN completamente 
llena con los tipos de hormigas ('A', 'B' o 'C') en la que se cumplan las restricciones 
de que: ninguna hormiga A este vertical u horizontalmente adyacente a una B, para 
evitar peleas entre ellas, que las hormigas C solo se ubiquen en posiciones diagonalmente 
adyacentes entre sí y que al menos exista una hormiga de cada grupo en la caja, segundo, 
la cantidad de hormigas de cada tipo que queden sobrantes tras la asignación. 
Por ejemplo, si X = 10, Y = 12 y Z = 3, y se elige N=3, una asignación valida podria ser: 
{'C', 'A', 'A'}, {'B', 'C', 'A'}, {'B', 'B', 'C'}, lo cual deja como sobrantes 
X = 7 Y = 9 y Z = 0 Nota: asuma que X >= N, Y >= N, Z >= N */
#include <iostream>
using namespace std;

const int NMAX = 100;

void distributeAnts(int x, int y, int z, int n) {
    
    char matrix[NMAX][NMAX];

    if ( x < n && y < n && z < n ) {
        cout << "No es posible distribuir las hormigas en la matriz." << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j) matrix[i][j] = 'C';
            z --;
            
        }
    }   

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) matrix[i][j] = 'A';
            x --;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i) matrix[i][j] = 'B';
            y --;
        }
        cout << endl;
    }

    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Restantes: " << endl;
    cout << "A: " << x << endl;
    cout << "B: " << y << endl;
    cout << "C: " << z << endl;

}

int main() {

    int x, y, z, n;

    cout << "Ingrese la cantidad de hormigas A, B, C y el tamaño de la matriz (n x n): ";
    cin >> x >> y >> z >> n;

    distributeAnts(x, y, z, n);

    return 0;
}
