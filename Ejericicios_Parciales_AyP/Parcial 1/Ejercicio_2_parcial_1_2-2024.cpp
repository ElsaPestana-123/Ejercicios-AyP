/* Mark y Alan trabajan de forma remota desde diferentes ubicaciones alrededor del mundo.
   y tienen una reunión programada en Google Meets a las 15:00 UTC. Realize un algoritmo en c++
   que, dada la posición geográfica (longitud y latitud) de cada uno, determine su zona horaria
   y calcule la hora local para ambos. Considere que la Tierra está dividida en 24 husos horarios,
   que cada uno añade o resta horas dependiendo de la longitud positiva (Este) o negativa (Oeste).
   y que la hora base (UTC) corresponde al huso horario del Meridiano de Greenwich (longitud = 0).
   Por ejemplo, si el huso horario es -4, la hora local de las 12:00 UTC sería 8:00. Además, valide que
   las coordenadas de latitud estén entre -90 y 90 grados, y las de longitud entre -180 y 180 grados.
*/
#include <iostream>
using namespace std;

int main(){

    int longitud_Alan, longitud_Mark;
    int latitud_Alan, latitud_Mark;

    cout << "Ingrese la longitud de Alan: ";
    cin >> longitud_Alan;
    cout << "Ingrese la latitud de Alan: ";
    cin >> latitud_Alan;

    cout << "Ingrese la longitud de Mark: ";
    cin >> longitud_Mark;
    cout << "Ingrese la latitud de Mark: ";
    cin >> latitud_Mark;

    if (latitud_Alan < -90 || latitud_Alan > 90 || latitud_Mark < -90 || latitud_Mark > 90){
        cout << "Error: La latitud debe estar entre -90 y 90 grados." << endl;
        return 0;
    }
    if (longitud_Alan < -180 || longitud_Alan > 180 || longitud_Mark < -180 || longitud_Mark > 180){
        cout << "Error: La longitud debe estar entre -180 y 180 grados." << endl;
        return 0;
    }

    int huso_horario_Alan = longitud_Alan / 15;
    int huso_horario_Mark = longitud_Mark / 15;
    int hora_local_Alan, hora_local_Mark;

    if (longitud_Alan >= 0){

        hora_local_Alan = 15 + huso_horario_Alan;

    } else {

        hora_local_Alan = abs(huso_horario_Alan - 15);

    }

    if (longitud_Mark >= 0){

        hora_local_Mark = 15 + huso_horario_Mark;

    } else {

        hora_local_Mark = abs(huso_horario_Mark - 15);
    }

    cout << "El huso horario de Alan es: " << (huso_horario_Alan >= 0 ? "+" : "") << huso_horario_Alan << endl;
    cout << "El huso horario de Mark es: " << (huso_horario_Mark >= 0 ? "+" : "") << huso_horario_Mark << endl;

    cout << "La hora local de Alan es: " << hora_local_Alan << ":00" << endl;
    cout << "La hora local de Mark es: " << hora_local_Mark << ":00" << endl;

    return 0;
}