//5.Dependency Inversion Principle (DIP)
#include <iostream>
using namespace std;

int sumar(int a, int b){return a +b;}
int multiplicar (int a, int b) {return a * b;}

int operar(int a, int b, int (*op)(int, int)){
    return op(a, b); //Usa la funcion que se le pase como argumento
}

int main(){
    cout << operar(5, 3, sumar) << endl;
    cout << operar(5, 3, multiplicar) << endl;
    return 0;
}