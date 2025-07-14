//Abstraccion
#include <iostream>
#include <cmath> // Para M_PI
using namespace std;

//Clase abstracta
class Figura{
    public:
    //Metodo virtual puro -> obliga a las clases hijas a implementarlo
    virtual float calcularArea() = 0;

    //Otro metodo virtual puro
    virtual void dibujar() = 0;

    //Metodo concreto opcional
    void mostrarInfo(){
        cout << "Soy una figura geometrica." << endl;
    }

    //Destructor virtual
    virtual ~Figura(){}
};

//Clase derivada> Circulo
class Circulo : public Figura{
    private: 
        float radio;
    
    public:
        Circulo(float r) : radio (r){}

        float calcularArea() override{
            return M_PI * radio * radio;
        }

        void dibujar() override{
            cout << "Dibujando un circulo con radio " << radio << endl;
        }
};

// Clase derivada: Rectangulo
class Rectangulo : public Figura{
    private: 
        float ancho, alto;

    public: 
        Rectangulo (float a, float b) : ancho(a), alto(b){}

        float calcularArea() override{
            return ancho * alto;
        }

        void dibujar() override{
            cout << "Dibujando un rectangulo de  " << ancho << " x " << alto << endl;
        }
};

class Triangulo : public Figura{
    private: 
        float base, altura;

    public:
        Triangulo(float a, float b) : base(a), altura (b){}

        float calcularArea() override{
            return base * altura;
        }

        void dibujar() override{
            cout << "Dibujando un triangulo de " << base << " x " << altura << endl;
        }
};

class Cuadrado : public Figura{
    private: 
        float base;

    public:
        Cuadrado(float c): base(c){}
        
        float calcularArea() override{
            return pow(base, 2);
        }

        void dibujar() override{
            cout << "Dibujando un cuadrado de " << base << endl;
        }

};


int main(){
    //Puntero a clase Base
    Figura* figura;

    Circulo c(5);
    Rectangulo r(4,3);
    Triangulo t(6, 15);
    Cuadrado d(6);

    //Polimorfismo con abstraccion
    figura = &c;
    figura -> mostrarInfo();
    figura -> dibujar();
    cout << "Area: " << figura ->calcularArea()<< "\n" << endl;

    figura = &r;
    figura -> mostrarInfo();
    figura -> dibujar();
    cout << "Area: " << figura->calcularArea() << "\n" << endl;

    figura = &t;
    figura -> mostrarInfo();
    figura -> dibujar();
    cout << "Area: " << figura -> calcularArea() << "\n" << endl;

    figura = &d;
    figura -> mostrarInfo();
    figura -> dibujar();
    cout << "Area: " << figura->calcularArea() << "\n" << endl;

    return 0;
}