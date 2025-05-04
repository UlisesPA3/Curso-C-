//Ejercicio de getters y setters, Modulo(3)
#include <iostream>
using namespace std;

class Empleado{
private:
    double sueldo;

public:
    void setSueldo(double s){
        if(s >= 0){
            sueldo = s;
        }else{
            cout<< "Error: El sueldo no puede ser negativo." << endl;
        }
    }

    double getSueldo(){
        return sueldo;
    }
};

int main(){

    Empleado empleado1;
    empleado1.setSueldo(5000); // Asignamos sueldo valido
    cout << "Sueldo del empleado: " << empleado1.getSueldo() << endl;
}