//Polimorfismo
#include <iostream>
using namespace std;

// ===== POLIMORFISMO EN TIEMPO DE COMPILACION (SOBRECARGA)======
//clase de metodos sobrecargados: mismo nombre, diferentes parametros
class Calculadora{
    public:
    //Suma de enteros
    int sumar(int a, int b){
        cout << "Suma de enteros: ";
        return a + b;
    }

    //Suma de flotantes 
    float sumar(float a, float b){
        cout << "Suma de flotantes: ";
        return a + b;
    }

    //suma de tres enteros
    int sumar (int a, int b, int c){
        cout << "Sumando tres enteros: ";
        return a + b + c;
    } 
};

//==== POLIMORFISMO EN TIEMPO DE EJECUCION (SOBRESCRITURA)  =======

//Clase Base
class Animal{
    public:
        //Metodo virtual permite polimorfismo
        virtual void sonido(){
            cout << "Sonido generico de animal." << endl;
        }
};

//Clase derivada Gato
class Gato : public Animal{
    public:
        void sonido()override{
            cout << "Miau" << endl;
        }
};

//Clase Derivada Perro
class Perro : public Animal{
    public: 
        void sonido()override{
            cout << "Guau Guau!" << endl;
        }
};

//Clase derivada Vaca
class Vaca : public Animal{
    public:
        void sonido()override{
            cout << "MUUU" << endl; 
        }
};

int main(){
    cout << "== Polimorfismo por sobrecarga (compile-time) ==" << endl;
    Calculadora calc;

    cout << calc.sumar(5,3) << endl;
    cout << calc.sumar(2.5f, 3.4f) << endl;
    cout << calc.sumar(1, 2, 3) << endl;

    cout << "\n== Polimorfismo por Sobrescritura (Run-Time) ==" << endl;
    Animal* animal;

    Gato gato;
    Perro perro;
    Vaca vaca;

    animal = &gato;
    animal ->sonido();

    animal =&perro;
    animal ->sonido();

    animal = &vaca;
    animal -> sonido();

    return 0;
}

