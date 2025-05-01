//Interadores
#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Declaramos un vector con algunos elementos enteros
    vector<int> numeros = {10, 20, 30};

    //
    //1. Iterador normal (lectura y escritura)
    //
    cout<< "Iterador normal (modificable): ";
    for(vector<int>::iterator it= numeros.begin(); it != numeros.end(); ++it){
        //El iterado apunta a cada elemento del vector
        cout << *it << " "; //Accedemos al valor usando '*'
    }
    cout << endl;

    //
    //2. Iterador usando 'auto' (mas legible)
    //
    cout<< "Iterador usando 'auto'(mas legible): ";
    for(auto it =  numeros .begin(); it != numeros.end(); ++it){
        //El iterado apunta a cada elemento del vector
        cout << *it << " "; //Accedemos al valor usando '*'
    }
    cout << endl;

    //
    //3. Iterador constante (solo lectura)
    //
    cout << "Iterador constante (solo lectura): ";
    for(vector<int>::const_iterator it = numeros.cbegin(); it != numeros.cend(); ++it){
        //El iterador NO permite mpodificar el valor
        cout << *it << " "; //Accedemos al valor usando '*'
    }
    cout << endl;

    //
    //4. Iterador reverso (de atras hacia adelante)
    //
    cout << "Iterador reverso (de atras hacia adelante): ";
    for(vector<int>::reverse_iterator rit = numeros.rbegin(); rit != numeros.rend(); ++rit){
        //El iterador apunta a cada elemento del vector
        cout << *rit << " "; //Accedemos al valor usando '*'
    }
    cout << endl;

    //
    //5. Iterador constante reverso (solo lectura, en reversa)
    //
    cout << "Interador constante reverso (solo lectura, en reversa): ";
    for(auto crit = numeros.crbegin(); crit != numeros.crend(); ++crit){
        //El iterador apunta a cada elemento del vector
        cout << *crit << " "; //Accedemos al valor usando '*'
    }
    cout << endl;

    return 0;
}