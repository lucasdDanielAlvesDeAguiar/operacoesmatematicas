#include <stdio.h>

int dividir(int a, int b) {
    if (b == 0) {
        printf("para de me fazer de trouxa, isso foi por zero\n");
        return 0;
    }

    int negativo = 0;
    int quociente = 0;

    if (a < 0) {
        a = -a;
        negativo = !negativo;
    }

    if (b < 0) {
        b = -b;
        negativo = !negativo;
    }

    while (a >= b) {
        a -= b;
        quociente++;
    }

    if (negativo)
        quociente = -quociente;

    return quociente;
}