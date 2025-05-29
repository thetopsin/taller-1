#include <stdio.h>

char calcularDigitoVerificador(int rut);

int main() {
    int rut;
    char digitoIngresado, digitoCalculado;

    printf("Ingresa el número del RUT (sin dígito verificador): ");
    scanf("%d", &rut);
    printf("Ingresa el dígito verificador (puede ser K o un número): ");
    scanf(" %c", &digitoIngresado);

    digitoCalculado = calcularDigitoVerificador(rut);

    if (digitoCalculado == digitoIngresado || 
        (digitoCalculado == 'K' && (digitoIngresado == 'k' || digitoIngresado == 'K'))) {
        printf("\ns¡El RUT es correcto!\n\n");
    } else {
        printf("¡¡¡Rut o dígito verificador incorrecto!!!\n");
    }

    return 0;
}


char calcularDigitoVerificador(int rut) {
    int suma = 0, multiplicador = 2;

    while (rut > 0) {
        int digito = rut % 10;
        suma += digito * multiplicador;
        multiplicador++;
        if (multiplicador > 7) {
            multiplicador = 2;
        }
        rut /= 10;
    }

    int resto = suma % 11;
    int resultado = 11 - resto;

    if (resultado == 11) {
        return '0';
    } else if (resultado == 10) {
        return 'K';
    } else {
        return resultado + '0';
    }
}
