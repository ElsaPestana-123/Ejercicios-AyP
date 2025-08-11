/*Haga una función que tome como entrada un string y retorne verdadero si
es capicúa.
*/
#include <iostream>
#include <string>
using namespace std;

bool palindrome(string palabra){

    string palabraInvertida = "";

    for(int i = palabra.length()-1; i >= 0 ;i--){

        palabraInvertida += palabra[i];

    }

    return palabra == palabraInvertida;

}

int main(){

    string palabra;

    cout<<"Ingrese una palabra"<<endl;
    cin>>palabra;

    if(palindrome(palabra)){
        cout<<"Es palindromo: Verdadero"<<endl;
    }else{
        cout<<"Es palindromo: Falso"<<endl;
    }

    return 0;
}