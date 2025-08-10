/*Escriba un algoritmo que tome como entrada una secuencia de pares
de nombres de ciudades y distancias entre estas ciudades (medidas en
millas) y reporte las distancias en kilómetros. Debe hacer una función
para convertir de millas a kilómetros (1 milla = 1,6 km), otra función
para leer las siguientes dos ciudades y su distancia, y una función para
determinar si el algoritmo debe seguir ejecutándose. Para ello tome
en cuenta que el fin de la entrada está determinado por dos ciudades
con el mismo nombre y distancia 0. Por ejemplo, para la secuencia
Caracas Valencia 98 Caracas Maturin 312 Caracas Caracas 0, su algoritmo
debe imprimir:
Caracas Valencia: 156,8
Caracas Maturin: 499,2
*/
#include <iostream>
#include <string>
using namespace std;

float conversion(float milla){

    float kilomentros = milla * 1.6;

    return kilomentros;
}

void leerDatos(string &ciudad1, string &ciudad2, float &distancia_millas){

    cin>>ciudad1;
    cin>>ciudad2;
    cin>>distancia_millas;
}

void printl(string ciudad1, string ciudad2, float distancia_kilometros){

    cout<<ciudad1<<" "<<ciudad2<<": "<<distancia_kilometros<<endl;
}

bool Continuar(string ciudad_a, string ciudad_b, float distancia_millas){

    return ciudad_a != ciudad_b || distancia_millas != 0;

}

int main(){

    string ciudad1, ciudad2;
    float distancia_millas;

    leerDatos(ciudad1, ciudad2, distancia_millas);

    while(Continuar(ciudad1, ciudad2, distancia_millas)){

        float distancia_kilometros = conversion(distancia_millas);

        printl(ciudad1, ciudad2, distancia_kilometros);

        leerDatos(ciudad1, ciudad2, distancia_millas);
    }

    return 0;
}