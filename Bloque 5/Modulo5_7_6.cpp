//6. RAII (Resource Acquisition Is Initialization)

#include <fstream>
using namespace std;

void guardarDatos(){
    ofstream archivo("datos.txt"); // Se abre el archivo
    archivo << "Texto guardado automaticamente. \n";
    //Al terminar la funcion, el archivo se cierra solo
}

int main(){
    guardarDatos(); // Se guarda el texto en el archivo
    // No es necesario cerrar el archivo manualmente
    return 0;
}