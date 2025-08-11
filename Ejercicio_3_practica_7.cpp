/*Haga un algoritmo que lea todos los caracteres de un archivo llamado
letras.txt y cuente la frecuencia de cada letra del archivo
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream archivo("letras.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    int frecuencia[256] = {0};
    char caracter;

    while (archivo.get(caracter)) {
        frecuencia[(unsigned char)caracter]++;
    }

    for (int i = 0; i < 256; i++) {
        if (frecuencia[i] > 0) {
            cout << "El caracter '" << char(i) << "' se repite " << frecuencia[i] << " veces" << endl;
        }
    }

    archivo.close();
    return 0;
}