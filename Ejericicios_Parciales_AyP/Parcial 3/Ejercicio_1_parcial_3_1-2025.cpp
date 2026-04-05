#include <iostream>
using namespace std;

const int N = 100;
const int M = 100;

class vehiculo {
public:
    char tipo;
    char color;
    int repeat_T = 0;
    int repeat_C = 0;
    vehiculo(char t, char c) : tipo(t), color(c) {}
};

vehiculo vehiculos_list[300]; // asuma que este arreglo ya está lleno con 300 vehículos (unicos)
vehiculo colors_list[100]; // asuma que este arreglo ya está lleno con 100 colores (unicos)
vehiculo Estacionamiento[N][M];

int Buscar_Tipo(vehiculo vehiculos_list[], char T){
    for (int i = 0; i < 300; i++){
        if (vehiculos_list[i].tipo == T){
            return vehiculos_list[i].repeat_T++;
        }
    }
    return 0;
}

void Buscar_Estacionamiento(vehiculo Estacionamiento[N][M], vehiculo vehiculos_list[]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            Buscar_Tipo(vehiculos_list, Estacionamiento[i][j].tipo);
        }
    }
}

char ColorMasFrecuente(vehiculo vehiculos_list[]){
    
    int max_count = 0;
    char colorFrecuente = '\0';

    for (int i = 0; i < 100; i++){
        if (vehiculos_list[i].repeat_C > max_count){
            max_count = vehiculos_list[i].repeat_C;
            colorFrecuente = vehiculos_list[i].color;
        }
    }

    return colorFrecuente;
}

void Buscar_Color(vehiculo Estacionamiento[N][M], vehiculo colors_list[]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            for (int k = 0; k < 100; k++){
                if (Estacionamiento[i][j].color == colors_list[k].color){
                    colors_list[k].repeat_C++;
                }
            }
        }
    }
}

void Aparcados(vehiculo vehiculos_list[], vehiculo Estacionamiento[N][M], vehiculo colors_list[]){
    Buscar_Estacionamiento(Estacionamiento, vehiculos_list);
    Buscar_Color(Estacionamiento, colors_list);
}

