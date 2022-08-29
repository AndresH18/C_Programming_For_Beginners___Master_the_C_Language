#include <stdio.h>

void duplicarValor(int);

void duplicarReferencia(int *);

int main() {
    printf("Hello, World!\n");
    fflush(stdout);
    int i = 0;
    scanf_s("%d", &i);

    printf("Ingrese un numero para duplicar\n");
    fflush(stdout);
    i = 0;
    scanf_s("%d", &i);

    printf("Ingresaste %10d esta en %p", i, &i);
    return 0;
}

void duplicarValor(int n) {
    printf("---Duplicar por Valor---\n");
    printf("%-10s %d\n", "n", n);
    printf("%-10s %p\n", "&n", &n);
    n = n * 2;
    printf("%-10s %d\n", "n", n);
    printf("%-10s %p\n", "&n", &n);
    printf("---\n");
}

void duplicarReferencia(int *n) {
    printf("---Duplicar por Referencia---\n");
    printf("%-10s %d\n", "n", *n);
    printf("%-10s %p\n", "&n", n);
    *n = (*n) * 2;
    printf("%-10s %d\n", "n", *n);
    printf("%-10s %p\n", "&n", n);
    printf("---\n");
}

