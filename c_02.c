/* Exemplo do livro Mizhari (2ª ed.), p. 11
 * Este programa imprime uma frase tomando um segundo argumento.
 * Prog2.C
*/

#include <stdio.h>  /* Para printf() */
/* #include <stdlib.h> * Para system() */
int main()
{
    printf("Este é o número %d.\n", 5);

    printf("\nAperte ENTER para continuar.");
    getchar();

    printf("\n%s está a %d milhões de milhas do sol.\n", "Vênus", 67);

    printf("\nAperte ENTER para continuar.");
    getchar();

    printf("\nA letra %c", 'J');
    printf(" pronuncia-se %s%c%c", "Jota", '.', '\n');

    printf("\nAperte ENTER para encerrar.");
    getchar();
    return 0;
}
