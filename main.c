#include <stdio.h>
#include <stdlib.h>

#define MIN_TAMANH0 10
#define MAX_TAMANHO 100

void gera_senha(int tamanho) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-={}[]|:;<>,.?/";

    srand(time(NULL));
    for(int i = 0; i < tamanho; i++) {
        int random_index = rand()% (sizeof(charset) - 1);
        printf("%c", charset[random_index]);
    }
    printf("\n");
}

int main()
{
    int tamanho;
    printf("Digite o tamanho da senha (mínimo %d e máximo %d): ", MIN_TAMANH0, MAX_TAMANHO);
    scanf("%d", &tamanho);

    if (tamanho < MIN_TAMANH0 || tamanho > MAX_TAMANHO) {
        printf("Tamanho inválido! Deve ser um valor entre 1 e 100.\n");
        return 1;
    } else {
        gera_senha(tamanho);
    }

    return 0;
}
