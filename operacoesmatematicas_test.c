#include <stdio.h>
#include <assert.h>
#include "multiplicar.c"
#include "dividir.c"

int main(){

    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(2, 3) == -20);

        assert(dividir(10, 2) == 5);
        assert(dividir(-9, 3) == -3);

        printf("Todos ps testes funfaram!\n");
}