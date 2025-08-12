/*Para cada una de las siguientes clases, realice un diagrama de clases
estableciendo las relaciones existentes entre ellas, de manera tal que el
diagrama sea coherente:
• Motor
• Avión
• Avión de Carga
• Avión de Pasajeros
• Piloto
• Avión Comercial
• Reserva
• Vuelo
• Compañía Aérea
• Avión Militar
*/
#include <iostream>
using namespace std;

#define MAX_MOTORES 4
#define MAX_VUELOS 10
#define MAX_RESERVAS 100
#define MAX_AVIONES 50

class Motor {
    public:
    string modelo;
    Motor(){}
};

class Avion {
    protected:

    string matricula;
    Motor motores[MAX_MOTORES];
    int numMotores;

    public:

    Avion() : numMotores(0) {}
    Avion(string mat) : matricula(mat), numMotores(0) {}

    void agregarMotor(Motor m) {
        if (numMotores < MAX_MOTORES) {
            motores[numMotores++] = m;
        }
    }

    virtual void mostrarInfo() {
        cout << "Avión matrícula: " << matricula 
             << " con " << numMotores << " motores." << endl;
    }
};

class AvionCarga : public Avion {
public:
    AvionCarga(string mat) : Avion(mat) {}
};

class AvionPasajeros : public Avion {
public:
    AvionPasajeros(string mat) : Avion(mat) {}
};

class AvionComercial : public AvionPasajeros {
public:
    AvionComercial(string mat) : AvionPasajeros(mat) {}
};

class AvionMilitar : public Avion {
public:
    AvionMilitar(string mat) : Avion(mat) {}
};

class Piloto {
public:
    string nombre;
    Piloto() {}
    Piloto(string n) : nombre(n) {}
};

class Vuelo {
public:
    string codigo;
    Avion avion;
    Piloto piloto;
    Vuelo() {}
    Vuelo(string c, Avion a, Piloto p) : codigo(c), avion(a), piloto(p) {}
    void mostrarVuelo() {
        cout << "Vuelo " << codigo << " con piloto " << piloto.nombre << endl;
        avion.mostrarInfo();
    }
};

class Reserva {
public:
    string nombrePasajero;
    Vuelo vuelo;
    Reserva() {}
    Reserva(string n, Vuelo v) : nombrePasajero(n), vuelo(v) {}
};

class CompaniaAerea {
public:
    string nombre;
    Avion aviones[MAX_AVIONES];
    int numAviones;
    Vuelo vuelos[MAX_VUELOS];
    int numVuelos;
    CompaniaAerea() : numAviones(0), numVuelos(0) {}
    CompaniaAerea(string n) : nombre(n), numAviones(0), numVuelos(0) {}
    void agregarAvion(Avion a) {
        if (numAviones < MAX_AVIONES) {
            aviones[numAviones++] = a;
        }
    }
    void agregarVuelo(Vuelo v) {
        if (numVuelos < MAX_VUELOS) {
            vuelos[numVuelos++] = v;
        }
    }
};