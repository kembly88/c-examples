#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;

    // Llama a las funciones existentes 
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    v = funcion5(10); //Llama a la funcion 5

    // Imprime los valores
    printf("v = %d\n", v);

    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");     
int y = x + 2;
    return y;

} 
 // funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion4(int x) {
    printf("En funcion4()...\n");     
int y = x - 2; //Resta en lugar de suma
    return y;
} 

// funcion5(): Retorna el valor que recibió como argumento incrementado en un número diferente de 2
int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 5; // Cambia el número que se suma a x
    return y;
}
