/*Haga un algoritmo que permita determinar si un número N de 6 dígitos
contiene algún número de 3 dígitos capicúa. Por ejemplo, si N = 485992 no
hay números capicúas contenidos, pero N = 106562 si contiene uno (656).
*/
#include <iostream>
using namespace std;

int Digito1, Digito2, Digito3, Digito4;

int revertido(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}


bool es_capicua(int Digito1, int Digito2, int Digito3, int Digito4){

    bool capicua = false;

    if(Digito1 == revertido(Digito1) ){
        cout<<"El numero "<<Digito1<<" es capicua"<<endl;
        capicua = true;

    } else{
        cout<<"El numero "<<Digito1<<" no es capicua"<<endl;
    }

    if(Digito2 == revertido(Digito2) ){
        cout<<"El numero "<<Digito2<<" es capicua"<<endl;
        capicua = true;

    } else{
        cout<<"El numero "<<Digito2<<" no es capicua"<<endl;
    }

    if(Digito3 == revertido(Digito3) ){
        cout<<"El numero "<<Digito3<<" es capicua"<<endl;
        capicua = true;

    } else{
        cout<<"El numero "<<Digito3<<" no es capicua"<<endl;
    }

    if(Digito4 == revertido(Digito4) ){
        cout<<"El numero "<<Digito4<<" es capicua"<<endl;
        capicua = true;
        
    } else{
        cout<<"El numero "<<Digito4<<" no es capicua"<<endl;
    }

    return capicua;
}

int main() {

    int N;

    cout<<"Ingrese un numero de 6 digitos: "<<endl;
    cin>>N;

    int num = N; // 106562

    Digito1 = num % 1000; // 562
    Digito2 = (num / 10) % 1000; // 656
    Digito3 = (num / 100) % 1000; // 065
    Digito4 = (num / 1000); // 106

    bool capicua = es_capicua(Digito1, Digito2, Digito3, Digito4);

    if (capicua){
        cout<<"Hay al menos un numero capicua"<<endl;
    } else{
        cout<<"No hay ningun numero capicua"<<endl;
    }

    return 0;
}