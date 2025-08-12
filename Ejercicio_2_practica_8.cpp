/*Elabore un diagrama de clases que refleje los diferentes objetos que interactúan
en este salón, considera en tu respuesta:
(a) Incluir en el diagrama por lo menos 5 clases diferentes.
(b) Para cada clase debes indicar al menos 3 atributos y 2 métodos,
utiliza métodos con nombres significativos, con nombres como get()
y set().
(c) Debes incluir los cuatro tipos de relación vistos: Herencia, Asociación,
Composición y Uso.
*/
#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    string dni;

public:

    Persona(string nombre, int edad, string dni) {
        this->nombre = nombre;
        this->edad = edad;
        this->dni = dni;
    }

    void getDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", DNI: " << dni << endl;
    }

    void setDatos(string nombre, int edad, string dni) {
        this->nombre = nombre;
        this->edad = edad;
        this->dni = dni;
    }
};

class Profesor : public Persona {

private:

    string especialidad;
    float salario;
    int aniosExperiencia;

public:

    Profesor(string nombre, int edad, string dni,
             string especialidad, float salario, int aniosExperiencia)
        : Persona(nombre, edad, dni) {
        this->especialidad = especialidad;
        this->salario = salario;
        this->aniosExperiencia = aniosExperiencia;
    }

    void explicarTema() {
        cout << nombre << " está explicando un tema de " << especialidad << endl;
    }

    void calificar() {
        cout << nombre << " está calificando exámenes." << endl;
    }
};

class Estudiante : public Persona {

private:

    string matricula;
    float promedio;
    int grado;

public:

    Estudiante(string nombre, int edad, string dni,
               string matricula, float promedio, int grado)
        : Persona(nombre, edad, dni) {
        this->matricula = matricula;
        this->promedio = promedio;
        this->grado = grado;
    }

    void estudiar() {
        cout << nombre << " está estudiando." << endl;
    }

    void entregarTarea() {
        cout << nombre << " ha entregado la tarea." << endl;
    }
};

class Mobiliario {
private:

    string tipo;
    string material;
    int cantidad;

public:

    Mobiliario(string tipo, string material, int cantidad) {
        this->tipo = tipo;
        this->material = material;
        this->cantidad = cantidad;
    }

    void moverMueble() {
        cout << "Moviendo " << cantidad << " muebles de tipo " << tipo << endl;
    }

    void reparar() {
        cout << "Reparando mobiliario de tipo " << tipo << endl;
    }
};

class Salon {

private:

    int numero;
    int capacidad;
    string ubicacion;
    Mobiliario mobiliario; 
    Profesor profesor;     

public:
    Salon(int numero, int capacidad, string ubicacion,
          Mobiliario mobiliario, Profesor profesor)
        : numero(numero), capacidad(capacidad), ubicacion(ubicacion),
          mobiliario(mobiliario), profesor(profesor) {}

    void abrirSalon() {
        cout << "Abriendo salón #" << numero << " en " << ubicacion << endl;
    }

    void cerrarSalon() {
        cout << "Cerrando salón #" << numero << endl;
    }

    void recibirEstudiante(Estudiante e) { 

        cout << "El estudiante ";
        e.getDatos();
        cout << "ha ingresado al salón." << endl;
    }
};