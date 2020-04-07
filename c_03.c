/* Exemplo do livro Mizhari (2ª ed.), p. 13
 * Este programa mostra a declaração de variáveis
 * Prog3.C
*/

#include <stdio.h>  /* Para printf() */
/* #include <stdlib.h> * Para system() */
int main()
{
    /* Variáveis devem ser declaradas no início do bloco */
    int num1; /* É obrigatório declarar variáveis em C */
    int num2;

    num1 = 44;
    num2 = num1 + 20;

    printf("O primeiro número é %d.\n", num1);
    printf("O segundo número é \"num1 + 20\" = %d.\n", num2);

    printf("\nAperte ENTER para encerrar.");
    getchar();
    return 0;
}
