#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415 // define � algo que n�o pode ser alterado jamais em meu c�digo

int main()

{
    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    //Declara��o de vari�veis
    int media = 1 ;
    // valores com v�rgula de precis�o simples
    float nota = 8.6;
    // nota��o cient�fica para n�meros reais
    double aleatorio = 0.000074;

    printf("O valor de media: %d \n\nO valor da nota : %.1f \n\naleatorio : %f \n\n", media, nota, aleatorio);

    // Regra para vari�vel, sem espa�os,acentos, palavras reservadas,n�o come�ar com n�meros

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // soma simples

    int x = 5;
    int y = 10;

    int resultado = x+y ;

    printf ("%d + %d = %d \n\n", x , y , resultado );

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // soma simples pedindo para o usu�rio o valor dar vari�veis a e b

    int a, b ;

    printf ("digite dois numeros inteiros para somar:");
    scanf ("%d %d", &a, &b);
    int soma = a + b;
    printf ("\nSoma: %d + %d = %d\n\n", a , b, soma);

    printf("------------------------------------------------------------------------------------------------------------------ \n\n");

    // Soma do PI declarado em #define mais a vari�vel a que o usu�rio escolher

    float conclusao = a + PI ;

    printf ("%d + %f = %f\n", a, PI, conclusao );

    printf("\n------------------------------------------------------------------------------------------------------------------ \n\n");








    return 0;
}
