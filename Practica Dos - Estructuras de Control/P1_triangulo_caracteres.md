# Generación de un Triángulo con Caracteres

## Descripción del Algoritmo
El programa debe solicitar al usuario dos entradas:
1. Un carácter que se utilizará para construir el triángulo.
2. Un número entero que representará la altura del triángulo (es decir, el número de filas).

El programa generará un triángulo alineado a la izquierda, donde cada fila contiene un número creciente de caracteres, comenzando con uno en la primera fila y aumentando hasta alcanzar la altura especificada.

## Ejemplo de Ejecución
Entrada del usuario:
```
Ingrese un carácter: *
Ingrese la altura del triángulo: 5
```

Salida esperada:
```
    *  
   ***
  *****
 *******
*********
```

## Pistas para Implementarlo
1. Usa un bucle `for` o `while` para iterar desde 1 hasta el número de filas ingresado por el usuario.
2. Nota el patrón de caracteres de cada una de las filas dependiendo el número de filas.
    - Por ejemplo, en la fila 3, imprime el carácter 5 veces.
3. Asegúrate de validar las entradas del usuario para evitar errores (por ejemplo, que la altura sea un número entero positivo).

¡Intenta implementarlo y prueba diferentes caracteres y alturas!