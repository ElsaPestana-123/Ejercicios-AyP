/*Una cátedra tiene como equipo docente un responsable y un conjunto
de entre 1 y 4 auxiliares. Para aprobar la materia, cada alumno debe
superar las 3 instancias de evaluación previstas: 1 parcial (que puede ser
recuperado), 1 trabajo práctico y examen final. La cátedra lleva un registro
de fecha y resultado de cada una de las evaluaciones realizadas por los
alumnos. Además de estos dos datos, para los trabajos prácticos se guarda
información respecto al retraso en la fecha de entrega (si lo hubiera) y para
los exámenes finales en qué mesa y en qué llamados el alumno rindió el
examen.
*/
#include <iostream>
#include <string>
using namespace std;

class Evaluacion {
protected:

    string fecha;
    string resultado; 

public:

    Evaluacion(string fecha, string resultado) {
        this->fecha = fecha;
        this->resultado = resultado;
    }

    virtual void mostrarInfo() {
        cout << "Fecha: " << fecha << " | Resultado: " << resultado << endl;
    }
};

class Parcial : public Evaluacion {

    bool recuperado;

public:

    Parcial(string fecha, string resultado, bool recuperado)
        : Evaluacion(fecha, resultado) {
        this->recuperado = recuperado;
    }

    void mostrarInfo() override {
        cout << "[Parcial] ";
        Evaluacion::mostrarInfo();
        cout << "Recuperado: " << (recuperado ? "Sí" : "No") << endl;
    }
};

class TrabajoPractico : public Evaluacion {
    bool retrasoEntrega;

public:

    TrabajoPractico(string fecha, string resultado, bool retraso)
        : Evaluacion(fecha, resultado) {
        this->retrasoEntrega = retraso;
    }

    void mostrarInfo() override {
        cout << "[Trabajo Práctico] ";
        Evaluacion::mostrarInfo();
        cout << "Retraso en entrega: " << (retrasoEntrega ? "Sí" : "No") << endl;
    }
};

class ExamenFinal : public Evaluacion {

    string mesa;
    int llamado;

public:

    ExamenFinal(string fecha, string resultado, string mesa, int llamado)
        : Evaluacion(fecha, resultado) {
        this->mesa = mesa;
        this->llamado = llamado;
    }

    void mostrarInfo() override {
        cout << "[Examen Final] ";
        Evaluacion::mostrarInfo();
        cout << "Mesa: " << mesa << " | Llamado: " << llamado << endl;
    }
};

class Alumno {

    string nombre;
    Parcial parcial;
    TrabajoPractico tp;
    ExamenFinal final;

public:

    Alumno(string nombre, Parcial p, TrabajoPractico t, ExamenFinal f)
        : nombre(nombre), parcial(p), tp(t), final(f) {

    }

    void mostrarEvaluaciones() {
        cout << "\nAlumno: " << nombre << endl;
        parcial.mostrarInfo();
        tp.mostrarInfo();
        final.mostrarInfo();
    }

};

class Catedra {

    string responsable;
    string auxiliares[4];
    int cantidadAux;

public:

    Catedra(string responsable, string aux[], int cant) {
        this->responsable = responsable;
        cantidadAux = cant;

        for (int i = 0; i < cant; i++) {
            auxiliares[i] = aux[i];
        }
    }

    void mostrarEquipo() {

        cout << "\nResponsable: " << responsable << endl;
        cout << "Auxiliares:\n";
        for (int i = 0; i < cantidadAux; i++) {
            cout << " - " << auxiliares[i] << endl;
        }
    }
};