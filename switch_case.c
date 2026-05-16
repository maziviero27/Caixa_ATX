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

        printf("0 - Deposito\n");
        printf("1 - Saque\n");
        printf("2 - Encerrar programa\n");
        printf("================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {

            case 0:

                saldo += deposito();

                break;

            case 1:

                saldo -= saque(saldo);

                break;

            case 2:

                printf("Encerrando sessao...\n");

                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while (escolha != 2);
}
