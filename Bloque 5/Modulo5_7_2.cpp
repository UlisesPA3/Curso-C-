//2.Open/Closed Principe (OCP)

#include <iostream>
using namespace std;

int cuadrado (int x){
    return x*x;
}

int doble (int x){
    return x * 2;
}

//Esta fucnion puede aplicar cualqiier operacion que se le pase
int aplicarOperacion(int valor, int(*op)(int)){
    return op(valor);
}

int main(){
    cout << aplicarOperacion(4, cuadrado) << endl;
    cout << aplicarOperacion(4, doble) << endl;
    return 0;
}
