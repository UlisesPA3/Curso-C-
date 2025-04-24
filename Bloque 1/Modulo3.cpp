/*
Operadores aritmeticos:
    +  suma
    -  resta
    *  multiplicacion
    /  division
    %  modulo (resto de la division entera)

    Operadores racionales:
    == igual
    != diferente
    >  mayor que
    <  menor que
    >= mayor o igual que
    <= menor o igual que

    Operadores logicos:
    &&  y logico (and)
    ||  o logico (or)
    !   no logico (not)
    */
#include <iostream>
using namespace std;

int main(){
   int a = 10, b=5;
   cout << a + b << endl; //Suma    
    cout << (a>b) << endl; //Mayor que (true)
    cout << (a>5 && b <10)<< endl; //And logico (true)

}