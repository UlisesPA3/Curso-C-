//Buenas practicas
#include <iostream>
using namespace std;

//Calcula el IVA (16%) de un monto dado
float calcularIVA(float montoBase){
    return montoBase * 0.16;
}

//Calcular el total con IVA incluido
float calcularTotalConIVA(float precioBase){
    return precioBase + calcularIVA(precioBase);
}

//Muestra el resultado final con formato
void imprimirTotal(float total){
    cout << "El total con IVA incluido es: " << total << endl;
}

int main (){
    //Entrada clarament nombradas
    float precioProducto = 150.0f; //en lugar de x

    //Proceso modular y facil de entender
    float totalConIVA = calcularTotalConIVA(precioProducto); //en lugar de y

    //Salida clara y bien formateada
    imprimirTotal(totalConIVA); //en lugar de z

    return 0;
}
