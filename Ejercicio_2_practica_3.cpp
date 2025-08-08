/*Cree un algoritmo que tome como entrada la hora exacta (horas, minutos,
segundos y AM/PM) e indique el número de segundos transcurridos durante
ese día
*/
#include <iostream>
using namespace std;

int main() {

    int hora, min, seg;

    char am_pm;

    int hora24, segundosT;

    cout << "Ingrese la hora";
    cin >> hora;

    cout << "Ingrese los minutos";
    cin >> min;

    cout << "Ingrese los segundos";
    cin >> seg;

    cout << "Ingrese 'A' para AM o 'P' para PM: ";
    cin >> am_pm;

    if (am_pm == 'P' || am_pm == 'p') {

        if (hora != 12) {

            hora24 = hora + 12;

        } else {

            hora24 = 12;
        }

    } else { 

        if (hora == 12) {

            hora24 = 0;

        } else {

            hora24 = hora;
        }
    }

    segundosT = (hora24 * 3600) + (min * 60) + seg;

    cout << "Los segundos transcurridos son: " << segundosT << endl;

    return 0;
}
