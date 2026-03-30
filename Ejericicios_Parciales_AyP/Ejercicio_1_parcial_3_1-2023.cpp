/* Un almacén de repuestos de vehículos se representa como una matriz
   de NxM que guarda objetos de tipo Repuesto. Para cada Repuesto se
   se dispone de su tipo (máximo 3000) y su peso neto en Kgs (flotante)
   Utilizando Programación Orientada a Objetos, escriba una función llamada
   "Inventario" que tome como parámetro una matriz de repuestos y escriba
   en un archivo llamado "salida.txt": a) el peso neto promedio de cada
   tipo; b) los cinco (5) repuestos más pesados del almacén. 
*/   
#include <iostream>
#include <fstream>
using namespace std;

class Respuestos{
    public:
    char tipo;
    float peso;
    int repetidos = 0;
    float suma_peso = 0.0;
    Respuestos(){}
};

Respuestos respuestos_list[3000]; // asuma que se inicializado 
Respuestos almacen[60][50]; 

void Buscar_Tipo_Sumar_Peso(Respuestos respuestos_list[], char T){
    for (int i = 0; i < 3000; i++){
        if (respuestos_list[i].tipo == T){
            respuestos_list[i].repetidos++;
            respuestos_list[i].suma_peso += respuestos_list[i].peso;
        }
    }
}

void Buscar_Almacen(Respuestos almacen[60][50], Respuestos respuestos_list[]){
    for (int i = 0; i < 60; i++){
        for (int j = 0; j < 50; j++){
            Buscar_Tipo_Sumar_Peso(respuestos_list, almacen[i][j].tipo);
        }
    }
}

void mostrar_top_5_pesados(Respuestos almacen[60][50]) {
    int tam = 60 * 50;
    float array_pesos[tam];
    float top_pesos[5];
    int k = 0;

    for (int i = 0; i < 60; i++) {
        for (int j = 0; j < 50; j++) {
            array_pesos[k] = almacen[i][j].peso;
            k++;
        }
    }

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (array_pesos[j] < array_pesos[j + 1]) {
                swap(array_pesos[j], array_pesos[j + 1]);
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        top_pesos[i] = array_pesos[i];
        cout << "Top " << (i + 1) << ": " << top_pesos[i] << endl;
    }

}


void Control(Respuestos respuestos_list[], Respuestos almacen[60][50]){

    ofstream archivo("respuestos.txt");
    if (!archivo) {
        cerr << "Error al abrir el archivo." << endl;
        return;
    }

    float promedio_peso = 0.0;
    for (int i = 0; i < 3000; i++){
        if (respuestos_list[i].repetidos > 0) {
            promedio_peso = respuestos_list[i].suma_peso / respuestos_list[i].repetidos;
            archivo << respuestos_list[i].tipo << " " << respuestos_list[i].repetidos << " " << promedio_peso << endl;
        }
    }

    archivo << "Top 5 tipos de repuesto más pesados:" << endl;
    mostrar_top_5_pesados(almacen);

    archivo.close();
}