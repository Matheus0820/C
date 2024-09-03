#include <stdio.h>

int main()
{
    // Variáveis
    int inteiro = 10;
    float real = 10.1;
    char letra = 'A';
    double realGrande = 10.100000000000000001;
    long int inteiroGrande = 10000000000000;
    
    printf("Variável do tipo int: %d \n", inteiro);
    printf("Variável do tipo float: %f \n", real);
    printf("Variável do tipo char: %c \n", letra);
    printf("Variável do tipo double: %lf \n", realGrande);
    printf("Variável do tipo long int: %li \n", inteiroGrande);
    
    return 0;
}
