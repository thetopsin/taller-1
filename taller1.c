#include <stdio.h>

int main(){
    double promedio, suma;
    int ingresos, s, num;
    s = 0;
    ingresos = 0;
    while (s != 1){
        printf("Ingrese un valor del 1 al 7. ingrese 0 para finalizar__");
        scanf("%d", &num);
        if (num == 0){
            s = s + 1;
            printf("\n------Ingreso de datos finalizado------\n");
        }
        else{
            if (num>0 && num<8){
            printf("\nEl numero que ingreso es: %d\n\n",num);
            suma = suma + num;
            ingresos = ingresos + 1;
        }else{
            printf("XXXXX ERROR AL INGRESAR (DATO NO VALIDO) XXXXX\n");
        }
        }
    }
    promedio = suma / ingresos;
    printf("El promedio es: %.2f\nIngresaste %d notas validas\n", promedio, ingresos);


    return 0;
}