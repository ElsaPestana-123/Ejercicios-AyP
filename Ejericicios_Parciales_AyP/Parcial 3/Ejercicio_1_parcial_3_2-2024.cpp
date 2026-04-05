/* Un bosque se representa como una matriz de NxM que guarda objetos tipo Arbol.
   Por cada arbol se dispone de su tipo (máximo 150 especies distintas) y su altura.
   en metros (flotante). Utilizando progrmamación orientada a objetos, escriba una
   función llamada "Stats()" que tome como parámetro una matriz de arboles y escriba
   en un archivo llamado "bosque.txt": a) el número de árboles de cada especie;
   b) la cantidad promedio de árboles que estén por encima de una altura X. 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

# define n 100
# define m 100

class Arbol{
    public: 
    char tipo;
    float altura;
    int rept = 0;

    public:
    Arbol(char t, float a) : tipo(t), altura(a) {}
    
};

Arbol arboles_list[150]; // asuma que está lleno con las 150 especies distintas
Arbol Bosque[100][50];

int  Buscar_Especie(Arbol arboles_list[], char T){
    for (int i = 0; i < 150; i++){
        if (arboles_list[i].tipo == T){
            return arboles_list[i].rept++;
        }
    }
}

void Buscar_Bosque(Arbol Bosque[n][m], Arbol arboles_list[]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            Buscar_Especie(arboles_list, Bosque[i][j].tipo);
        }
    }
}

float Promedio_Altura(Arbol Bosque[n][m], int N, int M, int X){
    int count = 0;
    float suma = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (Bosque[i][j].altura > X){
                count++;
                suma += Bosque[i][j].altura;
            }
        }
    }
    if (count == 0) return 0;
    return suma / (float)count;
}

void stats(Arbol arboles_list[], Arbol Bosque[n][m], int N, int M, int X){

    // Guardar los resultados en un archivo
   ofstream archivo("bosque.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return;
    }

    for (int i = 0; i < 150; i++){
        if (arboles_list[i].rept > 0){
            archivo << arboles_list[i].tipo << " " << arboles_list[i].rept << endl;
        }
    }

    archivo << "Promedio de altura de árboles mayores a " << X << ": "<< Promedio_Altura(Bosque, N, M, X) << endl;

    archivo.close();
}