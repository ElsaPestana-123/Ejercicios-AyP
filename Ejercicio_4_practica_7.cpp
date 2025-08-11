/*Dado un archivo personas.txt con información sobre personas, se desea
que Usted haga un algoritmo que lea el archivo y lo cargue en un arreglo
de registros. Luego, debe almacenar en otro archivo únicamente las cédulas
y edades de las personas que tengan más de 18 años. La primera línea del
archivo personas.txt contiene el número N de personas almacenadas en
el archivo. Por cada persona habrá una línea con su cédula, luego una línea
con su nombre completo, luego una línea con su edad, y finalmente una
línea con su sexo. A lo sumo habrán 100 personas en el archivo. El registro
para almacenar la información de una persona es el siguiente:

struct Persona{
int cedula;
string nombre;
int edad;
char sexo;
};

*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX = 100;

struct Persona {
    int cedula;
    string nombre;
    int edad;
    char sexo;
};


int main() {
    ifstream archivoEntrada("personas.txt");
    ofstream archivoSalida("registro.txt", ios::out);

    if(!archivoEntrada) {
        cout << "No se pudo abrir el archivo de entrada" << endl;
        return 1;
    }

    int n;
    archivoEntrada >> n;
    archivoEntrada.ignore();

    Persona personas[MAX];

    for(int i = 0; i < n; i++) {
        archivoEntrada >> personas[i].cedula;
        archivoEntrada.ignore();
        getline(archivoEntrada, personas[i].nombre);
        archivoEntrada >> personas[i].edad;
        archivoEntrada >> personas[i].sexo;
        archivoEntrada.ignore();
    }

    for(int i = 0; i < n; i++){
        if(personas[i].edad > 18){
            archivoSalida << personas[i].cedula;
            archivoSalida << " ";
            archivoSalida << personas[i].edad;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}