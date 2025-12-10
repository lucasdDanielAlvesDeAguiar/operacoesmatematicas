int multiplicar(int a, int b) {
    int resultado = 0;
    int negativo = 0;

    if (a < 0) {
        a = -a;
        negativo = !negativo;
    }

    if (b < 0) {
        b = -b;
        negativo = !negativo;
    }

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    if (negativo)
        resultado = -resultado;

    return resultado;
}