#include <stdio.h>

int main(){
    /* paso 1: eleva al cuadrado los factores x - promedio
       paso 2: suma todos los factores sacados del paso 1, la variable se llama sum1
       paso 3: divide el resultado del paso 2 por el promedio, esto se calcula al final
       paso 4: saca la raiz*/

    double promedio, suma, mayor, menor, d_estandar = 0, promedio_dinamico = 0, paso1 = 0,paso2 = 0,paso3 = 0 ,sum1 = 0, i;
    int ingresos, s, num, res_scanf;
    s = 0;
    ingresos = 0;
    mayor = 0;
    menor = 8;

    while (s != 1){
        printf("Ingrese un valor del 1 al 7. ingrese 0 para finalizar__");
        res_scanf = scanf("%d", &num);
        //para asegurase de que la entrada fue exitosa, de lo contrario
        if (res_scanf == 1){
            //0 para finalizar el conteo
            if (num == 0){
                s = 1;
                printf("\n------Ingreso de datos finalizado------\n");
                }else if (num > 0 && num <= 7){
                //ingresa promedio, datos 1 - 7
                printf("\nEl numero que ingreso es: %d\n\n",num);
                suma = suma + num;
                ingresos = ingresos + 1;
                //para comprobar si el nuevo es mayor que el anterior
                if (num > mayor){
                    mayor = num;
                }
                if (num < menor){
                    menor = num;
                }
                promedio_dinamico = num / ingresos;
                paso1 = (num - promedio_dinamico)*(num-promedio_dinamico);
                sum1 = sum1 + paso1;
                paso2 = sum1 / ingresos;
                while (i < paso2){
                    printf("");

                }
                

            }else{
                printf("\nXXXXX ERROR AL INGRESAR (DATO NO VALIDO) XXXXX\n");
                //limpia la entrada no valida en caso de poner letras
                while (getchar() != '\n');
            }
        }else{
            printf("\nXXXXX ERROR AL INGRESAR (DATO NO VALIDO) XXXXX\n");
            // limpia la entrada no valida tambien
            while (getchar() != '\n');
        }
    }
    d_estandar = 2;

    promedio = suma / ingresos;
    
    //se asegura de varie el mensaje de finalizacion
    if (ingresos > 0){
        printf("El promedio es: %.2f\nIngresaste %d notas validas\n", promedio, ingresos);
    }
    else{
        printf("No se ingresaron valores validos");
    }
    printf("La nota mayor fue: %.2lf\nLa nota menor fue: %.2lf\n", mayor,menor);

    return 0;
}