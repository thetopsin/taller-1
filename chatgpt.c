#include <stdio.h>

double raizCuadrada(double n) {
    double x = n;
    double y = 1;
    double e = 0.00001;

    while (x - y > e || y - x > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double promedio, suma = 0, suma_cuadrados = 0, mayor, menor, d_estandar, num;
    int ingresos = 0, s = 0, res_scanf;
    mayor = 0;
    menor = 8;

    printf("Ingrese valores entre 1 y 7. Ingrese 0 para finalizar:\n");
    while (s != 1) {
        printf("Valor #%d: ", ingresos + 1);
        res_scanf = scanf("%lf", &num);

        if (res_scanf == 1) {
            // Finaliza si el número es 0
            if (num == 0) {
                s = 1;
                printf("\n------Ingreso de datos finalizado------\n");
            } else if (num > 0 && num <= 7) {
                // Proceso si es un número válido
                printf("El numero ingresado es: %.1lf\n", num);
                suma += num;
                suma_cuadrados += num * num;
                ingresos++;

                if (num > mayor) {
                    mayor = num;
                }
                if (num < menor) {
                    menor = num;
                }
            } else {
                printf("\nXXXXX ERROR AL INGRESAR (DATO NO VALIDO) XXXXX\n");
                while (getchar() != '\n'); // Limpia el buffer
            }
        } else {
            printf("\nXXXXX ERROR AL INGRESAR (DATO NO VALIDO) XXXXX\n");
            while (getchar() != '\n'); // Limpia el buffer
        }
    }

    if (ingresos > 0) {
        promedio = suma / ingresos;
        double varianza = (suma_cuadrados / ingresos) - (promedio * promedio);
        d_estandar = raizCuadrada(varianza);

        printf("\nResultados finales:\n");
        printf("Promedio: %.3f\n", promedio);
        printf("Desviacion estandar: %f\n", d_estandar);
        printf("Cantidad de valores ingresados: %d\n", ingresos);
        printf("Numero mayor: %.1lf\n", mayor);
        printf("Numero menor: %.1lf\n", menor);
    } else {
        printf("\nNo se ingresaron valores válidos.\n");
    }

    return 0;
}
