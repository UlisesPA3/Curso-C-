#include <iostream>
using namespace std;

//Funcion que suma dos numeros
int suma(int a, int b){
    return a + b;
}
//Funcion que calcula el promnedio de 3 numeros
float promedio(float a, float b, float c){
    return (a+b+c)/3;
}

//Funcion que verifica si un numero es par
bool esPar(int numero){
    return numero % 2 == 0;
}

int main(){
    //Llamda de la funcion suma
    int resultado = suma(3,4);
    cout << "La suma de 3 y 4 es: " << resultado << endl;

    //Llamada de la funcion promedio
    float x = 10.2, y=5.8, z=6.0;
    cout<<"Promedio: " << promedio(x,y,z) << endl;

    //Llamda de la funcion esPar
    int n = 7;
    if(esPar(n)){
        cout<< n<< " es par "<< endl;
    }else{
        cout<< n << " es impar " << endl;
    }
    return 0;
}