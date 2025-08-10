/*Escriba una función o acción que reciba por parámetro 5 números y
determine el máximo y mínimo entre ellos
*/
#include <iostream>
using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

int min(int a, int b){
    return a <= b ? a :b;
}

void determinar_numero_mayor(int a, int b, int c, int d, int e, int &Max, int &Min){

    Max = max(max(max(max(a,b),c),d),e);
    Min = min(min(min(min(a,b),c),d),e);

}

int main() {
    
    int Max, Min;
    determinar_numero_mayor(3,5,76,2,3, Max, Min);

    return 0;
}