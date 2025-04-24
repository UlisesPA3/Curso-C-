//Ejercio de operaciones matemáticas utilizando switch
#include<iostream>
using namespace std;

int main(){
    int num1, num2, resultado;
    char operacion;

    cout <<"Ingrese el primer numero:  "<< endl;
    cin >>  num1;
    cout << "Ingrese el segundo numero: "<< endl; 
    cin >> num2;
    cout << "Ingrese la operacion a realizar (+, -, *, /): "<< endl;
    cin >> operacion;

    switch(operacion){
        case '+':
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "La multiplicacion es: " << resultado << endl;
            break;
        case '/': 
            if(num2 != 0){
                resultado = num1 / num2;
                cout << "La division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero" << endl;
            }
            break;
        default:
            cout << "Operacion no valida" << endl;
    }
    cout<< "Desea realizar otra operacion? (s/n):" << endl;
    char respuesta;
    cin >> respuesta;
    if(respuesta == 's' || respuesta == 'S'){
        main(); // Llamada recursiva para reiniciar el programa
    } else {
        cout << "Gracias por usar la calculadora!" << endl;
    }
    return 0;

}