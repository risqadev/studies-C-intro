/* Exemplo baseado no curso da Udemy
 * Aprenda C e C++ - Fundamentos para Lógica de Programação, aula 10
 * https://www.udemy.com/course/c-e-c-fundamentos-para-logica-de-programacao 
 *
 * Este programa recebe dois valores informados pelo usuário e calcula o 
 * produto entre eles.
*/

#include <stdio.h>  /* Para printf() */
/* #include <stdlib.h> * Para system() */
int main()
{
    int num1, num2, prod;

    printf("Informe um número inteiro: ");

    scanf("%d", &num1);

    printf("Informe outro número inteiro: ");

    scanf("%d", &num2);

    prod = num1 * num2;

    printf("O produto entre %d e %d é igual a %d.\n", num1, num2, prod);

    printf("\nAperte ENTER para encerrar.");
    getchar();
    return 0;
}
