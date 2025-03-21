#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void mostrar_menu() {
    printf("\n🚆 Bienvenido a la simulación del Tren Ligero de Guadalajara - Línea 3\n");
}

int obtener_estacion(const char *mensaje, int total_estaciones) {
    int num;
    while (1) {
        printf("%s", mensaje);
        if (scanf("%d", &num) == 1 && num >= 1 && num <= total_estaciones) {
            return num;
        }
        printf("⚠️ Número de estación fuera de rango o inválido. Intenta de nuevo.\n");
        while (getchar() != '\n'); // Limpiar buffer
    }
}

void simular_viaje(const char *estaciones[], const int tiempos[], int inicio, int destino) {
    int paso = (inicio < destino) ? 1 : -1;
    
    printf("\n🚆 Iniciando el viaje desde: %s\n", estaciones[inicio - 1]);
    for (int i = inicio; i != destino; i += paso) {
        Sleep(tiempos[i - 1]);
        printf("📍 Llegando a estación: %s\n", estaciones[i]);
    }
    
    printf("\n🎉 Has llegado a tu destino: %s\n", estaciones[destino - 1]);
}

int main() {
    const char *estaciones[] = {
        "Arcos de Zapopan", "Periférico Belenes", "Ángel Leaño", "Dermatológico", "Ávila Camacho", "Plaza Patria",
        "Circunvalación Country", "Ávila Camacho", "Independencia", "La Normal", "Santuario", "Guadalajara Centro",
        "Plaza Universidad", "Mexicaltzingo", "Washington", "División del Norte", "Tlaquepaque Centro",
        "Revolución", "Lázaro Cárdenas", "España"
    };
    int tiempos[] = {5000, 4500, 4000, 3500, 3000, 4500, 5000, 4000, 3500, 3000, 4000, 4500, 5000, 3500, 3000, 4000, 4500, 5000, 3500, 3000};
    int total_estaciones = sizeof(estaciones) / sizeof(estaciones[0]);
    
    mostrar_menu();
    char usuario[50];
    printf("Ingresa tu nombre: ");
    scanf("%s", usuario);
    printf("\n👋 Hola, %s! Vamos a simular tu viaje.\n", usuario);
    
    while (1) {
        int inicio = obtener_estacion("¿En qué estación inicias? (número): ", total_estaciones);
        int destino = obtener_estacion("¿A qué estación te diriges? (número): ", total_estaciones);
        
        if (inicio == destino) {
            printf("⚠️ Ya estás en tu destino. Intenta de nuevo.\n");
            continue;
        }
        
        simular_viaje(estaciones, tiempos, inicio, destino);
        
        char opcion;
        printf("\n¿Quieres hacer otro viaje? (s/n): ");
        scanf(" %c", &opcion);
        if (opcion != 's' && opcion != 'S') {
            printf("👋 Gracias por usar la simulación del Tren Ligero. ¡Buen día!\n");
            break;
        }
    }
    
    return 0;
}

