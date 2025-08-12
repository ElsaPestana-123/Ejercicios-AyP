/*Una empresa dedicada a la venta de jugos, desea registrar la información de
sus vendedores, respecto a: cedula, nombre, zonaDeVenta, vtasMensuales,
totalAnual y comisión. Donde vtasMensuales representa las ventas realizadas
por el vendedor en cada uno de los doce meses del año, totalAnual
representa la suma de las ventas en un año y comisión un porcentaje que
depende del totalAnual. Además la variable nombre está asociada con una
clase Nombre cuyas instancias representan el apellido, el primerNombre y
el segundoNombre de cada vendedor.
(a) Definir la clase Vendedor y la clase Nombre
(b) Definir en la clase que corresponda los métodos que permitan los
siguientes requerimientos:
i. Crear una instancia de la clase Vendedor y solicitar al usuario
los datos para inicializar sus variables, excepto las variables
vtasMensuales, totalAnual y comisión que se inicializan con ceros.
ii. Ingresar las ventas de un determinado mes.
iii. Determinar la comisión del vendedor, teniendo en cuenta:
• Si totalAnual < Bs. 50.000, la comisión es cero.
• Si Bs. 50.000 ≤ totalAnual < Bs. 70.500, la comisión es del
15 %.
• Si Bs. 70.500 ≤ totalAnual < Bs. 100.000, la comisión es del
20 %.
• Si Bs. 100.000 ≤ totalAnual, la comisión es del 30 %.
*/
#include <iostream>
using namespace std;

class Nombre {
    private:

        string apellido;
        string primerNombre;
        string segundoNombre;

    public:

        Nombre(string apellido, string primerNombre, string segundoNombre) {

            this->apellido = apellido;
            this->primerNombre = primerNombre;
            this->segundoNombre = segundoNombre;

        }

        void mostrarNombre() {
            cout << "Nombre: " << primerNombre << " " << segundoNombre << " " << apellido << endl;
        }
};

class Vendedor {

    private:

        string cedula;
        Nombre nombre;
        string zonaDeVenta;
        float vtasMensuales[12];
        float totalAnual;
        float comision;

    public:

        Vendedor(string cedula, Nombre nombre, string zonaDeVenta) :
            cedula(cedula), nombre(nombre), zonaDeVenta(zonaDeVenta), totalAnual(0), comision(0) {

            for (int i = 0; i < 12; i++) {
                vtasMensuales[i] = 0;
            }
        }

        void ingresarVentas(int mes, float monto) {

            if (mes >= 1 && mes <= 12) {

                totalAnual -= vtasMensuales[mes - 1];
                vtasMensuales[mes - 1] = monto;
                totalAnual += monto;

            } else {

                cout << "Mes inválido. Ingrese un mes entre 1 y 12." << endl;
            }
        }

        void calcularComision() {

            if (totalAnual < 50000) {
                comision = 0;

            } else if (totalAnual < 70500) {
                comision = totalAnual * 0.15;

            } else if (totalAnual < 100000) {
                comision = totalAnual * 0.20;

            } else {
                comision = totalAnual * 0.30;
            }
        }

        void mostrarInformacion() {

            cout << "Cédula: " << cedula << endl;

            nombre.mostrarNombre();

            cout << "Zona de Venta: " << zonaDeVenta << endl;

            cout << "Ventas Mensuales: ";
            for (int i = 0; i < 12; i++) {
                cout << vtasMensuales[i] << " ";
            }

            cout << endl;

            cout << "Total Anual: " << totalAnual << endl;

            cout << "Comisión: " << comision << endl;
        }
};