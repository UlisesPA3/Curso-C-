#include <iostream> 
using namespace std;

//Funcion definida antes del main
void saludar(){
    cout << "Hola desde una funcion"<< endl;
}
//Declaracion de la funcion antes del main
void imprimirMensaje();

int main(){
    saludar();
    saludar();

    imprimirMensaje(); 

    return 0;
}

//Definicion de la funcion despues del main
void imprimirMensaje(){
    cout << "Mensaje desde una funcion declarada" << endl;
}
