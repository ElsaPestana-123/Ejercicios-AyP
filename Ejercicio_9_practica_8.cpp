/*Defina una clase Monedero que permita gestionar la cantidad de dinero
que una persona dispone en un momento dado. La clase deberá tener un
constructor que permitirá crear un monedero con una cantidad de dinero
inicial y deberá definir un método para meter dinero en el monedero, otro
para sacarlo y finalmente, otro para consultar el disponible; solo podrá
conocerse la cantidad de dinero del monedero a través de este último
método. Por supuesto, no se podrá sacar más dinero del que haya en un
momento dado en el monedero.
*/
#include <iostream>
#include <string>
using namespace std;

class Monedero{
    private:
        float dinero;
    public:
        Monedero(float dinero){
            this -> dinero = dinero;
        }  

        void MeterDinero(float dineroSolicitado){
            this -> dinero += dineroSolicitado;
        } 

        void SacarDinero(float dineroSolicitado){
            if(dineroSolicitado > this -> dinero){
                cout << "No tienes suficiente dinero" << endl;
    
            } else {
                this -> dinero -= dineroSolicitado;
            }
        }

        float MostrarDinero(){
            return dinero;
        }

};

int main(){
    Monedero monedero(100);
    monedero.MeterDinero(50);
    monedero.SacarDinero(200);
    cout << monedero.MostrarDinero() << endl;
    return 0;
}