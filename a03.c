#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    fflush(stdin);                          // limpar o buffer
    setlocale(LC_ALL, "portuguese");        // define a região padrão do programa
    
    char a;
    int ano = 2023;
    int b, c = 0, d = 0;
    float e;
    
    printf("você é casado? (s/n)\n");                                           // laços if compostos
    scanf("%c", &a);
    if (a == 's') {
        printf("digite o ano do casamento\n");
        scanf("%i", &b);
        if (ano - b > 2) {
            printf("você tem quantos filhos?\n");
            scanf("%i", &c);
            if (c > 1) {
                printf("quantos anos tem o filho mais novo?\n");
                scanf("%i", &d);
            }
        }
    }

    printf("Qual sua prestação salarial?\n ");                                  // isso deve acontecer sempre, portanto,
    scanf("%f", &e);                                                            // está fora do primeiro laço if

    // processar dados
    if (a == 'n') {
        printf("estado civil: Solteiro\n");
    } else {
        printf("estado civil: Casado\n"
               "ano de casamento: %i", b);
        if (c > 0) {
            printf("filhos: %i\n", c);
            if (c > 1) {
                printf("idade do filho mais novo: %i\n", d);
            }
        }
    }
    printf("pretensão salarial: %.2f", e);
    return 0;
}