#include <stdio.h>

int main(){
    int suma, ingresos, s,num;
    s = 0;
    while (s != 1){
        printf("Ingrese un valor del 1 al 7. ingrese 0 para finalizar\n");
        scanf("%d", num);
        if (num == 0){
            s = s + 1;
            printf("\nIngreso de datos finalizado");
        }
        else{
            if (num>0 && num<8){
            printf("El numero que ingreso es: %d",num);
        }
        }


    }


    return 0;
}