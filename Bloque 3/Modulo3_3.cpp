#include<iostream>
#include<string>
using namespace std;

int main(){
    char saludo[] = "Hola";
    cout << saludo << endl; // Imprime "Hola"

    char saludo2 [5] = {'H', 'o', 'l', 'a', '\0'}; // Arreglo de caracteres con terminador nulo

    //concatenar cadenas
    string nombre = "Ana";
    nombre += " Maria"; // Concatenar cadenas (nombre = nombre + " Maria")   
    cout << nombre << endl; // Imprime "Ana Maria"
    cout << nombre.length() << endl; // Imprime la longitud de la cadena (9)
    cout << nombre[1] << endl;

    if(nombre == "Ana Maria"){
        cout << "Nombre completo" << endl;
    }
    return 0;
}    