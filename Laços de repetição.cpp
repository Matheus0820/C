#include <stdio.h>

int main()
{
    // Variáveis
    int num;
    int contador = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num); // Pegando dados digitado pelo usuário
    
    printf("Repetição com o while: ");
    while(contador < num) {
        printf("%d, ", contador);
        contador++;

    }

    printf("\nRepetição com o do while: ");
    contador = 0;
    do {
        printf("%d, ", contador);
        contador++;
        
    } while(contador < num);
    
    printf("\nRepetição com o for: ");
    for(int i = 0; i < num; i++) {
        printf("%d, ", i);

    }
    
    return 0;
}
