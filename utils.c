#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

float ler_float() {
    float num;
    scanf("%f", &num);
    getchar();

    return num;
}

char* ler_texto() {
    char* texto = malloc(50 * sizeof(char));
    fgets(texto, 50, stdin);
    texto[strcspn(texto, "\n")] = 0;
    
    return texto;
}

int ler_int() {
    int num;
    scanf("%d", &num);
    getchar();

    return num;
}