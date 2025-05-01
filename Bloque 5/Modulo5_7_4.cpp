//4.Interface Segregation Principle (ISP)

#include <iostream>
using namespace std;

int leerEntrada(){
    int x;
    cout << "Ingrese un numero: ";
    cin >> x;
    return x;
}

bool esPar(int n){
    return n % 2 == 0;
}

void mostrarResultado(bool resultado){
    if(resultado) cout << "El numero es par." << endl;
    else cout << "El numero es impar." << endl;
}

int main(){
    int num = leerEntrada(); // Se lee el numero
    bool resultado = esPar(num); //Se encarga solo de calcular
    mostrarResultado(resultado); // Se encarga solo de mostrar
    return 0;
}