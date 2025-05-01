// 1. Simgle Responsability Principle (SRP)
#include <iostream>
using namespace std;

//Esta funcion solo se encarga de sumar dos numeros
int calcularTotal(int a, int b){
    return a + b;
}

//Esta funcion solo se encarga de mnostrar el resultado
void mostrarTotal(int total){
    cout << "Total: " << total << endl;

}
int main(){
    int total = calcularTotal(10,20); //Usamos la funcion para calcular
    mostrarTotal(total);
    return 0;
}
