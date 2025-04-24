#include <iostream>
using namespace std;

int main(){
    //Esto es un comentario de una sola linea
    /*Esto es un comentario 
    que puede ocupar varias lineas*/

    // ------Ejemplo 1-------
    string n; cin >> n; cout <<"Hola "<<n;

    // ------Ejemplo 2-------
    string nombre; //variable para guardar el nombre del usuario

    //Pedimos el nombre al usuario
    cout << "Como te llamas?: " << endl;
    cin >> nombre; //Guardamos el nombre en la variable

    //Mostramos un saludo
    cout << "Hola " << nombre << "Bienvenido al programa!" << endl;

    
    return 0; //Retorna 0 al sistema operativo, indicando que el programa se ejecuto correctamente
    //Fin del programa
}