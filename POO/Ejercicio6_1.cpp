#include <iostream>
using namespace std;

class Auto{
    public:
        string marca;
        string modelo;
        int anio;

        void mostrarInfo(){
            cout << "Marca: " << marca << ", Modelo: " << modelo << ", Anio: " << anio << endl;

        }
};

int main(){
    Auto auto1;
    auto1.marca = "Uaudi";
    auto1.modelo = "A5";
    auto1.anio = 2020;
    auto1.mostrarInfo();

    Auto auto2;
    auto2.marca = "Honda";
    auto2.modelo = "Civic";
    auto2.anio = 2022;
    auto2.mostrarInfo();
}
