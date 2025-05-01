#include <iostream>
using namespace std;

//Funcion para llenar un arreglo dinamico con datos del usuario
void llenarArreglo(int* arr, int tam){
    for(int i = 0; i < tam; i++){
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
}

//Funcion para calcular el promedio de los elementos de un arreglo
float calcularPromedio(int* arr, int tam){
    int suma = 0;
    for(int i = 0; i < tam; i++){
        suma += arr[i];//Acumulamos tdoso los valores
    }
    return static_cast<float>(suma) / tam; //Devolvemos el promedio como float
}

//Funcion para encontrar el valor mas grande en un arreglo
int encontrarMayor(int* arr, int tam){
    int mayor = arr[0]; //Suponemos que el primero es el mayor
    for(int i = 0; i < tam; i++){
        if(arr[i] > mayor) mayor = arr[i];//Actualizamos si encontramos uno mayor
    }
    return mayor;
}

//Funcion para encontrar el valor mas pequeño en un arreglo
int encontrarMenor(int* arr, int tam){
    int menor = arr[0]; //Suponemos que el primero es el menor
    for(int i = 0; i < tam; i++){
        if(arr[i] < menor) menor = arr[i];//Actualizamos si encontramos uno menor
    }
    return menor;
}

int main(){
    int n;
    cout << "Cuantos elementos tendra el arreglo? ";
    cin >> n; //Leemos el tamaño del arreglo

    //Validamos que la cantidad ingresada sea valida
    if(n<=0) {
        cout<< "Cantidad invalida. " << endl;
        return 1; //Terminamos el programa si la cantidad es invalida 
    }

    //Reservamos memoria dinamica para n enteros
    int* numeros = new int[n];

    //Llenamos el arreglo con valores que ingresa el usuario
    llenarArreglo(numeros, n);

    //Mostrar las estadisticas calculadas
    cout << "El promedio es: " << calcularPromedio(numeros, n) << endl;
    cout << "El mayor es: " << encontrarMayor(numeros, n) << endl;
    cout << "El menor es: " << encontrarMenor(numeros, n) << endl;

    //Liberamos la memoria reservada dinamicamente
    delete [] numeros;
    numeros = nullptr; //Evitar puntero colgante

    return 0; //Fin del programa
}

/*
Haz que le programa repita el proceso hasta que el usuario decida salir.
Agrega validacion para evitar eerrores de entrada, como ingresar un valor no numerico o un numero negativo.
Implementa una funcion adicional para que ordene el arreglo antes de mostrarlo
*/