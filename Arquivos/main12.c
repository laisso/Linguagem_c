#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];// vari�vel com capacidade para armazenar at� 50 caracteres

    printf("Digite seu nome:");
    scanf("%s", nome );// %s � para leitura de uma sequ�ncia de caracteres, como por exemplo nome
    printf("\nSeja Bem-vindo %s ! \n", nome);

    char CPF[11];
    printf ("\nPorfavor, digite seu CPF: ");
    scanf("%s", CPF);
    printf ("\nConfirme se o CPF esta correto: %s \n", CPF);

    return 0;
}
