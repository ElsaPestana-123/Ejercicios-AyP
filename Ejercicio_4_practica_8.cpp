/*Cuando se visita una ferretería, es común hallar todo tipo de materiales y
herramientas. Todas las herramientas poseen un conjunto de características
comunes, que son de interés no solo para el dueño del negocio sino también
para los clientes como por ejemplo: el nombre, una pequeña descripción, el
costo, algún código de fábrica asociado, el nombre del fabricante, etc. En
algunas ferreterías, las herramientas las clasifican en tres grandes grupos,
manuales, eléctricas y motoras. Dependiendo del uso futuro por parte
de los clientes, dichos tipos de herramientas se clasifican a su vez en: de
albañilería, de plomería, o de electricidad. Las herramientas eléctricas tienen
como característica principal el voltaje con el cual trabajan, incluso existen
herramientas eléctricas que no solo trabajan con la corriente proveniente del
tendido eléctrico sino que pueden operar en base a la energía almacenada en
baterías. Las herramientas motoras funcionan a base de un motor que posee
cierta potencia, poseen además un pequeño tanque para el combustible y
hay algunas que hasta necesita aceite. Con la avanzada tecnología actual, se
han desarrollado herramientas que pueden trabajar a base de electricidad
y a base de energía motora. Y ya se encuentran disponibles en mucha
ferretería a pesar de su elevado costo.
*/
#include <iostream>
using namespace std;

class Herramienta {
    protected:
        string nombre;
        string descripcion;
        float costo;
        string codigoFabrica;
        string fabricante;

    public:
        Herramienta(string nombre, string descripcion, float costo,
                    string codigoFabrica, string fabricante) {
            this->nombre = nombre;
            this->descripcion = descripcion;
            this->costo = costo;
            this->codigoFabrica = codigoFabrica;
            this->fabricante = fabricante;
        }

        virtual void mostrarInformacion() {
            cout << "Nombre: " << nombre << endl;
            cout << "Descripción: " << descripcion << endl;
            cout << "Costo: " << costo << endl;
            cout << "Código de Fábrica: " << codigoFabrica << endl;
            cout << "Fabricante: " << fabricante << endl;
        }
};

class HerramientaManual : public Herramienta {
    public:
        HerramientaManual(string nombre, string descripcion, float costo, string codigoFabrica, string fabricante) 

            : Herramienta(nombre, descripcion, costo, codigoFabrica, fabricante) {}

        void mostrarInformacion() override {
            
            cout << "Herramienta Manual:" << endl;
            Herramienta::mostrarInformacion();
        }
};

class HerramientaElectrica : public Herramienta {
    private:

        float voltaje;
        bool esInalambrica;

    public:

        HerramientaElectrica(string nombre, string descripcion, float costo, string codigoFabrica, string fabricante,float voltaje, bool esInalambrica)

            : Herramienta(nombre, descripcion, costo, codigoFabrica, fabricante) {

            this->voltaje = voltaje;
            this->esInalambrica = esInalambrica;
        }

        void mostrarInformacion() override {

            cout << "Herramienta Eléctrica:" << endl;
            Herramienta::mostrarInformacion();

            cout << "Voltaje: " << voltaje << "V" << endl;

            cout << "¿Es inalámbrica? " << endl;
            if (esInalambrica) {
                cout << "Sí" << endl;
            } else {
                cout << "No" << endl;
            }
        }
};

class HerramientaMotora : public Herramienta {
    private:

        float potencia;
        float capacidadTanque;

    public:
        HerramientaMotora(string nombre, string descripcion, float costo, string codigoFabrica, string fabricante,float potencia, float capacidadTanque)

            : Herramienta(nombre, descripcion, costo, codigoFabrica, fabricante) {

            this->potencia = potencia;
            this->capacidadTanque = capacidadTanque;
        }

        void mostrarInformacion() override {

            cout << "Herramienta Motora:" << endl;
            Herramienta::mostrarInformacion(); 

            cout << "Potencia: " << potencia << "HP" << endl;
            cout << "Capacidad del Tanque: " << capacidadTanque << "L" << endl;
        }
};

class HerramientaElectricaMotora : public HerramientaElectrica, public HerramientaMotora {

    public:
        HerramientaElectricaMotora(string nombre, string descripcion, float costo, string codigoFabrica, string fabricante,float voltaje, bool esInalambrica, float potencia, float capacidadTanque)

            : HerramientaElectrica(nombre, descripcion, costo, codigoFabrica, fabricante, voltaje, esInalambrica),
              HerramientaMotora(nombre, descripcion, costo, codigoFabrica, fabricante, potencia, capacidadTanque) {}

        void mostrarInformacion() override {

            HerramientaElectrica::mostrarInformacion();

            HerramientaMotora::mostrarInformacion();
        }
};
