/* Dados 2 enteros de máximo 8 dígitos que representan fechas de la forma DDMMAAAA
   (por ejemplo, el número 1010666 reprentaría el 1er de Enero del Año 666), escriba 
   un algoritmo en C++ que determine, que si la diferencia en días entre ambas fechas
   es par entonces se debe imprimir el día de la semana de la fecha menor y en caso
   contrario que se imprima el de la fecha mayor. Ejemplo 1: para los enteros 
   "5010001 1010001", la salida será "Lunes". Ejemplo 2: para los enteros
   "2010000 5010000" la salida será "Viernes". Asuma que Febrero siempre tiene 28 días
   y que el 1er de Enero del Año 1 es Lunes.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int fecha1, fecha2;

    cout << "Ingrese la primera fecha (formato DDMMAAAA): ";
    cin >> fecha1;

    cout << "Ingrese la segunda fecha (formato DDMMAAAA): ";
    cin >> fecha2;

    int dia1 = fecha1 / 1000000;
    int mes1 = (fecha1 / 10000) % 100;
    int anio1 = fecha1 % 10000;

    int dia2 = fecha2 / 1000000;
    int mes2 = (fecha2 / 10000) % 100;
    int anio2 = fecha2 % 10000;

    int totalDias1 = (anio1 -1) * 365;
    int totalDias2 = (anio2 -1) * 365;

    if (mes1 > 1) totalDias1 += 31;
    if (mes1 > 2) totalDias1 += 28;
    if (mes1 > 3) totalDias1 += 31;
    if (mes1 > 4) totalDias1 += 30;
    if (mes1 > 5) totalDias1 += 31;
    if (mes1 > 6) totalDias1 += 30;
    if (mes1 > 7) totalDias1 += 31;
    if (mes1 > 8) totalDias1 += 31;
    if (mes1 > 9) totalDias1 += 30;
    if (mes1 > 10) totalDias1 += 31;
    if (mes1 > 11) totalDias1 += 30;
    totalDias1 += dia1;

    if (mes2 > 1) totalDias2 += 31;
    if (mes2 > 2) totalDias2 += 28;
    if (mes2 > 3) totalDias2 += 31;
    if (mes2 > 4) totalDias2 += 30;
    if (mes2 > 5) totalDias2 += 31;
    if (mes2 > 6) totalDias2 += 30;
    if (mes2 > 7) totalDias2 += 31;
    if (mes2 > 8) totalDias2 += 31;
    if (mes2 > 9) totalDias2 += 30;
    if (mes2 > 10) totalDias2 += 31;
    if (mes2 > 11) totalDias2 += 30;
    totalDias2 += dia2;

    int diferencia = abs(totalDias1 - totalDias2);

    int fecha_final;

    if (diferencia % 2 == 0) {
        if (totalDias1 < totalDias2) {
            fecha_final = totalDias1;
        } else {
            fecha_final = totalDias2;

        }
    } else {
        if (totalDias1 > totalDias2) {
            fecha_final = totalDias1;
        } else {
            fecha_final = totalDias2;
        }
    }

    int dia_semana = fecha_final % 7;
    switch (dia_semana)
    {
    case 0:
        cout << "Domingo" << endl;
        break;
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Miercoles" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        break;
    case 6:
        cout << "Sabado" << endl;
        break;
    
    default:
        break;
    }

    return 0;

}

 
    
