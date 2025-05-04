//Encapsulamiento, getters y setters
#include <iostream>
using namespace std;

//Clase CuentaBancaria con encapsulamiento
class CuentaBancaria{
private:
    double saldo; //atributo privado: no se puede acceder directamente desde afuera

public:
    //Setter: permite modificar el saldo de forma controlada
    void setSaldo(double s){
        if(s >= 0){
            saldo = s;
        }else {
            cout << "Error: El saldo no puede ser negativo." << endl;  
        }
    }

    //Getter: permite acceder al saldo de forma segura
    double getSaldo(){
        return saldo;
    }
};

//Clase Estudiante con validacion en el setter
class Estudiante{
private: 
    int calificacion; //atributo privado: protegemos el dato

public:
    //Setter con validacin: solo permite calificaciones validas
    void setCalificacion(int c){
        if(c >= 0 && c <= 100){
            calificacion = c;
        }else{
            cout << "Error: Calificacion no valida. Debe estar entre 0 y 100." << endl;
        }
    }

    //Getter: retorna la calificacion actual
    int getCalififcacion(){
        return calificacion;
    }
};

int main(){
    cout << "Ejemplo de Cuenta Bancaria" << endl;
    
    CuentaBancaria cuenta;
    cuenta.setSaldo(1500); // Asignamos saldo valido
    cout << "Saldo actual: " << cuenta.getSaldo() << endl;

    cuenta.setSaldo(-300); // Intentamos asignar saldo invalido

    cout << "\n ==Ejemplo de estudiante==" << endl;
    Estudiante estudiante;

    estudiante.setCalificacion(85); // Asignamos calificacion valida
    cout << "Calificacion: " << estudiante.getCalififcacion() << endl;

    estudiante.setCalificacion(110); // Intentamos asignar calificacion invalida

    return 0;
}