#include<iostream>
#include<stdexcept>
#include<limits>    //Para limpiar el buffer de entrada en caso de error

using namespace std;

//Funcion que solicita al usurio un numero positivo y valida la entrada
int solicitaNumeroPositivo(){
    int numero;

    cout << "Ingresa un numero positivo: ";
    cin >> numero;

    //Verificar si la entrada no fue numerica
    if(cin.fail()){
        cin.clear(); //Limpia el estado de error de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Descarta el resto de la linea

        //Lnzamos una excepecion especifica si la entrada no fue valida
        throw invalid_argument ("Entrada no valida. Debe ser un numero entero positivo.");
    }
    //Verifcar si el numero es negativo
    if(numero < 0){
        //Usamos runtime_error para indicar un error logico en el valor
        throw runtime_error("Error: el numero no puede ser negativo");
    }
    //Si todo es correwcto, devolvemos el numero
    return numero;
}

int main(){
    try{
        //Lamamos a la funcion que podria lanzar una excepcion 
        int resultado = solicitaNumeroPositivo();

        //Sino hubo errores, mostramos el numero ingresado
        cout << "Numero ingresado correctamnete : " << resultado << endl;

    }catch(const invalid_argument& e){
        //Capturamos errores de entrada  no numerica
        cout << "Excepcion de argumento invalido: " << e.what() << endl;
    } catch (const runtime_error& e){
        //Capturamos errores de numero negativo
        cout << "Excepcion de ejecucion: " << e.what() << endl;
    }catch(const exception& e){
        //Capturamos cualquier otra excepcion estandar
        cout << "Error no esperado: " << e.what() << endl;
    }
    return 0;
    //Fin del programa
}