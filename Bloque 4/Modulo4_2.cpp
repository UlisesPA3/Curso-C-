//Memorias Dinamicas
#include <iostream>
using namespace std;

int main(){
    int* ptr = new int; // Reserva memoria para un entero
    *ptr = 42; // Asigna valor a la memoria reservada
    cout << "Valor: " << *ptr << endl; // Imprime 42

    delete ptr; // Libera la memoria reservada

    int* arreglo = new int[5]; // Reserva memoria para un arreglo de 5 enteros
    for (int i = 0; i < 5; i++){
        arreglo[i] = i * 1; // Asigna valores al arreglo
    }
    for (int i = 0; i < 5; i++){
        cout << arreglo[i] << " "; // Imprime los valores del arreglo
    }
    cout << endl;

    delete[] arreglo; // Libera la memoria del arreglo

    //Crea arreglo dinammico segun lo que indique el usuario
    int n;
    cout << "Cuantos elementos quieres en el arreglo?: ";
    cin >> n;
    int* arregloDinamico = new int[n]; // Reserva memoria para un arreglo de n enteros
    for (int i = 0; i < n; i++){
        arregloDinamico[i] = i * 2; // Asigna valores al arreglo
    }
    //uso de datos...
    delete[] arregloDinamico; // Libera la memoria del arreglo

    return 0;
}
/*
Errores communes:
No liberar la memoria (memory leak)
Usar delete en algo que no fue creado con new
Olvidar [] en delete[] cuando se libera un arreglo
Acceder a memoria luego de liberarla
*/
