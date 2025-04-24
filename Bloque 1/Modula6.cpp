#include <iostream>
using namespace std;

int main (){
    string nombre;
    int edad;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Hola " << nombre << ", tienes " << edad << " anos." << endl;
    cout << "Tu nombre tiene " << nombre.length() << " letras." << endl; 
}