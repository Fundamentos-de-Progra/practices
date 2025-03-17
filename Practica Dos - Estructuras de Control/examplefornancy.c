#include <stdio.h>
#include <stdlib.h>

// Programa para decirle al usuario si un año es bisiesto o no

void determinarBisiesto(char nombreUser[20]) {
    int anito = 0;
    printf("\t\t\tHola %s esto es: SABER SI TU A%cO ES BISIESTO O NO\n\n", nombreUser, 165);
    printf("Ingresa el a%co que quieras saber: ", 164); 
    scanf("%i", &anito); // aqui usuario empieza a ingresar el valor y al dar enter termina de ejecutarse scanf
    if(anito % 4 == 0) 
    {
        printf("\nTu a%co ingresado si es bisiesto Yei yei :)\n", 164);
    } 
    else
    {
        printf("\nTu a%co ingresado no es bisiesto u.u \n", 164);
    }
    system("pause");
}

int main() {
    char nombreUsuario[20];
    printf("Ingresa tu nombre: ");
    gets(nombreUsuario);
    system("cls");
    determinarBisiesto(nombreUsuario);
    return 0;
}