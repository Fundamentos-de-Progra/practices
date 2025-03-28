#include <stdio.h>
#include <windows.h>
#include <math.h>

void agregarTriangulo()
{
    char caracter = ' ';
    int altura = 0;
    int espacios = 0;
    int enmedio = 0;

    printf("ingrese el caracter que vas imprimir: ");
    caracter = getchar();
    printf("ingrese la altura del triangulo: ");
    scanf("%i", &altura);
    printf("\n\n----------------------------------------");
    espacios = altura + (altura -1);
    enmedio = round(espacios/2);
    for (int contadorFilas = 1; contadorFilas <= altura; contadorFilas++)
    {
        /* code */
        printf("\n");
        for (int contadorEspacios = 1; contadorEspacios <= espacios; contadorEspacios++)
        {
            /* code */
            if (contadorEspacios<(enmedio-(contadorFilas-1)) || contadorEspacios>(enmedio+(contadorFilas-1)))
            {
                /* code */
                printf(" ");
            }
            else {
                printf("%c", caracter);
            }
        }
        
    }
    printf("\n\n----------------------------------------");
    system("pause");
} 




int main(int argc, char const *argv[])
{
    /* code */
    agregarTriangulo();
    return 0;
}
