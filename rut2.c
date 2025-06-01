#include <stdio.h>

int modulo(int rut);
int prueba(int rut);
int rut;
char dig_ver;
char ver;


int main(){
    printf("digite su rut sin el digito verficador: ");
    scanf("%d", &rut);
    printf("ingrese digito verficador: ");
    scanf("%c", ver);
    prueba(rut);
    printf("rut: %d\n", rut);

}

int prueba(int rut){
    int suma = 0, digito, multiplicador = 2, res;
    while (rut > 0){
        digito = rut % 10;
        suma += digito * multiplicador;
        if (multiplicador < 7){
            multiplicador ++;
        }else{multiplicador = 2;
        }
        rut /= 10;
    }
    res = suma % 11;
    res = 11 - res;
    if (res == 10){
        dig_ver = 'k';
    }
    printf("res: %d\n",res);

}
/*int modulo(int rut){
    int resultado = 0;
    while (rut > 10){
        rut = rut / 10;
        printf("rut2: %d\n",rut);
    }
    return 0;
}*/
