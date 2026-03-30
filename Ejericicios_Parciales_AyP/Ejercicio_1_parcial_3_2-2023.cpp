/* Una sección rectangular de terreno se representa como una
   matriz de NxM que guarda objetos de tipo Hortaliza. Para cada
   hortaliza se dispone de su tipo (máximo 2000 rubros) y su volumen
   en centimetros cúbicos (flotante). Como parte del control de calidad
   una hortaliza no se comercializa si su volumen está por debajo de 
   10 cm3. Utilizando Programación Orientada a Objetos, escriba una función
   llamada "Control" que tome como parámetro una matriz de hortalizas 
   y escriba en un archivo llamado "control.txt": a) el número de
   hortalizas de cada tipo; b) el número de hortalizas que podrán 
   ser comercializadas.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

# define N 100
# define M 100

class Hortaliza {
public:
    char tipo;
    float volumen;
    int repeat_T = 0;
    Hortaliza(char t, float v) : tipo(t), volumen(v) {}
    bool is_comercial(){
        if (volumen >= 10.0){
            return true;
        }
        return false;
    }
};  

Hortaliza hortalizas_list[2000]; // asuma que está lleno
Hortaliza Terreno[N][M];

int Buscar_Tipo(Hortaliza hortalizas_list[], char T){
    for (int i = 0; i < 2000; i++){
        if (hortalizas_list[i].tipo == T){
            return hortalizas_list[i].repeat_T++;
        }
    }
    return 0;
}

void Buscar_Terreno(Hortaliza Terreno[N][M], Hortaliza hortalizas_list[]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            Buscar_Tipo(hortalizas_list, Terreno[i][j].tipo);
        }
    }
}

int Comercio(Hortaliza Terreno[N][M]){
    int total_comercial = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (Terreno[i][j].is_comercial()){
                total_comercial++;
            }
        }
    }
    return total_comercial;
}
       

void Control(Hortaliza hortalizas_list[], Hortaliza Terreno[N][M]){

    ofstream archivo("salida.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return;
    }

    for (int i = 0; i < 2000; i++){
        if (hortalizas_list[i].repeat_T > 0){
            archivo << hortalizas_list[i].tipo << " " << hortalizas_list[i].repeat_T << endl;
        }
    }

    archivo << "Total de hortalizas comerciales: " << Comercio(Terreno) << endl;

    archivo.close();
}