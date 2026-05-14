#include <stdio.h>

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