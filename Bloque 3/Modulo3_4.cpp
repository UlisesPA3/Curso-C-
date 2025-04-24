//Punteros
#include <iostream> 
using namespace std;

int main(){
    int x = 10;
    int* p = &x; // p es un puntero que apunta a la dirección de memoria de x
    cout << *p << endl; // Imprime 10

    *p = 25;
    cout<< x << endl; // Imprime 25


    //Puntero char
    char letra = 'A';
    char* ptr = &letra; // ptr es un puntero que apunta a la dirección de memoria de letra
    cout << *ptr << endl; // Imprime A

    //Punters y arreglos 
    int nums[] = {5, 10, 15};
    int* ptr2 = nums;
    cout<< *(ptr2 + 2) << endl; // Imprime 10

    return 0;
} 