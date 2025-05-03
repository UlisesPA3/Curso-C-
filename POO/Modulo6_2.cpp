//Costructores y destructores

#include <iostream>
using namespace std;

class Persona{
public:
    string nombre;
    //Costructor: se ejecuta automaticamente al crear el objeto
    Persona(string n){
        nombre = n;
        cout << "Constructor ejecutado para " << nombre << endl;
    }

    //Destructor: se ejecuta automanticamente al destruie el objeto
    ~Persona(){
        cout << "Destuctor llamado para " << nombre << endl;
    }
};

//Clase ArchivoTemporal para demostrar uso tipico de RAII
class ArchivoTemporal{
public:
    ArchivoTemporal(){
        cout << "Archivo temporal creado" << endl;
    }
    ~ArchivoTemporal(){
        cout << "Archivo temporal destruido" << endl;
    }
};

int main(){
    cout << "Incio del programa\n" << endl;

    {
        //Se crea un objeto Persona
        Persona p("Lucia");

        //Se crea un archivo temporal dentro de este bloque
        ArchivoTemporal archivo;

        cout << "\nDentro del bloque de main()\n" << endl;
    } // Aqui terminan los objetos p y archivo = se desstruyen automaticamente

    cout << "\nFin del Programa\n" << endl;
    return 0;
}


