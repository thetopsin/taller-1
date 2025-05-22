#include <stdio.h>

int main() {
    int hora = 0, minutos = 0, minuto2, domingo, costo = 0;
    int dolar = 0;
    char patente[6];
    char nombre[100];

    // Loop para validar entrada del usuario
    printf("¿Cual es su nombre?: ");
    scanf("%100s", nombre);
    printf("Ingrese la patente de su vehiculo: ");
    scanf("%6s", patente);
    while (domingo != 1 && domingo != 2) {
        printf("¿Es domingo? \n[1] Sí\n[2] No\nOpción: ");
        scanf("%d", &domingo);
        if (domingo == 1) {
            // Es domingo
            printf("¿Cuántos minutos estuvo estacionado?\n");
            scanf("%d", &minutos);

            if (minutos <= 10) {
                costo = 0;
            } else if (minutos <= 25) {
                costo = 3;
            } else if (minutos <= 60) {
                costo = 10;
            } else {
                int horas_completas = (minutos - 60 + 59) / 60; // Redondeo a la hora completa
                costo = 10 + (horas_completas * 5);
            }

            if (minutos >= 60) {
                hora = minutos / 60;
                minutos -= 60 * hora;
            }
            //descuento 10% por dia domingo
            costo -=costo *0.1;

            char descuento[3] = "si";

            printf("------------------------------------------------------\n");
            printf("|             PARKING 'DONCELLA DE HIERRO'           |\n");
            printf("| BOLETA DE ESTACIONAMIENTOPARQUE DONCELLA DE HIERRO |\n");
            printf("------------------------------------------------------\n");
            printf("| Nombre del cliente: %s\n",nombre);
            printf("| Patente del cliente: %s\n", patente);
            printf("| Horas: %d\n", hora);
            printf("| Minutos: %d\n", minutos);
            printf("| Monto: $%d\n", costo);
            printf("| Aplica descuento: %s\n", descuento);
            printf("------------------------------------------------------\n");

        } else if (domingo == 2) {
            // No es domingo
            printf("¿Cuántos minutos estuvo estacionado?\n");
            scanf("%d", &minutos);

            if (minutos <= 10) {
                costo = 0;
            } else if (minutos <= 25) {
                costo = 3;
            } else if (minutos <= 60) {
                costo = 10;
            } else {
                int horas_completas = (minutos - 60 + 59) / 60; // Redondeo a la hora completa
                costo = 10 + (horas_completas * 5);
            }
            char descuento[3] = "no";
            if (minutos >= 60) {
                hora = minutos / 60;
                minutos -= 60 * hora;
            }

            printf("--------------------------------------------\n");
            printf("|       PARKING 'DONCELLA DE HIERRO'       |\n");
            printf("|        BOLETA DE ESTACIONAMIENTO         |\n");
            printf("--------------------------------------------\n");
            printf("| Nombre del cliente: %s\n",nombre);
            printf("| Patente del cliente: %s\n", patente);
            printf("| Horas: %d\n", hora);
            printf("| Minutos: %d\n", minutos);
            printf("| Monto: $%d\n", costo);
            printf("| Aplica descuento: %s\n", descuento);
            printf("-----------------------------------------------\n");

        } else {
            // Entrada inválida
            printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
            printf("XX    Ingrese una opción válida    XX\n");
            printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
        }
    }

    return 0;
}
