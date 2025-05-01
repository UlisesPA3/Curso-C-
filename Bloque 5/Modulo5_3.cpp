//Manejo de Excepciones
#include <iostream>
#include <vector>
#include<stdexcept>
using namespace std;    

int main (){
    // 
    //1. Ejemplo de excepcion con tipo basico
    //
    try{
        int a = 5;
        int b = 0;

        //verificamos si b es cero antes de dividir

        if(b == 0){
            //Lanzamos una excepcion si ocurre division por cero
            throw "Division pro cero";
        }

        //Esta linea no se ejcutara si se lanza la excepcion
        cout << "El resultado es: " << a/b << endl;
    }catch (const char* msg){
        //Capturamos la excepcion de tipo const char*
        cout << "Error (tipo basico): "<< msg << endl;
    }

    //
    //2. Excepcion estandar: acceso fuera de rango
    //
    try{
        vector<int> v(3); //Vector con 3 elementos: 0, 1, 2

        //Acceder al indice 5, que no existe
        cout << "Elemnto en posicion 5: " << v.at(5) << endl;
        
    }catch (const out_of_range& e){
        //Capturamos la excepcion de tipo out_of_range
        cout << "Excepcion (std:out_of_range): " << e.what() << endl;
    }

    //
    //3.Excepcion personalizada usando std:runtime_error
    //
    try{
        //Lanzamos una excepcion de tipo tud::runtime_error
        throw runtime_error("Error de tiempo de ejecucion");
    }catch(const exception& e){
        //Capturamos la excepcion de tipo std::exception
        cout << "Excepcion (std::exception): " << e.what() << endl;
    }
    return 0;
    //Fin del programa
}