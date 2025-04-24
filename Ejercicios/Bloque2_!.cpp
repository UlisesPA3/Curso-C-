//Programa que lee la temperatura en grados Celsius y muestra un mensaje dependiendo de la temperatura ingresada
//Ejercicio 1
#include <iostream>
using namespace std;

int main(){
    int temperatura;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperatura;
    if(temperatura < 15){
        cout << "Ta chendo frio" << endl;
        cout << "Toca chaqueton, no lo olvides!" << endl;
    }else if(temperatura >= 15 && temperatura <= 25){
        cout << "Ta templadito" << endl;
    }else{
        cout << "Ta chendo calor" << endl;
        cout << "Toca short y camiseta, no lo olvides!" << endl;
    }
    return 0;
}