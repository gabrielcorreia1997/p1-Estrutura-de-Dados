#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "utils.c"

int main() {
    printf("--- Escolha um mês para consultar a estação do ano ---");
    printf("\n(Colocar um número de 1 a 12 correspondente aos meses)\n");
    printf("R: ");
    int mes = ler_int();

    switch (mes) {
        case 1: // Janeiro
            printf("Janeiro: Verão");
            break;
    
        case 2: // Fevereiro
            printf("Fevereiro: Verão");
            break;
        
        case 3: // Março
            printf("Março: Outono");
            break;

        case 4: // Abril
            printf("Abril: Outono");
            break;

        case 5: // Maio
            printf("Maio: Outono");
            break;

        case 6: // Junho
            printf("Junho: Inverno");
            break;

        case 7: // Julho
            printf("Julho: Inverno");
            break;

        case 8: // Agosto
            printf("Agosto: Inverno");
            break;

        case 9: // Setembro
            printf("Setembro: Primavera");
            break;

        case 10: // Outubro
            printf("Outubro: Primavera");
            break;

        case 11: // Novembro
            printf("Novembro: Primavera");
            break;

        case 12: // Dezembro
            printf("Dezembro: Verão");
            break;

        default:
            break;
    }
    
    printf("\n");
    return 0;
}