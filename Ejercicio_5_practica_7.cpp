/*Un consultorio médico realiza el diagnóstico de las posibles enfermedades
que sufren sus pacientes confrontando la información de los síntomas que
presenta el paciente con al información de los síntomas que caracterizan las
enfermedades por ellos registradas, Así, a un paciente se le diagnostica una
enfermedad si sus síntomas coinciden exactamente con los registrados para
esa enfermedad. Considerando que dicho consultorio tiene caracterizadas a
M enfermedades con a lo sumo N síntomas cada una, elabore un algoritmo
que dada una muestra de K pacientes (nombre, sexo, edad y síntomas)
indique:
• La enfermedad más frecuente.
• El porcentaje de cada enfermedad por sexo.
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Enfermedad{
    string nombre;
    string sintomas[100];
    int numSintomas;
};

struct Paciente{
    string nombre;
    char sexo;
    int edad;
    string sintomas[100];
    int numSintomas;
};

void RegistrarEnfermedades(Enfermedad enfermedades[], int &numEnfermedades) {
    cout << "Ingrese el número de enfermedades: ";
    cin >> numEnfermedades;

    for (int i = 0; i < numEnfermedades; i++) {
        cout << "Ingrese el nombre de la enfermedad: ";
        cin >> enfermedades[i].nombre;

        cout << "Ingrese el número de síntomas: ";
        cin >> enfermedades[i].numSintomas;

        for (int j = 0; j < enfermedades[i].numSintomas; j++) {
            cout << "Ingrese el síntoma " << j + 1 << ": ";
            cin >> enfermedades[i].sintomas[j];
        }
    }
}

bool sintomasIguales(string sintomas1[], int numSintomas1, string sintomas2[], int numSintomas2) {

    if (numSintomas1 != numSintomas2) {
        return false;
    }

   bool usados[100] = {false};

    for (int i = 0; i < numSintomas1; i++) {
        bool encontrado = false;
        for (int j = 0; j < numSintomas2; j++) {
            if (!usados[j] && sintomas1[i] == sintomas2[j]) {
                usados[j] = true;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) return false;
    }

    return true;
}

void leerPacientes(string nombreArchivo, Paciente pacientes[], int &numPacientes){

    ifstream archivo(nombreArchivo);

    if(!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    numPacientes = 0;
    while (archivo >> pacientes[numPacientes].nombre >> pacientes[numPacientes].sexo >> pacientes[numPacientes].edad) {
        pacientes[numPacientes].numSintomas = 0;
        string sintoma;
        while (archivo >> sintoma && sintoma != "FIN") {
            pacientes[numPacientes].sintomas[pacientes[numPacientes].numSintomas++] = sintoma;
        }
        numPacientes++;
    }

    archivo.close();
}

void enfermedadFrecuente(Paciente pacientes[], int numPacientes, Enfermedad enfermedades[], int numEnfermedades, int k, int m){

    Enfermedad enfermedades[m];
    Paciente pacientes[k];

    int conteoEnfermedades[m] = {0};

    for (int i = 0; i < numPacientes; i++){
        for (int j = 0; j < numEnfermedades; j++){
            if (sintomasIguales(pacientes[i].sintomas, pacientes[i].numSintomas, enfermedades[j].sintomas, enfermedades[j].numSintomas)){
                conteoEnfermedades[j]++;
            }
        }
    }

    int maxValor = 0;
    int maxIndice = 0;
    
    for (int i = 0; i < m; i++) {
        if (conteoEnfermedades[i] > maxValor) {
           maxValor = conteoEnfermedades[i];
           maxIndice = i;
        }
    }

    cout << "La enfermedad más frecuente es: " << enfermedades[maxIndice].nombre << endl;
    cout << "Número de pacientes con esta enfermedad: " << conteoEnfermedades[maxIndice] << endl;

}

void enfermedadPorSexo (Paciente pacientes[], int numPacientes, Enfermedad enfermedades[], int numEnfermedades, int k, int m){
    Enfermedad enfermedades[m];
    Paciente pacientes[k];

    int conteoEnfermedadesM[m] = {0};
    int conteoEnfermedadesF[m] = {0};

    for (int i = 0; i < numPacientes; i++){
        for (int j = 0; j < numEnfermedades; j++){
            if (sintomasIguales(pacientes[i].sintomas, pacientes[i].numSintomas, enfermedades[j].sintomas, enfermedades[j].numSintomas)){
                if (pacientes[i].sexo == 'M') {
                    conteoEnfermedadesM[j]++;
                } else {
                    conteoEnfermedadesF[j]++;
                }
            }
        }
    }

    for (int i = 0; i < m; i++){
        int total = conteoEnfermedadesM[i] + conteoEnfermedadesF[i];
        if (total > 0) {
            double porcentajeM = (conteoEnfermedadesM[i] * 100.0) / total;
            double porcentajeF = (conteoEnfermedadesF[i] * 100.0) / total;
            cout << "Enfermedad: " << enfermedades[i].nombre << endl;
            cout << "Porcentaje de hombres: " << porcentajeM << "%" << endl;
            cout << "Porcentaje de mujeres: " << porcentajeF << "%" << endl;
        }
    }

}

