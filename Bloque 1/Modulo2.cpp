#include <iostream>
#include <string>
using namespace std;

int main(){
    //Tipos numericos enteros
    int edad = 21;  //Variable de tipo entero
    unsigned int puntos = 1500; //Variable de tipo entero sin signo (Solo variables positivas)
    short dias = 7; //Entero corto (2 bytes)
    long poblacion = 1000000; //Entero largo (4 bytes)

    //Tipos numericos decimales
    float temperatura = 36.6f;//Decimal con menor presicion
    double altura = 1.75; //Decimal con mayor presicion
    long double pi = 3.1415839439; //Decimal de alta precision 

    //Caracter y cadena
    char inicial = 'M'; //Un solo caracter
    string nombre = "Ulises";//Cadena de texto (requiere #include <String>)

    //Booleano
    bool estudiante = true; //true o false
    
    //Mostrar valores
    cout <<"Nombre: " <<nombre<< endl;
    cout <<"Inicial: " <<inicial<< endl;
    cout <<"Edad: " <<edad<< " Anos" <<endl;
    cout <<"Altura: " <<altura<< " Metros" << endl;
}
