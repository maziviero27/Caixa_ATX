#include <stdio.h>

float deposito();
float saque(float var1);

void switch_case() {

    float saldo = 0.00;
    int escolha;

    do {

        printf("\n================================\n");
        printf("SEU SALDO ATUAL E DE: R$ %.2f\n", saldo);
        printf("================================\n");

        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Realizar extrato\n");
        printf("0 - Encerrar programa\n");
        printf("================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {

            case 1:

                saldo += deposito();
                break;

            case 2:

                saldo -= saque(saldo);
                //printf("\nSeu Saldo Atual e de: R$ %.2f\n", saldo);
                break;

            case 3:

                printf("\nImplementar funcao extrato\n");

                break;

            case 0:

                printf("Encerrando sessao...\n");

                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while (escolha != 0);
}
