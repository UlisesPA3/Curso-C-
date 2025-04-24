#include <iostream>
using namespace std;

int main(){
    //FOR:contar del 1 al 5
    cout << "Ciclo for: contar del 1 al 5\n";
    for (int i = 1; i <= 5; i++){
        cout << i << endl;
    }
cout<<endl;
    //for con continue: mostrar del 1 al 5, excepto el 3
    cout << "Ciclo for con continue: mostrar del 1 al 5, excepto el 3\n";
    for (int i = 1; i <= 5; i++){
        if (i == 3){
            continue; // Salta el número 3
        }
        cout << i << endl;
    }

    cout<<endl;

    //for con break: mostrar del 1 al 5, pero detenerse al llegar al 4
    cout << "Ciclo for con break: mostrar del 1 al 5, pero detenerse al llegar al 4\n";
    for (int i = 1; i <= 5; i++){
        if (i == 4){
            break; // Detiene el ciclo al llegar al número 4
        }
        cout << i << endl;
    }
    cout<<endl;
    //while: contar del 1 al 5
    cout << "Ciclo while: contar del 1 al 5\n";
    int j=1;
    while (j <= 5){
        cout << j << endl;
        j++;
    }
    cout<<endl;
    
    //while con break: deternese cuando el numeros sea igual a 3
    cout << "Ciclo while con break: detenerse cuando el número sea igual a 3\n";
    int k=1;
    while (k <= 5){
        if (k == 3){
            break; // Detiene el ciclo al llegar al número 3
        }
        cout << k << endl;
        k++;
    }
    cout<<endl;

    //do-while: contar del 1 al 5
    cout << "Ciclo do-while: contar del 1 al 5\n";
    int x=1;
    do {
        cout << x << endl;
        x++;
    } while (x <= 5);

    cout<<endl;

    // do while con continue: mostrar del 1 al 5, excepto el 3
    cout << "Ciclo do-while con continue: mostrar del 1 al 5, excepto el 3\n";
    int y=1;
    do {
        if (y == 3){
            y++; // Salta el número 3
            continue;
        }
        cout << y << endl;
        y++;
    } while (y <= 5);
}