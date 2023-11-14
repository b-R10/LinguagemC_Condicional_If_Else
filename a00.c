/*
    c) Fazer uma solução estruturando as condições com base no questionário a seguir.
        Ao final, Ao final, exibir mensagem com os dados fornecidos pelo usuário.
        Mora com outras pessoas na mesma casa?
        Com quantas?
        Qual a idade da mais velha?
        Você divide o quarto com outras pessoas?
        Com quantas?
        Há quanto tempo vive na mesma casa?
*/

#include <stdio.h>                                          // Include standart library of input/output.
#include <stdlib.h>                                         // Include standart librarys of C (memory allocation, string conversion,
                                                              // random number generation, program control).
#include <locale.h>                                         // Fornece funções para adaptação do programa aos padrões específicos de
                                                              // localização, como formatação e exibição de informações em
                                                              // diferentes idiomas e regiões.
#include <string.h>                                         // String Manipulation Functions, para comparar "==" as strings.
#include <ctype.h>                                          // A library ctype.h contém funções para trabalhar com caracteres e
                                                              // realizar testes de tipos de caracteres.

int main() {
    /* parâmetros iniciais */
    setlocale(LC_ALL, "portuguese");                        // função para definir a região padrão do programa.
    fflush(stdin);                                          // limpeza do buffer de input.

    /* definindo variáveis */
    char pergunta1[5];
    int pergunta2;
    int pergunta3;
    char pergunta4[5];
    int pergunta5;
    int pergunta6;

    /* Entrada de dados */
    printf("Responda o questionário com sim e não.\n Maiúsculas e acentos não interferem.\n");
    printf("Você mora com outras pessoas na mesma casa?\n");
    scanf("%s", &pergunta1);
    if (strcasecmp(pergunta1, "sim") == 0){                                     // Operador de controle condicional.
        printf("Com quantas pessoas?\n");
        scanf("%i", &pergunta2);
        printf("Qual a idade da pessoa mais velha?\n");
        scanf("%i", &pergunta3);
        printf("Você divide o quarto?\n");
        scanf("%s", &pergunta4);
            if(strcasecmp(pergunta4, "sim") == 0) {                             // Uso da function "strcasecamp" para comparar duas
                                                                                  // strings ignorando maiúsculas e minúsculas.
                printf("Com quantas pessoas?\n");
                scanf("%i", &pergunta5);
            }
    }
    printf("Há quanto tempo vive na mesma casa?\n");                            // Printf() fora do laço if, pois, em todos os casos deve
                                                                                  // aparecer.
    scanf("%i", &pergunta6);

    /* Processamento e saída */
    if (strcasecmp(pergunta1, "nao") == 0 || strcasecmp(pergunta1, "não") == 0) {                   // "||": operador lógico "ou".
        printf("\nVocê mora sozinho. ");
    } else if (strcasecmp(pergunta1, "sim") == 0) {
        printf("Você não mora sozinho. ");
        printf("Mora com %i pessoas. ", pergunta2);
        printf("A pessoa mais velha tem %i anos. ", pergunta3);
        if (strcasecmp(pergunta4, "nao") == 0 || strcasecmp(pergunta4, "não") == 0) {
            printf("Você não divide seu quarto. ");
        } else {
            printf("Você divide o quarto com %i pessoas. ", pergunta5);
        }
    }
    printf("Você vive na mesma casa tem %i anos. \n ", pergunta6);

return 0;                                                                       // retorna para main() function com valor 0.
}