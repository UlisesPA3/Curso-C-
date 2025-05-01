//3. Liskov Substitution Principle (LSP)

#include <iostream>
using namespace std;

int sumarUno(int x){ return x + 1;}
int restarUno(int x){ return x - 1;}

//Esta funcion puede recibir cualquier operacion que reciba un entero y devuelva un entero
int aplicar(int valor, int (*operacion)(int)){
    return operacion(valor);
}

int main(){
    cout << aplicar(5, sumarUno) << endl;
    cout << aplicar(5, restarUno) << endl;

    return 0;
}

