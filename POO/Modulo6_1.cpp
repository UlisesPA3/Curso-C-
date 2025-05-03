#include <iostream>
using namespace std;

//Definicion de una clase llamda persona
class Persona{
public:
    //Atributo (caracteristicas)
    string nombre;
    int edad;

    //Metodo (comportamiento)
    void saludar(){
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

//Clase adicional para reforzar el concepto
class Perro{
    public:
        //Atributo (caracteristicas)
        string nombre;
        string raza;

        //Metodo (comportamiento)
        void ladrar(){
            cout << "Guau! Soy " << nombre << " de raza " << raza << "." << endl;
        }
};

int main(){
    //Persona
    Persona p1;
    p1.nombre = "Carlos";
    p1.edad = 25;
    p1.saludar();

    
    //Perro 
    Perro perro1;
    perro1.nombre = "Rex";
    perro1.raza = "Labrador";
    perro1.ladrar();
    
    return 0;
}