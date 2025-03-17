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

// Programa que saluda a una personita segun un menu
void saludarPersonita(char nombreUser[20]) {
    int opcion = 0;
    printf("\t\t\tHola %s esto es: SALUDAR A UNA PERSONITA\n\n", nombreUser);
    printf("Ingresa el numero de la opcion que quieres hacer: \n\t1-.) Saludar a Laura \n\t2-.) Saludar a Carlos \n\t3-.) Saludar a Victoria \n\t4-.) Saludar a Lic. Espinoza uwu \n\t5-.) Saludar a Noe\n\nTu opcion: ");
    scanf("%i", &opcion);
    switch (opcion)
    {
        case 1:
            printf("\n\n**** Holi Laura uwu ****");
            break;
        case 2:
            printf("\n\n**** Holi Carlos uwu ****");
            break;
        case 3:
            printf("\n\n**** Holi Victoria n.n/ ****");
            break;
        case 4:
            printf("\n\n**** Holi Lic. Espinoza :D ****");
            break;
        case 5:
            printf("\n\n**** Holi Noe (Don Nancy <333) ****");
            break;
        default:
            printf("\n\nopcion invalida u.u");
            break;
    }
    printf("\n");
    system("pause");
}

// El programa principal ahora nos dara la capacidad de seleccionar que programa ejecutar.

int main() {
    char nombreUsuario[20];
    int opc_main = 0;
    printf("Ingresa tu nombre: ");
    gets(nombreUsuario);
    printf("\n\n\t\t****_____-- Bienvenido %s --____****\n\n", nombreUsuario);
    while (opc_main != 3 )
    {
        /* code */
        printf("\nIngresa una opcion para: \n\t1-. Ejecutar a%co bisiesto \n\t2-. Ejecutar saludar a personitas \n\t3-. Salir", 164);
        printf("\ntu opcion: ");
        scanf("%i", &opc_main);
        switch (opc_main)
        {
            case 1:
                system("cls");
                determinarBisiesto(nombreUsuario);
                system("cls");
                break;
            case 2:
                system("cls");
                saludarPersonita(nombreUsuario);
                system("cls");
                break;
            case 3:
                printf("\n\nGracias por usarme uwu\n");
                break;
            default:
                printf("\nopcion invalida u.u");
                break;
        }
    }
    system("pause");
    return 0;
}