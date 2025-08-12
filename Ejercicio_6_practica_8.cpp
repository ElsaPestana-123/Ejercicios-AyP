/*Se quiere definir una clase que permita controlar un sintonizador digital
de emisoras FM; concretamente, lo que se desea es dotar al controlador
de una interfaz que permita subir (up) o bajar (down) la frecuencia (en
saltos de 0.5 MHz) y mostrar la frecuencia sintonizada en un momento
dado (display). Supondremos que el rango de frecuencias a manejar oscila
entre los 80 Mhz y los 108 MHz y que al inicio, el controlador sintoniza a
80 MHz. Si durante una operación de subida o bajada se sobrepasa uno de
los dos límites, la frecuencia sintonizada debe pasar a ser la del extremo
contrario.
*/
#include <iostream>
using namespace std;

class Controlador{
    private:
        float frecuencia;
    public:
        Controlador(float frecuencia){
            this->frecuencia = frecuencia;
        } 
         
        int SubirFrecuencia(){
            if(frecuencia >= 80.0 && frecuencia < 108.0){
                frecuencia += 0.5;
                return 1;
            } else if (frecuencia == 108.0){
                frecuencia = 80.0;
                return 1;
            }
            return 0;
        }  

        int BajarFrecuencia(){
            if(frecuencia > 80.0 && frecuencia <= 108.0){
                frecuencia -= 0.5;
                return 1;
            } else if (frecuencia == 80.0){
                frecuencia = 108.0;
                return 1;
            }
            return 0;
        }

        void MostrarFrecuencia(){
            cout << "Frecuencia: " << frecuencia << endl;
        }
};

int main(){
    Controlador controlador(80.0);
    controlador.MostrarFrecuencia();
    controlador.SubirFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.SubirFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.SubirFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.BajarFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.BajarFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.BajarFrecuencia();
    controlador.MostrarFrecuencia();
    controlador.BajarFrecuencia();
    controlador.MostrarFrecuencia();

    return 0;
}