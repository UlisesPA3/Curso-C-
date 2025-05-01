//7.Singleton (version funcional)

#include <iostream>
using namespace std;

int& obtenerContadorGlobal(){
    static int contador = 0; //solo se crea una vez
    return contador; //devuelve la referencia al contador
}


int main(){
    obtenerContadorGlobal()++; //Icrementa el contador
    cout << "Contador: " << obtenerContadorGlobal() << endl;

    obtenerContadorGlobal()++;
    cout << "Contador actualizado: " << obtenerContadorGlobal() << endl;

    return 0;
}