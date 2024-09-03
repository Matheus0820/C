#include <stdio.h>

int main()
{
    // Variáveis
    float notas[3];
    float media;
    float maiorNota = 0;
    
    for(int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", (i+1));
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    media = media/3;
    
    for(int i = 0; i < 3; i++) {
        printf("Nota %d: %.2f \n", i, notas[i]);
    }
    printf("Media: %.2f", media);
    
    
    return 0;
}
