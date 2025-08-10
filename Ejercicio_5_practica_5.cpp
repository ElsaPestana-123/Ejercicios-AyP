/*Haga una función que reciba como entrada un mes del año y determine el
número de días transcurridos desde el comienzo del año hasta el primer
día del mes
*/
#include <iostream>
using namespace std;

int caluculo_de_mes(int mes){
    if (mes ==1){
        return 1;
    } else if(mes == 2){
        return 32;
    } else if(mes == 3){
        return 60;
    } else if(mes == 4){
        return 91;
    } else if(mes == 5){
        return 121;
    } else if(mes == 6){
        return 152;
    } else if(mes == 7){
        return 182;
    } else if(mes == 8){
        return 213;
    } else if(mes == 9){
        return 244;
    } else if(mes == 10){
        return 274;
    } else if(mes == 11){
        return 305;
    } else if(mes == 12){
        return 335;
    } else {
        return 0;
    }
}

int main(){

    int dia, mes;

    cout<<"Ingrese un mes:"<<endl;
    cin>> mes;

    dia = caluculo_de_mes(mes);

    cout<<"Han transcurrido "<<dia<<" dias desde el inicio del año"<<endl;

    return 0;
}