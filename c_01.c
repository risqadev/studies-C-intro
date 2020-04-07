/* Exemplo do livro Mizhari (2ª ed.), p. 11
 * Este programa imprime um texto simples.
 * Prog1.C
*/

#include <stdio.h>  /* Para printf() */
/* #include <stdlib.h> * Para system() */
int main()
{
    printf("Meu primeiro programa em C.\n");
    printf("\nAperte ENTER para encerrar.");

    getchar();
    return 0;
}
