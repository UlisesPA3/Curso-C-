//Ejercicio 4. Herencia
#include <iostream>
using namespace std;

class Dispositivo{
    public:
    void encender(){
        cout << "El dispositivo se ha encendido" << endl;
    }
};

class Computadora : public Dispositivo{
    public:

    void teclado(){
        cout << "Para acceder teclee la contrasenia" << endl;
    }
};

class Tableta : public Dispositivo{
    public:

    void touch(){
        cout << "Para acceder ingrese el pin" << endl;
    }
};

int main(){
    cout << "==Dispositivos==" << endl;
    
    Computadora miCompu;
    miCompu.encender();
    miCompu.teclado();
    
    cout << endl;

    Tableta miTablet;
    miTablet.encender();
    miTablet.touch();
}