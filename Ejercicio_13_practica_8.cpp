/*Un centro comercial desea administrar toda la información de sus locales.
Cada local tiene: nombre, RIF, horario, dueño, encargado, tamaño (m2) y
una lista de empleados. Los locales que pertenecen al centro comercial se
clasifican en:
• Tiendas de ropas, pudiendo ser estas tiendas para mujeres, hombres
o mixtas.
• Locales de comida, estos pueden ser restaurantes o de comida rápida.
• Librerías.
• Una Farmacia. Determinar:
• La cantidad de librerías del centro comercial.
• La cantidad de empleados, por sexo, de la farmacia.
• La cantidad de metros cuadrados que ocupan los locales del centro
comercial.
*/

#include <iostream>
#include <string>
using namespace std;

class Local {
private:
    string nombre;
    string RIF;
    string horario;
    string dueno;
    string encargado;
    float tamano; 
    int empleadosHombres;
    int empleadosMujeres;
    string tipo; 

public:
    Local() : nombre(""), RIF(""), horario(""), dueno(""), encargado(""),
    tamano(0), empleadosHombres(0), empleadosMujeres(0), tipo(""){
    }

    Local(string nom, string rif, string hor, string due, string enc, float tam, int hombres, int mujeres, string t)

        : nombre(nom), RIF(rif), horario(hor), dueno(due), encargado(enc),
        tamano(tam), empleadosHombres(hombres), empleadosMujeres(mujeres), tipo(t) {

    }

};    