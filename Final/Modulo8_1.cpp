//Proyecto: Sistema Gestion de estudiantes
#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>
using namespace std;

//Clase Estudiante con encapsulacion de nombre y calificaciones
class Estudiante{
private:
    string nombre;
    vector <float> calificaciones;

    public:
        Estudiante (string n) : nombre(n){}

        void agregarCalificaciones(float calif){
            if(calif < 0 || calif > 100)
                throw invalid_argument("La calificacion debe estar entre 0 y 100.");
            calificaciones.push_back(calif);
        }

        float promedio() const{
            if(calificaciones.empty()) return 0.0;
            float suma = 0;
            for (float c : calificaciones) suma += c;
            return suma / calificaciones.size(); 
        }

        void mostrarInfo() const{
            cout << "Estudiante: " << nombre << endl;
            cout << "Calificaciones:  ";
            for(float c : calificaciones) cout << c << " ";
            cout << "\nPromedio: " << promedio() << "\n" << endl;
        }

        string getNombre() const{
            return nombre;
        }

        //Funcion para leer una calificacion valida del usuario
        float leerCalificacion(){
            float calif;
            cout << "Ingrese una calificacion (0-100): ";
            cin >> calif;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                throw invalid_argument("Entrada invalida, no es un numero");
            }
            return calif;
        }

        //Funcion para registrar calificaciones dinamicamente
        void registrarCalificaciones(Estudiante* est){
            int cantidad;
            cout << "Cuantas calificaciones deseas ingresar para " << est->getNombre() << "?: ";
            cin >> cantidad;

            if(cin.fail() || cantidad <= 0){
                throw invalid_argument("Cantidad invalida");
            }

            for(int i = 0; i < cantidad; ++i){
                try{
                    float c = leerCalificacion();
                    est->agregarCalificaciones(c);
                }catch(const exception& e){
                    cout << "Error: " << e.what() << endl;
                    --i; // repetir este intento
                }
            }
        }
    };

        int main() {
            int cantidadEstudiantes;
            cout<< "Cuantos estudiantes deseas registrar?: ";
            cin >> cantidadEstudiantes;

            if(cin.fail() || cantidadEstudiantes <= 0) {
                cout << "Numero invalido de estudiantes." << endl;
                return 1;
            }

            //Memoria dinamica con punteros a estudiantes
            vector<Estudiante*> estudiantes;

            for(int i = 0; i < cantidadEstudiantes; ++i){
                string nombre;
                cout << "\nNombre del estudiante #" << (i + 1) << ": ";
                cin >> ws; //Limpia espacios en blanco
                getline(cin, nombre);

                Estudiante* nuevo = new Estudiante(nombre);
                try{
                    nuevo->registrarCalificaciones(nuevo);
                    estudiantes.push_back(nuevo);
                }catch (const exception& e){
                    cout << "Error al registrar calificaciones: " << e.what() << endl;
                    delete nuevo;
                    --i;
                }
            }

            cout << "\n=== Lista de estudiantes y promedios ===\n" << endl;
            for(const auto& est : estudiantes){
                est->mostrarInfo();
            }
            //Liberar memoria
            for(auto e : estudiantes){
                delete e;
            }
            return 0;
        }

