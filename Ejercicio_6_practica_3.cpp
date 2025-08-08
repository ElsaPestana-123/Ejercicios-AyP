/*El IMC resulta de la división de la masa del individuo (en kilogramos)
entre el cuadrado de la estatura (en metros). El índice de masa corporal es
un indicador del peso de una persona en relación con su altura.
Clasificación del IMC de acuerdo con la OMS de la ONU:
(a) Menor a 16: Criterio de ingreso.
(b) 16 a 16.9: infrapeso.
(c) 17 a 18.4: bajo peso.
(d) 18.5 a 24.9: peso normal.
(e) 25 a 29.9: sobrepeso.
(f) 30 a 34.9: obesidad premórbida.
(g) 40 a 45: obesidad mórbida.
(h) Mayor a 45: obesidad hipermórbida.
Escriba un algoritmo que dado el peso de una persona en libras (1 libra =
0, 453592 Kg) y su estatura en centímetros, calcule su IMC e indique como
salida el peso en kilogramos, el valor de IMC de la persona y la categoría
en la cual fue clasificado.
*/
#include <iostream> 
using namespace std;

int main(){

    float imc;
    float PL, PK, AC, AM; 
    //PL significa peso en libras, PK peso en kilogramos, AC altura en centimetros, AM altura en metros.

    cout<<"ingrese su peso"<<endl;
    cin>> PL;

    cout<<"ingrese su altura"<<endl;
    cin>> AC;

    PK = PL * 0.453592;
    AM = AC / 100;

    cout<<"su peso en kilogramos es"<<"   "<< PK << endl;
    
    imc = PK / (AM * AM);

    cout<<"su imc es de"<< "    "<< imc <<endl;

    if (imc < 16){

        cout<<"criterio de ingreso"<<endl;

    } else if((imc >= 16) && (imc <= 16.9)){

        cout<<"infrapeso"<<endl;

    } else if ((imc >= 17) && (imc <= 18.4)){

        cout<<"bajo peso"<<endl;

    } else if ((imc >= 18.5) && (imc <= 24.9)){

        cout<<"peso normal"<<endl;

    } else if((imc >= 25) && (imc <= 29.9)){

        cout<<"sobrepeso"<<endl;

    } else if ((imc >= 30) && (imc <= 34.9)){

        cout<<"obesidad pre-morbida"<<endl;

    } else if ((imc >= 40) && (imc <= 45)){

        cout<<"obesidad morbida"<<endl;
    
    } else if( imc > 45){

        cout<<"obesidad hipermorbida"<<endl;
    }
 
    return 0;
}