#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/**IMPUESTOS:
 *
 * Ayudar al usuario a determinar cuánto debe pagar de impuestos dependiendo de su salario.
 * Si el usuario gana mas de $30,000 va a pagar un impuersto de el 16%
 * Sino, va a pagar un impuesto del 8%
 */

int main()
{
    // Your code here

    int salario;
    salario=0;
    float impuesto=0;
    printf("Por favor, entra tu salario aqu%c", 161);
    scanf("%i", &salario);
    if (salario <30000) 
    {
        impuesto= salario *.16;
    }
    else
    {
        impuesto= salario *.08;
    }


    system("pause");
    return 0;
}