//Ejercicio 5. Polimorfismo
#include <iostream>
using namespace std;

class Figura{
    public:
    int area(int a, int b){
        cout << "Area del triiangulo: ";
        return a * b;
    }
    
    int area(float r){
        float pi = 3.14f;
        cout << "Area del circulo: ";
        return pi*(r* r); 
    }
};

class Instrumento{
    public:
    virtual void tipo(){
        cout << "Tipo de instrumento"<< endl; 
    }
};

class Guitarra : public Instrumento{
    public:
        void tipo()override{
            cout << "Intrumento de cuerda " << endl;
        }
};

class Flauta : public Instrumento{
    public:
    virtual void tipo()override{
        cout << "Intrumento de viento";
    }
};

int main(){
    cout << "==Ejemplo Figura (Sobrecarga)==" << endl;
    Figura fig;

    cout <<  fig.area(4, 5) << endl;
    cout << fig.area(14.6f) << endl;

    cout << "==Segundo ejemplo (Sobrescritura)==" << endl;
    Instrumento*inst;

    Guitarra guit;
    Flauta fla;

    inst = &guit;
    inst -> tipo();

    inst =&fla;
    inst -> tipo();

}

