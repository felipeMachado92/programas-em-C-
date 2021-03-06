#include <stdio.h>
#include <string.h>

#define STRING_SIZE 128

int main (void) {
    char    caractereComProblema,
            *numeroPtr,
            numero[STRING_SIZE];

    while (scanf("%c %s%*c", &caractereComProblema, numero), caractereComProblema != '0' || strcmp(numero, "0") != 0) {
        // remover caracteres com problema
        numeroPtr = numero;
        while (*numeroPtr != '\0') {
            if (*numeroPtr == caractereComProblema) {
                strcpy(numeroPtr, numeroPtr + 1);
            }
            else {
                numeroPtr++;
            }
        }

        // remover 0
        numeroPtr = numero;
        while (*numeroPtr == '0') {
            strcpy(numeroPtr, numeroPtr + 1);
        }

        // se n�o sobrou caracteres, ent�o � 0
        if (numero[0] == '\0') {
            printf("0\n");
        }
        else {
            printf("%s\n", numero);
        }
    }

    return 0;
}
