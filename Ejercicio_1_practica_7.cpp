/*En una tienda se tienen diferentes tipos de productos. Cada producto tiene
un código, una descipción, un nombre y un precio. Existen varios tipos
de productos. Cada tipo de producto tiene un nombre, un código y 10
productos.
(a) Se desea que define las estructuras de datos para almacenar un producto,
y para almacenar un tipo de producto.
(b) Supongamos ahora que tenemos un arreglo con 5 tipos de productos
y deseamos aumentar en un 10% el precio de todos los productos que
sean de un tipo con código C.
(c) Haga una función que dado un código de producto P busque el
producto en toda la estructura de datos y retorne verdadero si el
prodcuto existe o falso en caso contrario.
*/
#include <iostream>
#include <string>
using namespace std;

struct producto{
    int codigo;
    string descripcion;
    string nombre;
    float precio;
};

struct categoria{
    string nombre;
    int codigo;
    producto productos[10];
};

int aumentarPrecio(categoria categorias[], int ncategorias, int codigoCategoria, float porcentaje){
    for(int i = 0; i < ncategorias ; i++){
        if(categorias[i].codigo == codigoCategoria){
            for(int j = 0; j < 10; j++){
                categorias[i].productos[j].precio += categorias[i].productos[j].precio * porcentaje;
            }
            return 1;
        }

    }
    return 0;
}

bool existeProducto(categoria categorias[], int nCategorias, int codigoProducto){

    for(int i = 0; i < nCategorias; i++){
        for(int j = 0; j < 10; j++){
            if(categorias[i].productos[j].codigo == codigoProducto){
                return true;
            }
        }
    }

    return false;
}