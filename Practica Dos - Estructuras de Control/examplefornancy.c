#include <stdio.h>
#include <stdlib.h>

// Programa para decirle al usuario si un año es bisiesto o no

void determinarBisiesto() {
    int anito = 0;
    printf("\t\t\tSABER SI TU AÑO ES BISIESTO O NO\n\n");
    printf("Ingresa el año que quieras saber: "); 
    scanf("%i", &anito); // aqui usuario empieza a ingresar el valor y al dar enter termina de ejecutarse scanf
    if(anito % 4 == 0) 
    {
        printf("\nTu año ingresado si es bisiesto Yei yei :)\n");
    } 
    else
    {
        printf("\nTu año ingresado no es bisiesto u.u \n");
    }
    system("pause");
}

int main() {
    determinarBisiesto();
    return 0;
}