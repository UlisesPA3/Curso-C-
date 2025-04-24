#include <iostream>
using namespace std;


int main(){
    int numeros[5]= {10,20,30,40,50};
    cout<< numeros[0] << endl; // Imprime 10

    numeros[2] =  100; // Modifica la tercera posicion

    int edades[3]; // Declaracion sin inicializar
    edades[0]= 18;
    edades[1]= 25;
    edades[2]= 30; // Inicializa el arreglo

    //Imprimir los valores del arreglo 'numeros'
    for(int i=0; i<5; i++){
        cout<< "Elemento " << i << " : "<< numeros [i] << endl;
    }

    //Tambien puedes declarar los arreglos de otros tipos:
    char vocales[5] = {'a', 'e', 'i', 'o', 'u'}; // Arreglo de caracteres
    bool respuestas[3] = {true, false, true};

    return 0;
}