#include <stdio.h>

// Promediar la estatura de 20 alumnos de primaria. Solo ingresar la estatura en cms

int main() {
    int cantidad = 0;
    //int estatura_alumnos[20];
    int sum_estaturas = 0;
    float promedio = 0;
    printf("Ingresa la cantidad de alumnos: ");
    scanf("%i", &cantidad);
    int estatura_alumnos[cantidad];
    for(int contador=0; contador < cantidad; contador++){
        printf("Ingresa la estatura #%i: ", contador+1);
        scanf("%i", &estatura_alumnos[contador]);
        printf("\n");
    }
    printf("\n\n --__ ");
    for (int i = 0; i<cantidad; i++) {
        printf("%i ", estatura_alumnos[i]);
        sum_estaturas = sum_estaturas + estatura_alumnos[i];
    }
    promedio = sum_estaturas / cantidad;
    printf(" __-- \n\nEl promedio es: %f", promedio);
    printf("\n");
    system("pause");
    return 0;
}

// VECTOR / ARREGLO
/**
 * Es una variable multidimensional que almacena en multiples espacios de memoria diferentes valores
*/