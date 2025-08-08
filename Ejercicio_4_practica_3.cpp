/*En un estacionamiento la primera hora (o fracción) cuesta Bs. 100 y cada
hora adicional (o fracción) Bs. 80. Haga un algoritmo que reciba como
entrada la hora de entrada y hora de salida de un vehículo y calcule el
monto a pagar
*/
#include <iostream> 
#include <cmath>
using namespace std;

int main(){

 int horaE, horaS, horaE1, minE1, horaS1, minS1, totalP;

 cout<<"ingrese la hora de entrada del estacionamiento(pongan las horas y minutos nada mas y en formato militar)"<<endl;
 cin>> horaE;

 cout<<"ingrese la hora de salida del estacionamiento(pongan las horas y minutos nada mas y en formato militar)"<<endl;
 cin>> horaS;

 horaE1 = horaE / 100;
 minE1 = horaE % 100;

 horaS1 = horaS / 100;
 minS1 = horaS % 100;

 int entradaM = horaE1 * 60 + minE1;
 int salidaM = horaS1 * 60 + minS1;

  if (salidaM < entradaM) {

    salidaM += 24 * 60;

  }

 int totalT = salidaM - entradaM;

 int totalH = ceil(totalT / 60.0);

 if (totalH == 1){

    totalP = 100;

 } else {

  totalP = 100 + (totalH - 1) * 80;

 }

  return 0;
}