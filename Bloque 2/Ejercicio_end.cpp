#include <iostream>
using namespace std;

int sumar(int a, int b) {return a + b;}
int restar(int a, int b) {return a - b;}
int multiplicar(int a, int b) {return a * b;}
int dividir(int a, int b){
    if(b!=0) return a / b;
    else{
        cout<< "Error: Division por cero" << endl;
        return 0;
    }
}

int main(){
    int opcion, num1, num2;

    do{
        cout<< "\nCalculdora:\n";
        cout<< "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir\n";
        cout<< "Elige una opcion: ";
        cin>> opcion;

        if(opcion >= 1 && opcion <= 4){
            cout<< "Ingrese dos numeros: ";
            cin>> num1 >> num2;
        }

        switch(opcion){
            case 1:
                cout<< "Resultado: " << sumar(num1, num2) << endl;
                break;
            case 2:
                cout<< "Resultado: " << restar(num1, num2) << endl;
                break;      
            case 3:
                cout<< "Resultado: " << multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout<< "Resultado: " << dividir(num1, num2) << endl;
                break;
            case 5:
                cout<< "Saliendo..." << endl;
                break;
            default:
                cout<< "Opcion invalida. Intente de nuevo." << endl;
                break;
        }
    } while(opcion !=5);

    return 0;
}

//Agrega una funcion de potencia (int base, int exponente) que calcule la potencia usando un bucle for.
//Agrega esta opcion al menu y llama a la funcion desde el switch.