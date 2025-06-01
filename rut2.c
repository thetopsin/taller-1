#include <stdio.h>

char calculo(int rut);
int rut;
char digito_cal;
char digito_in;


int main(){
    //aca ingresa los datos
    printf("digite su RUT sin el digito verficador: ");
    scanf("%d", &rut);
    printf("ingrese digito verficador: ");
    scanf(" %c", &digito_in);

    digito_cal = calculo(rut);
    if (digito_cal == digito_in || (digito_cal == 'k' && (digito_in == 'k' || digito_in == 'K'))){
        printf("\n::El RUT es correcto\n");
        printf("::El RUT completo es: %d-%c\n\n",rut,digito_in);
    }else{
        printf("\n::El RUT ingresado es incorrecto\n\n");
    }
    return 0;
}

char calculo(int rut){
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
    digito_cal = 11 - res;

    if (digito_cal == 10){
        return 'k';
    }else if (res == 0){
        return '0';
    } else {
        return (char)((11 - res) + '0');
    }


}
