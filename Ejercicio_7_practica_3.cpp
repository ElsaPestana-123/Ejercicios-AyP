/* Escriba un algoritmo que reciba como entrada un fecha (día y mes) del
año actual e imprima por pantalla el número de días transcurridos desde
el 1ro de Enero.
*/
#include <iostream>
using namespace std;

int main(){

  int fechaC, dia, mes, diasT;

   cout<<"ingrese una fecha en DD/MM"<<endl;
   cin>> fechaC;

   mes = fechaC % 100;
   dia = fechaC / 100;

   int DiasEnero = 31;
   int DiasFebrero = 29;
   int DiasMarzo = 31;
   int DiasAbril = 30;
   int DiasMayo = 31;
   int DiasJunio = 30;
   int DiasJulio = 31;
   int DiasAgosto = 31;
   int DiasSeptiembre = 30;
   int DiasOctubre = 31;
   int DiasNoviembre = 30;
   int DiasDiciembre = 31;

   if (mes > 1) diasT += DiasEnero;
   if (mes > 2) diasT += DiasFebrero;
   if (mes > 3) diasT += DiasMarzo;
   if (mes > 4) diasT += DiasAbril;
   if (mes > 5) diasT += DiasMayo;
   if (mes > 6) diasT += DiasJunio;
   if (mes > 7) diasT += DiasJulio;
   if (mes > 8) diasT += DiasAgosto;
   if (mes > 9) diasT += DiasSeptiembre;
   if (mes > 10) diasT += DiasOctubre;
   if (mes > 11) diasT += DiasNoviembre;
   if (mes > 12) diasT += DiasDiciembre;

   diasT += dia;

   cout<<"han pasado"<<"  "<< diasT << "   "<< "dias"<<endl;

    return 0;
}