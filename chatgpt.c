#include <stdio.h>

int main() {
    int minutos, total_dia = 0, opcion, dia_es_domingo;
    int historico_mes = 0;

    do {
        printf("\nIngrese el tiempo de uso del estacionamiento (en minutos): ");
        scanf("%d", &minutos);

        printf("¿Es domingo? (1 para sí, 0 para no): ");
        scanf("%d", &dia_es_domingo);

        int costo = 0;

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

        if (dia_es_domingo) {
            costo -= costo * 0.1; // Descuento del 10%
        }

        printf("Horas/min: %d | $ a pagar: $%d\n", minutos, costo);

        total_dia += costo;
        historico_mes += costo;

        printf("\n¿Desea registrar otro uso? (1 para sí, 0 para no): ");
        scanf("%d", &opcion);

    } while (opcion == 1);

    printf("\nResumen del día: $%d\n", total_dia);
    printf("Histórico del mes: $%d\n", historico_mes);

    return 0;
}
