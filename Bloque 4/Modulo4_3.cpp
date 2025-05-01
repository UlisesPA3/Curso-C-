/*
Buenas practicas escenciales para gestionar la memoria dinamica en C++

. Inicializa tus punteros. Si no los vas a usar aun, ponles nullptr
.Siempre libera la memoria que reserves con delete o delete[]
.Despues de liberar, asigna el puntero a nullptr para evitar accesos accidentales
.Nunca uses memoria despues de haberla liberado.
.Si una funcion recibe un puntero, valida que no sea nullptr antes de usarlo.
.Y si estas usando C++ moderno, considera los punteros inteligentes como std:unique_ptr y std::shared_ptr, 
que liberan la memoria automaticamente
*/

#include <iostream>
using namespace std;

//Funcion para liberar memoria dinamica y evitar acceso accidental
void liberar(int*& ptr) {
    delete ptr; // Libera la memoria
    ptr = nullptr; // Asigna nullptr para evitar acceso accidental
}

int main(){
    //Reserva memoria dinamica para 10 enteros
    int* datos = new int[10]; // Reserva memoria para un arreglo de 10 enteros

    //Inicilizar los datos con valores de ejemplo
    for(int i = 0; i < 10; i++){
        datos[i] = i + 1; // Asigna valores al arreglo
    }

    //Mostrar el primer elmento del arreglo
    cout << "Primer elemento: " << datos[0] << endl; // Imprime el primer elemento

    //Validar que el puntero no sea nullptr antes de usarlo
    if(datos != nullptr){
        cout << "Segundo elemento: " << datos[1] << endl;
    }

    //Liberar la memoria usando la funcion
    liberar(datos); // Libera la memoria y asigna nullptr

    //Verificar que el puntero haya sido puesto en nullptr
    if(datos == nullptr){
        cout << "Memoria liberada y puntero puesto en nullptr." << endl; // Imprime mensaje de confirmacion
    } else {
        cout << "Error: Memoria no liberada correctamente." << endl; // Imprime mensaje de error
    }
}