#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Variable y funciones
//Este tiene coppia de numeroChido
/**void notOverridenNumber(int numero) {
    numero = 10;
    printf("El numero es: %i\n", numero);
}**/

//Aqui usamos numero chido pero con un apodo "numero"
/**void overrideNumber(int *numero) {
    *numero = 10;
    printf("El numero es: %i\n", *numero);
}**/

/**int main() {
    int numeroChido = 5;
    //notOverridenNumber(numeroChido);
    overrideNumber(&numeroChido);
    printf("El numero chido es: %i\n", numeroChido);
    system("pause");
    return 0;
}**/

//PRACTICA EN CLASE:
void areaTriangulo() {
    float base=0, altura=0, area=0;
    printf("Escribe el valor de la base: ");
    scanf("%f", &base);
    printf("Escribe el valor de la altura: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("Tu area es: %f\n\n", area);
    system("pause");
}

int main() {
    areaTriangulo();
    return 0;
}

