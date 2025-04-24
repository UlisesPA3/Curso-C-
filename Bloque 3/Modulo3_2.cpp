#include <iostream>
using namespace std;

int main(){
    int matriz [3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < 3; i++){//i=
        for (int j =0; j <3 ; j++){//j=
            cout << matriz[i][j]<< " "; 
        }
        cout << endl;
    }
    //0,0
    //0,1
    //0,2
    //salto de linea
    //1,0
    //1,1
    

    matriz[1][2] = 100;

    //Sumar todos los elementos de una matriz
    int suma = 0;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j<3; j++){
            suma += matriz[i][j];
        }
    }
    cout << "La suma de todos los elementos es: " << suma << endl;
    return 0;
}