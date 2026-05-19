#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void limpar_tela() {
    system("cls"); // Windows
    // system("clear"); // Linux/Mac
}

void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
}

float deposito() {
    float valor_in;

    printf("Adicione o valor que quer depositar: ");
    scanf("%f", &valor_in);

    return valor_in;
}

float saque(float saldo) {
    float valor_out;

    printf("Adicione o valor que deseja sacar: ");
    scanf("%f", &valor_out);

    if (saldo < valor_out) {
        printf("================================\n");
        printf("=== NAO HA SALDO O SUFICIENTE ===\n");
        printf("================================\n");

        pausar();
        return 0;
    } else {
        return valor_out;
    }
}

void mostrar_extrato(float movimentacoes[], int total_movimentacoes) {
    printf("\n========== ULTIMAS 3 OPERACOES ==========\n");

    if (total_movimentacoes == 0) {
        printf("Nenhuma movimentacao realizada.\n");
    } else {
        int inicio = total_movimentacoes - 3;

        if (inicio < 0) {
            inicio = 0;
        }

        for (int i = inicio; i < total_movimentacoes; i++) {
            if (movimentacoes[i] > 0) {
                printf("%d - Deposito: R$ %.2f\n", i + 1, movimentacoes[i]);
            } else {
                printf("%d - Saque: R$ %.2f\n", i + 1, -movimentacoes[i]);
            }
        }
    }

    printf("=========================================\n");
}

void switch_case() {
    float saldo = 0.00;
    int escolha;

    float movimentacoes[100];
    int total_movimentacoes = 0;

    do {
        limpar_tela();

        printf("\n================================\n");
        printf("SEU SALDO ATUAL E DE: R$ %.2f\n", saldo);
        printf("================================\n");

        printf("0 - Deposito\n");
        printf("1 - Saque\n");
        printf("2 - Extrato\n");
        printf("3 - Encerrar programa\n");
        printf("================================\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 0: {
                float valor = deposito();

                saldo += valor;
                movimentacoes[total_movimentacoes] = valor;
                total_movimentacoes++;

                break;
            }

            case 1: {
                float valor = saque(saldo);

                saldo -= valor;

                if (valor > 0) {
                    movimentacoes[total_movimentacoes] = -valor;
                    total_movimentacoes++;
                }

                break;
            }

            case 2:
                limpar_tela();
                mostrar_extrato(movimentacoes, total_movimentacoes);
                pausar();
                break;

            case 3:
                printf("Encerrando sessao...\n");
                break;

            default:
                printf("Codigo invalido!\n");
                pausar();
        }

    } while (escolha != 3);
}

int main() {
    char data_base[2][2][20] = {
        {"Tommaso", "1234"},
        {"Arthur", "4321"}
    };

    int encontrado = 0;
    int tentativas = 0;

    char login_nome[20];
    char login_senha[20];

    while (tentativas < 3 && encontrado == 0) {
        limpar_tela();

        printf("Digite seu nome: ");
        scanf("%s", login_nome);

        printf("Digite sua senha: ");
        scanf("%s", login_senha);

        for (int i = 0; i < 2; i++) {
            if (strcmp(data_base[i][0], login_nome) == 0 &&
                strcmp(data_base[i][1], login_senha) == 0) {

                printf("Bem vindo %s\n", data_base[i][0]);
                encontrado = 1;
            }
        }

        if (encontrado == 0) {
            tentativas++;
            printf("Usuario ou senha incorretos.\n");
            printf("Tentativas restantes: %d\n", 3 - tentativas);
            pausar();
        }
    }

    if (encontrado == 0) {
        printf("Numero maximo de tentativas atingido. Acesso bloqueado.\n");
    } else {
        switch_case();
    }

    printf("\nSessao Encerrada\n");

    return 0;
}
