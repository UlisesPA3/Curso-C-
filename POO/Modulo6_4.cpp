//Herencia

#include <iostream>
using namespace std;

//Clase base animal

class Animal{
    public:
    void comer(){
        cout <<  "Este animal esta comiendo. " << endl;
    }

    void dormir(){
        cout << "Este animal esta durmiendo. " << endl;
    }
};

//Clase derivada Perro que hereda de Animal
class Perro : public Animal{
    public:
    void ladrar(){
        cout << "El perro dice: Guau guau!" << endl;
    }
};

//Clase base vehiculo
class Vehiculo{
    public:
    void mover(){
        cout << "El vehiculo se esta moviendo" << endl;
    }
};

//Clase derivada Auto que hereda de vehiculo
class Auto : public Vehiculo{
    public:
    void encenderMotor(){
        cout << "El auto ha encendido el motor." << endl;
    }
};

//Clase derivada Bicicleta que hereda del vehiculo
class Bicicleta : public Vehiculo{
    public:
    void pedalear(){
        cout << "La bicicleta avanza pedalenado. " << endl;
    }
};

int main(){
    cout << "== Ejemplo 1. Animal y Perro==" << endl;

    Perro miPerro;
    miPerro.comer(); //Metodo heredado del Animal
    miPerro.dormir(); //Metodo heredado del Animal
    miPerro.ladrar(); //Metodo propio de perro

    cout << "Ejemplo 2. Vehiculo, Auto y Bicicleta" << endl;

    Auto miAuto;
    Bicicleta miBici;

    miAuto.mover(); //Metodo Heredado
    miAuto.encenderMotor(); //Metodo propio

    miBici.mover(); //Metodo heredado
    miBici.pedalear(); //Metodo Propio

    return 0;

}





