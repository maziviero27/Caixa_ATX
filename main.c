#include <stdio.h>
#include <string.h>

float deposito() {

    float valor_in;

    printf("Adicione o valor que quer depositar: ");
    scanf("%f", &valor_in);

    return valor_in;
}

float saque(float var1){

    float valor_out;

    printf("Adicione o valor que deseja sacar: ");
    scanf("%f", &valor_out);

    if (var1 < valor_out){
        printf("================================\n\n");
        printf("===NAO HA SALDO O SUFICIENTE ===\n");
        return 0;
    }
    else{
    return valor_out;
    }
}

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

                printf("Codigo invalido!\n");
        }

    } while (escolha != 2);
}

int main() {

    char data_base[2][2][20] = {
        {"Tommaso", "1234"},
        {"Arthur", "4321"}
    };

    int encontrado = 0;

    char login_nome[20];
    char login_senha[20];

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

        printf("Usuario ou senha incorretos.\n");

    } else {

        switch_case();
    }

    printf("Sessao Encerrada\n");

    return 0;
}
