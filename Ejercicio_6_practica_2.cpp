/*Supongamos un reloj analógico (de agujas). Dada lo hora exacta (horas y
minutos), escriba un algoritmo que calcule el ángulo entre ambas agujas.
Por ejemplo, a las 3:00 el ángulo será 90 grados. A las 3:15 el ángulo será
7,5 grados.
*/
#include <iostream>
#include <cmath> // Solo para abs()
using namespace std;

int main() {
    
    int hora, min;
    float angulo_hora, angulo_min, angulo_total;

    cout << "Ingrese la hora";
    cin >> hora;

    cout << "Ingrese los minutos";
    cin >> min;

    // Calcular ángulo de la hora (0.5° por minuto)
    angulo_hora = hora * 30.0 + min * 0.5;

    // Calcular ángulo de los minutos (6° por minuto)
    angulo_min = min * 6.0;

    angulo_total = abs(angulo_hora - angulo_min);

    cout << "El angulo entre las manecillas es: " << angulo_total << " grados" << endl;

    return 0;
}