#include <stdio.h>

int main(){
    int hora = 0, minutos = 0,minuto2, dia;
    int dolar = 0;
    //float dolar = 0;
    while(dia !=1 && dia !=2){
    printf("¿Que dia se estaciono? \n[1] Para los dias desde el lunes al sabado\n[2] Para los domingos\nOpcion: ");
    scanf("%d", &dia);
    if (dia == 1){
        printf("cuantos minutos estuviste estacionado?\n");
        scanf("%d", &minutos);
        if (minutos <= 10){
            dolar = 0;
        }else if (minutos >= 25){
                minuto2 = (minutos-10)%15;
                if (minuto2 == 0){
                    dolar = (minutos * 0.2)-2;
                    printf("\n\nmish: %d\n\n", dolar);
                }
        }

    }else if(dia == 2){
        printf("dia 2\n");

    }else{
        printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
        printf("XX  Ingrese una opcion valida %d   XX\n", dia);
        printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    }
    }

printf("-----------------------------\n");
printf("| Dinero | Tiempo | Patente |\n");
printf("-----------------------------\n");
printf("|$ %d  | %d:%d  |         |\n",dolar,hora,minutos);
printf("-----------------------------\n");
    return 0;
}