#include <stdio.h>
#include <stdlib.h>

int main() {;
    char nombres[100][100];
    printf("Introduce tu nombre: ");
    gets(nombres[0]);
    fflush(stdin);
    printf("Ingresa otra vez tu nombre: ");
    gets(nombres[1]);
    fflush(stdin);
    printf("Hola chiquito %s\n", nombres[0]);
    printf("Hola %s\n", nombres[1]);
    system("pause");
    return 0;
}