//Ejercicio que pida dos numeros y diga cual es mayor, menor o si son iguales
//Ejercicio 2
#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1>num2){
        cout <<"El primer numero es mayor que el segundo" << endl;
    }else if(num1<num2){
        cout <<"El segundo numero es mayor que el primero" << endl;
    }else{
        cout <<"Los numeros son iguales" << endl;
    } return 0;
}