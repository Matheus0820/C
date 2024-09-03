#include <stdio.h>

int main()
{
    // Variável
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num); // Pegando dados digitado pelo usuário
    
    if(num > 0) {
        printf("Seu número é maior que zero - É positivo");
    }
    else if (num < 0) {
        printf("Seu número é menor que zero - É negativo");
    }
    else {
        printf("Seu número é igual a zero");
    }
    
    return 0;
}
