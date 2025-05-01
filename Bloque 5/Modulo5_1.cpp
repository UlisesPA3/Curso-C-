//Introducciuon a STL
#include <iostream>     //Entrada y salida estandar
#include <vector>      //Para usar vectores
#include <string>      //Para usar cadenas de caracteres
#include <algorithm>  //Para usar algoritmos como sort y find
#include <map>        //Para usar mapas (diccionarios)
#include <functional> //Para usar funciones como std::greater y std::less

using namespace std; //Usamos el espacio de nombres estandar para evitar escribir std:: cada vez

int main(){
    //
    //Vector: Crear y mostrar
    //
    vector<int> numeros = {3, 1, 4, 2};
    numeros.push_back(5); //Agregamos un elemento

    cout << "Elemntos del vector: ";
    for(int i : numeros){
        cout << i << " "; //Mostramos los elementos del vector
    }
    cout << endl;

    //Ejemplo adicional: llenar un vector con los datos del usuario
    int cantidad;
    cout << "\nCuantos elementos tendra el vector? ";
    cin >> cantidad;

    vector<int> datos;
    for (int i = 0; i < cantidad; i++){
        int num;
        cout << "Numero " << i+1 << ": ";
        cin >> num;
        datos.push_back(num); //Agregamos el numero al vector
    }

    cout << "Elementos del vector: ";
    for(int n : datos){
        cout << n << " "; //Mostramos los elementos del vector
    }
    cout << endl;

 //
 // STRING: Concatenacion y recorrido
 //
string mensaje = "Hola";
mensaje += " Mundo"; //Concatenamos cadenas
cout << "\nMensaje: "<< mensaje << endl;

 //Recorre caracter por caracter
cout<< "Caracteres del mensaje: ";
for(char c: mensaje){
    cout << "[" << c << "] "; //Mostramos cada caracter
}
cout << endl;

//
//MAP:Clave- valor con verificacion
//
map<string, int> edades;
edades["Ana"] = 25;
edades["Luis"] = 30;

cout << "\nEdades de Ana: " << edades["Ana"] << endl;

//Recorrer todas las entradas
cout<< "Todas las edad: \n";
for(const auto& par :edades){
    cout << par.first << ": " << par.second << " anios.\n"; //Mostramos cada clave y su valor
}
//Verifdicamos si una clave existe
string buscando = "Carlos";
if(edades.find(buscando)!= edades.end()){
    cout << buscando << " tiene " << edades[buscando] << " anios.\n";
}else {
    cout << buscando << "no esta en el mapa" << endl;
}

//
//ALGORITMOS: Ordenar vectores
//
vector<int> v = {5, 3, 1, 4, 2};

//Orden ascendete
sort(v.begin(), v.end()); //Ordenamos el vector de menor a mayor
cout << "\nVector ordenado ascendente: ";
for(int i : v) cout << i << " ";
cout << endl;

return 0;
}

/*
*/
