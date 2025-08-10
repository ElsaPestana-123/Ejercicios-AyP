/*Haga una función que utilice la función creada en el problema (6) para
crear otra función que tome como entrada dos fechas (día, mes y año)
y calcule el número de días transcurridos entre las fechas. Puede asumir
también que existe una función para determinar si un año es bisiesto
*/
#include <iostream>
using namespace std;

bool year_bisiestro(int year){

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    } else {
        return false;
    }
}

int calculo_de_mes(int mes, int year){

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        return 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        return 30;
    } else if (mes == 2 && year_bisiestro(year)){
        return 29;
    } else if (mes == 2 && !year_bisiestro(year)){
        return 28;
    } else {
        return 0;
    }  

}

int calculo_de_dias(int dia1, int dia2, int mes1, int mes2, int year1, int year2){

    int dias_totales = 0;

    if(year1 == year2){

        if(mes1 == mes2){

           return dia2 - dia1;

        } else {

            dias_totales += calculo_de_mes(mes1, year1) - dia1; // 27
            for (int i = mes1 + 1; i < mes2 ; i++){

                dias_totales += calculo_de_mes(i, year1); // 58 primera vuelta || 88 en la segunda vuelta

            }

            dias_totales += dia2;

        }  

    } else if (year1 != year2) {

        dias_totales += calculo_de_mes(mes1,year1) - dia1; // 02/02/2020 retorne 27

        for ( int i = mes1 + 1; i <= 12; i++){

            dias_totales += calculo_de_mes(i, year1); // en la primera vuelta va retornar 27+31 = 58 || en la segunda vuelta va retornar 58+30 = 88 || en la tercera vuelta va retornar 88+31 = 119 || en la cuarta vuelta va retornar 119+30 = 149 || en la quinta vuelta va retornar 149+31 = 180 || en la sexta vuelta va retornar 180+31 = 211 || en la septima vuelta va retornar 211+30 = 241 || en la octava vuelta va retornar 241+31 = 272 || en la novena vuelta va retornar 272+30 = 302 || en la decima vuelta va retornar 302+31 = 333 
        }

        for (int i = year1 + 1; i < year2; i++){

            if (year_bisiestro(i)){

                dias_totales += 366;

            } else {

                dias_totales += 365;

            }

        }

        for( int i = 1; i < mes2; i++){

            dias_totales += calculo_de_mes(i, year2);
        }

        dias_totales += dia2;
    
    }

    return dias_totales;

}

int main(){

    int dia1, mes1, year1;
    int dia2, mes2, year2;

    cout<<"Ingrese una fecha (dia mes año):"<<endl;
    cin>> dia1 >> mes1 >> year1;

    cout<<"Ingrese otra fecha (dia mes año):"<<endl;
    cin>> dia2 >> mes2 >> year2;

    cout<<calculo_de_dias(dia1,dia2,mes1,mes2,year1,year2)<<endl;

    return 0;
}