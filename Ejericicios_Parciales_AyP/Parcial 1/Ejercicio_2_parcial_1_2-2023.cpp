/* Dado un entero que representa una fecha de la forma AAAAMMDD
   escriba un algoritmo en c++ que imprima el número de días 
   que faltan para que termine el año. Asuma que todos los meses
   tienen 30 días, excepto febrero que tiene 29 días en caso de
   bisiesto y 28 en caso contrario. Un año es bisiesto si es
   divisible por 4, pero no por 100 o si es divisible por 400.
*/
#include <iostream>
using namespace std;

int main(){

    int fecha, anio, mes, dia, dias_faltantes;
    int dias_totales, dias_transcurridos;
    bool es_bisiesto;

    cout << "Ingrese una fecha en formato AAAAMMDD: ";
    cin >> fecha;

    anio = fecha / 10000;
    mes = (fecha / 100) % 100;
    dia = fecha % 100;

    if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
        dias_totales = 359;
        es_bisiesto = true;
    } else {
        dias_totales = 358;
        es_bisiesto = false;
    }

    if (mes > 1) dias_transcurridos += 30;

    if (mes > 2) {

        if (es_bisiesto) dias_transcurridos += 29;
        else dias_transcurridos += 28;
    }

    if (mes > 3) dias_transcurridos += 30;
    if (mes > 4) dias_transcurridos += 30;
    if (mes > 5) dias_transcurridos += 30;
    if (mes > 6) dias_transcurridos += 30;
    if (mes > 7) dias_transcurridos += 30;
    if (mes > 8) dias_transcurridos += 30;
    if (mes > 9) dias_transcurridos += 30;
    if (mes > 10) dias_transcurridos += 30;
    if (mes > 11) dias_transcurridos += 30;
    if (mes > 12) dias_transcurridos += 30;

    dias_transcurridos += dia;

    dias_faltantes = dias_totales - dias_transcurridos;

    cout << "Faltan " << dias_faltantes << " dias para que termine el año." << endl;

    return 0;
}