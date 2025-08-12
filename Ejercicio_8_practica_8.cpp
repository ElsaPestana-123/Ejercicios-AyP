/*Especifique una clase que represente productos con las siguientes propiedades:
• Tienen un código que los identifica de manera única y que se asigna
automáticamente en el momento de la creación.
• Guardan la descripción y el precio sin IVA.
• Todos los productos comparten el mismo IVA (supongamos el 12 %),
que puede variar en función de las decisiones del gobierno.
• Los productos se dan de alta en una fecha concreta (la fecha de
creación) lo que nos servirá para conocer cuáles son los productos
más novedosos o más recientes.
La clase Producto debe proporcionar los métodos adecuados:
(a) Constructores
(b) Métodos para consulta y modificación de los atributos
(c) Método para calcular
*/
#include <iostream>
using namespace std;

class Producto{
    private:
        static float iva;
        static int contador;
        int id;
        string descripcion;
        float precio;
        int dia;
        int mes;
        int anio;
    public:
        Producto(int id, string descripcion, float precio, int dia, int mes, int anio){
            this->id = contador++;
            this->descripcion = descripcion;
            this->precio = precio;
            this->dia = dia;
            this->mes = mes;
            this->anio = anio;
        }

        Producto(long fecha){
            this->id = 0; // Valor por defecto
            this->descripcion = ""; // Valor por defecto
            this->precio = 0.0; // Valor por defecto
            this->iva = 0.12; // Valor por defecto
            this->dia = fecha % 100;
            this->mes = (fecha / 100) % 100;
            this->anio = fecha / 10000;
        }
        
        int getCodigo(){
            return id;
        }

        string getDescripcion(){
            return descripcion;
        }

        float getPrecio(){
            return precio;
        }

        static float getIva(){
            return iva;
        }

        int getDia(){
            return dia;
        }

        int getMes(){
            return mes;
        }

        int getAnio(){
            return anio;
        }

        void setCodigo(int id){
            this->id = id;
        }

        void setDescripcion(string descripcion){
            this->descripcion = descripcion;
        }

        void setPrecio(float precio){
            this->precio = precio;
        }

        static void setIva(float nuevoIva) { 
            iva = nuevoIva; 
        }

        void setDia(int dia){
            this -> dia = dia;
        }

        void setMes(int mes){
            this -> mes = mes;
        }

        void setAnio(int anio){
            this -> anio = anio;
        }

        int CalcularPrecio(){
            return precio + (precio * getIva());
        }

};
int Producto::contador = 0;
float Producto::iva = 0.12;