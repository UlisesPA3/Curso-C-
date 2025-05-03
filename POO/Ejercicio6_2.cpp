//Ejercicio 2 Constructores y destructores

#include <iostream>
using namespace std;

//Clase Libro
class Libro{
public:
    string titulo;
    string autor;

    //Constructor
    Libro(string a, string b){
        titulo = a;
        autor = b;
        cout << "Constructor ejecutado para el libro: " << titulo << " y el autoor: " << autor << endl;
    }

    ~Libro(){
        cout << "Destructor llamado para el libro: " << titulo << " y el autor: " << autor << endl;
    }
};

int main(){
    Libro libro1("La pscicologia del dinero", "Morgan Housel");
    Libro libro2("El hombre en busca de sentido", "Victor Frankl");

    return 0;
}