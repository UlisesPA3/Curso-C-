#include <iostream>
using namespace std;

void duplicarElementos(int* arr, int tam){
    for(int i = 0; i < tam; i++){
        arr[i] *= 2; // Duplicar el valor del elemento
    }
}

int main (){
    int numeros[] = {1, 2, 3, 4, 5};
    duplicarElementos(numeros, 5);
    for(int i = 0; i < 5; i++){
        cout << numeros[i] << " "; // Imprime 2 4 6 8 10
    }
    return 0;
}

//Tambien podemos manipular cadenas con punteros:

void mostrarLetras(const char* str){
    while(*str != '\0'){ // Mientras no lleguemos al final de la cadena
        cout << *str << endl; // Imprime cada letra
        str++; // Avanza al siguiente caracter
    }
}  

