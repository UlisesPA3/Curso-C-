//Swich
#include <iostream>
using namespace std;

int main(){
    int opcion = 2;
    switch (opcion){
        case 1:
            cout << "Seleccionaste 1" << endl;
            break;
        case 2:
            cout << "Seleccionaste 2" << endl;
            break;
        case 3:
            cout << "Seleccionaste 3" << endl;
            break;
        default:
            cout << "Seleccionaste una opcion no valida" << endl;
    }

    char opcionChar = 'b';
    switch (opcionChar){
        case 'a':
            cout << "Seleccionaste a" << endl;
            break;
        case 'b':
            cout << "Seleccionaste b" << endl;
            break;
        case 'c':
            cout << "Seleccionaste c" << endl;
            break;
        default:
            cout << "Seleccionaste una opcion no valida" << endl;
    }

    int dia = 4;
    switch (dia){
        case 1: case 2: case 3: case 4: case 5:
            cout << "Dia laboral" << endl;
            break;
        case 6: case 7:
            cout << "Fin de semana" << endl;
            break;
        default:
            cout << "Dia no valido" << endl; 
}
return 0;
}