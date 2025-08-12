/*Los productos que comercializa una determinada empresa son libros y
CD. Cada producto viene caracterizado por un código que lo identifica de
manera única, el precio base del mercado, y el IVA que se le aplica que es
diferente en cada caso, el 8% para los libros y el 12% para los CD. Además
las características propias de cada tipo de producto son para los Libros:
título, autor(es), año de publicación, editorial, ISBN y para los CD: título,
intérprete, año de publicación. Por otro lado, esta empresa aplica un 20%
de descuento a los libros y un 10% a los CD. Por tanto, el precio de venta
de cada producto se calculará como: precio base +%IVA –dto. Defina las
clases que sean necesarias para representar los distintos tipos de productos
que acabamos de especificar. 
*/
#include <iostream>
#include <string>
using namespace std;

class Empresa {
protected:
    int codigo;
    float precio_base;
public:
    Empresa(int codigo, float precio_base) : codigo(codigo), precio_base(precio_base) {}
    virtual float IVA() const = 0;
    virtual float Descuento() const = 0;
    virtual float precioVenta() const = 0;
    virtual ~Empresa() {}
};

class Libro : public Empresa {
private:
    string titulo;
    string autor;
    int anio_de_publicacion;
    string editorial;
    int ISBN;
    static constexpr float iva_libro = 0.08;
    static constexpr float descuento_libro = 0.20;
    
public:
    Libro(int codigo, float precio_base, string titulo, string autor, int anio_de_publicacion, string editorial, int ISBN)
        : Empresa(codigo, precio_base), titulo(titulo), autor(autor), anio_de_publicacion(anio_de_publicacion), editorial(editorial), ISBN(ISBN) {}

    float IVA() const override { return precio_base * iva_libro; }
    float Descuento() const override { return precio_base * descuento_libro; }
    float precioVenta() const override { return precio_base + IVA() - Descuento(); }

    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getAnio_de_publicacion() const { return anio_de_publicacion; }
    string getEditorial() const { return editorial; }
    int getISBN() const { return ISBN; }
};

class CD : public Empresa {
private:
    string titulo;
    string interprete;
    int anio_de_publicacion;
    static constexpr float iva_cd = 0.12;
    static constexpr float descuento_cd = 0.10;
public:
    CD(int codigo, float precio_base, string titulo, string interprete, int anio_de_publicacion)
        : Empresa(codigo, precio_base), titulo(titulo), interprete(interprete), anio_de_publicacion(anio_de_publicacion) {}

    float IVA() const override { return precio_base * iva_cd; }
    float Descuento() const override { return precio_base * descuento_cd; }
    float precioVenta() const override { return precio_base + IVA() - Descuento(); }

    string getTitulo() const { return titulo; }
    string getInterprete() const { return interprete; }
    int getAnio_de_publicacion() const { return anio_de_publicacion; }
};

int main() {
    Libro libro1(1, 100, "El principito", "Antoine de Saint-Exupéry", 1943, "Reynal & Hitchcock", 978607);
    CD cd1(2, 50, "Thriller", "Michael Jackson", 1982);

    cout << "-------------------------" << endl;
    cout << "Datos del libro" << endl;
    cout << "Titulo: " << libro1.getTitulo() << endl;
    cout << "Autor: " << libro1.getAutor() << endl;
    cout << "Año de publicacion: " << libro1.getAnio_de_publicacion() << endl;
    cout << "Editorial: " << libro1.getEditorial() << endl;
    cout << "ISBN: " << libro1.getISBN() << endl;
    cout << "-------------------------" << endl;
    cout << "Datos del CD" << endl;
    cout << "Titulo: " << cd1.getTitulo() << endl;
    cout << "Interprete: " << cd1.getInterprete() << endl;
    cout << "Año de publicacion: " << cd1.getAnio_de_publicacion() << endl;
    cout << "-------------------------" << endl;
    cout << "Precio de venta del libro: " << libro1.precioVenta() << endl;
    cout << "Precio de venta del CD: " << cd1.precioVenta() << endl;
    cout << "-------------------------" << endl;
    cout << "IVA del libro: " << libro1.IVA() << endl;
    cout << "Descuento del libro: " << libro1.Descuento() << endl;
    cout << "-------------------------" << endl;
    cout << "IVA del CD: " << cd1.IVA() << endl;
    cout << "Descuento del CD: " << cd1.Descuento() << endl;
    cout << "-------------------------" << endl;

    return 0;
}