//40. Simular un semáforo con switch (colores: rojo, amarillo, verde).

#include <stdio.h>
#include <unistd.h> // Para sleep() en sistemas UNIX/Linux

int main() {
    int estado = 0;

    while (1) {  // Bucle infinito para simular el ciclo del semáforo
        switch (estado) {
            case 0:
                printf("🔴 ROJO - Alto\n");
                sleep(3); // Espera 3 segundos
                estado = 1;
                break;
            case 1:
                printf("🟡 AMARILLO - Precaución\n");
                sleep(1); // Espera 1 segundo
                estado = 2;
                break;
            case 2:
                printf("🟢 VERDE - Avance\n");
                sleep(3); // Espera 3 segundos
                estado = 0; // Vuelve al inicio del ciclo
                break;
            default:
                printf("Estado no válido\n");
                return 1;
        }
    }

    return 0;
}
