#include <iostream>
using namespace std;

// Clase base abstracta
class Empleado{
protected:
    string nombre;

public:
    Empleado(string n) : nombre(n){}

    //Getter para el nombre (encapsulamiento)
    string getNombre() const{
        return nombre;
    }

    // Metodo virtual para polimorfismo 
    virtual void mostrarRol(){
        cout << nombre << " es un empleado." << endl;
    }

    // Metodo virtual para redifinir comportamiento comun
    virtual void trabajar(){
        cout << nombre << " esta trabajando." << endl;
    }

    virtual ~Empleado(){}
};

//Clase derivada: Jefe
class Jefe: public Empleado{
public:
    Jefe(string n) : Empleado (n){}

    void mostrarRol()override{
        cout << nombre << " es un jefe." << endl;
    }

    void trabajar() override{
        cout << nombre << " esta dirigiendo a un equipo." << endl;
    }
};

// Clase derivada: Becario
class Becario : public Empleado{
public: 
    Becario(string b): Empleado(b){}

    void mostrarRol()override{
        cout << nombre << " es un Becario." << endl;
    }

    void trabajar() override{
        cout << nombre << " esta aprendiendo y apoyando en tareas." << endl;
    }
};

int main(){
    //Abstraccion: usamos punteros a clase base
    Empleado* empleados[3];
    empleados[0] = new Empleado("Luis");
    empleados[1] = new Jefe("Ana");
    empleados[2] = new Becario("Maria");

    for(int i = 0; i < 3 ; ++i){
        empleados[i] -> mostrarRol(); //Polimorfismo
        empleados[i] -> trabajar();
        cout << endl;
    }

    //Limpieza de memoria 
    for(int i=0; i<3; ++i){
        delete empleados[i];
    }

    return 0;
}