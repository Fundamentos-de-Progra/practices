# 🚆 Simulación del Viaje en la Línea 3 del Tren Ligero de Guadalajara

## 📌 Descripción del Problema

El objetivo de esta práctica es simular el viaje de una persona en la Línea 3 del Tren Ligero de Guadalajara. El usuario ingresará la estación en la que inicia su viaje y la estación en la que desea bajarse. El programa deberá simular el viaje avanzando de estación en estación, mostrando mensajes en pantalla y deteniéndose un tiempo específico en milisegundos para representar el traslado entre estaciones.

Para lograr esto, se deberán usar funciones como `delay()` o `pause()` para detener la ejecución del programa por el tiempo necesario entre cada estación.

## 🚉 Estaciones y Tiempos de Traslado

La siguiente tabla muestra cada estación y el tiempo estimado en milisegundos que tarda el tren en moverse a la siguiente estación:

| #  | Estación                     | Tiempo a la siguiente (ms) |
|----|------------------------------|---------------------------|
| 1  | Arcos de Zapopan             | 5000                      |
| 2  | Periférico Belenes           | 4500                      |
| 3  | Ángel Leaño                  | 4000                      |
| 4  | Dermatológico                | 3500                      |
| 5  | Ávila Camacho                | 3000                      |
| 6  | Plaza Patria                 | 4500                      |
| 7  | Circunvalación Country       | 5000                      |
| 8  | Ávila Camacho                | 4000                      |
| 9  | Independencia                | 3500                      |
| 10 | La Normal                    | 3000                      |
| 11 | Santuario                    | 4000                      |
| 12 | Guadalajara Centro           | 4500                      |
| 13 | Plaza Universidad            | 5000                      |
| 14 | Mexicaltzingo                | 3500                      |
| 15 | Washington                   | 3000                      |
| 16 | División del Norte           | 4000                      |
| 17 | Tlaquepaque Centro           | 4500                      |
| 18 | Revolución                   | 5000                      |
| 19 | Lázaro Cárdenas              | 3500                      |
| 20 | España                       | 3000                      |

## ✏️ Requisitos

1. Pedir al usuario su nombre, la estación de inicio y la estación de destino.
2. Validar que las estaciones ingresadas sean correctas.
3. Simular el viaje avanzando por cada estación intermedia.
4. Mostrar un mensaje cada vez que el tren llegue a una estación.
5. Utilizar `delay()` o `pause()` para detener el programa según los tiempos de la tabla.
6. Mostrar un mensaje al llegar a la estación de destino.

## 🔥 Ejemplo de Ejecución

Ingresa tu nombre de usuario: Juanito
¿En que estación inicias? (ingresa el numero de la estacion): 10
¿A que estacion te diriges?: 15
Se imprime todo el viaje, una vez finalizado el viaje el sistema te avisa que haz llegado y que si quieres bajar del tren, si si quieres salir el programa se despide y termina, sino entonces eliges un nuevo destino a donde ir.
