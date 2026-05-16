#include <stdio.h>
#include <string.h>

float deposito();
float saque(float var1);
void switch_case();

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
    printf("Obrigado por utilizar nosso caixa ATM!\n");
    return 0;
}
