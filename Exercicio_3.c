#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "utils.c"

int main() {
    char* tipos_carnes = "\n> 1 - Filé de frango: R$15,00\n> 2 - Bisteca suína: R$15,00\n> 3 - Carne de panela: R$17,50\n> 4 - Peixe empanado: R$16,00\n> 5 - Carne de soja: R$18,00\n";
    char* tipos_acompanhamentos = "\n> 1 - Arroz e feijão: R$10,00\n> 2 - Arroz e fritas: R$11,00\n> 3 - Macarrão alho e óleo: R$12,00\n> 4 - Macarrão à bolonhesa: R$14,00\n";
    char* tipos_bebidas = "\n> 1 - Coca-Cola 200 ml: R$2,50\n> 2 - Suco de Laranja 200ml: R$4,50\n> 3 - Água Mineral 350ml: R$1,50\n";

    float total = 0.0;
    char* lista_itens[3];

    printf("--- Escolha o tipo de carne ---%sR: ", tipos_carnes);
    int carne = ler_int();

    switch (carne) {
        case 1:
            total += 15.0;
            lista_itens[0] = "Filé de frango";
            break;
        case 2:
            total += 15.0;
            lista_itens[0] = "Bisteca suína";
            break;
        case 3:
            total += 17.5;
            lista_itens[0] = "Carne de panela";
            break;
        case 4:
            total += 16.0;
            lista_itens[0] = "Peixe empanado";
            break; 
        case 5:
            total += 18.0;
            lista_itens[0] = "Carne de soja";
            break;
        default:
            printf("Opção inválida de carne.\n");
    }
    
    printf("\n--- Escolha o acompanhamento ---%sR: ", tipos_acompanhamentos);
    int acompanhamento = ler_int();

    switch (acompanhamento) {
        case 1:
            total += 10.0;
            lista_itens[1] = "Arroz e feijão";
            break;
        case 2:
            total += 11.0;
            lista_itens[1] = "Arroz e fritas";
            break;
        case 3:
            total += 12.0;
            lista_itens[1] = "Macarrão alho e óleo";
            break;
        case 4:
            total += 14.0;
            lista_itens[1] = "Macarrão à bolonhesa";
            break; 
        default:
            printf("Opção inválida de acompanhamento.\n");
    }

    printf("\n--- Escolha a bebida ---%sR: ", tipos_bebidas);
    int bebida = ler_int();
    
    switch (bebida) {
        case 1:
            total += 2.5;
            lista_itens[2] = "Coca-Cola 200 ml";
            break;
        case 2:
            total += 4.5;
            lista_itens[2] = "Suco de Laranja 200ml";
            break;
        case 3:
            total += 1.5;
            lista_itens[2] = "Água Mineral 350ml";
            break; 
        default:
            printf("Opção inválida de bebida.\n");
    }

    printf("\n--- Resumo do pedido ---\n");
    printf("Carne: %s\n", lista_itens[0]);
    printf("Acompanhamento: %s\n", lista_itens[1]);
    printf("Bebida: %s\n", lista_itens[2]);
    printf("Total a pagar: R$%.2f\n", total);

    return 0;
}