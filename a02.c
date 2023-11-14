/*
DESVIOS ANINHADOS

e) Fazer uma solução para calcular e mostrar o percentual de gastos em relação ao salário, para alimentação, transporte e educação.
Mostre os percentuais de gastos em ordem crescente e também em ordem decrescente.
Se um dos gastos ou a soma deles for superior ao salário, exibir uma mensagem informando o ocorrido e encerrar o programa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    float salario, x, y, z;

    printf("insira seu salário: \n"); scanf("%f", &salario);
    printf("insira seus gastos em alimentação, transporte e educação: \n");
    scanf("%f %f %f", &x, &y, &z);

    float a = ((x/salario)*(100));
    float b = ((y/salario)*(100));
    float c = ((z/salario)*(100));

    if (a < b && a < c)         // a < b && a < c
    {
        if (b < c)              // a < b < c
        {
            printf("alimentação: %.1f %%\n", a);
            printf("trasporte: %.1f %%\n", b);
            printf("educação: %.1f %%\n", c);
            printf("educação: %.1f %%\n", c);
            printf("trasporte: %.1f %%\n", b);
            printf("alimentação: %.1f %%\n", a);
        }
        else                    // a < c < b
        {
            printf("alimentação: %.1f %%\n", a);
            printf("educação: %.1f %%\n", c);
            printf("trasporte: %.1f %%\n", b);
            printf("trasporte: %.1f %%\n", b);
            printf("educação: %.1f %%\n", c);
            printf("alimentação: %.1f %%\n", a);
        }
    }
    else if (b < a && b < c)    // b < todos
    {
        if (a < c)              // b < a < c
        {
            printf("trasporte: %.1f %%\n", b);
            printf("alimentação %.1f %%\n", a);
            printf("educação: %.1f %%\n", c);
            printf("educação: %.1f %%\n", c);
            printf("alimentação %.1f %%\n", a);
            printf("trasporte: %.1f %%\n", b);
        }
        else                    // b < c < a
        {
            printf("trasporte: %.1f %%\n", b);
            printf("educação: %.1f %%\n", c);
            printf("alimentação %.1f %%\n", a);
            printf("alimentação %.1f %%\n", a);
            printf("educação: %.1f %%\n", c);
            printf("trasporte: %.1f %%\n", b);

        }
    }
    else                        // c < todos
    {
        if (a < b)              // c < a < b
        {
            printf("educação: %.1f %%\n", c);
            printf("alimentação %.1f %%\n", a);
            printf("trasporte: %.1f %%\n", b);
            printf("trasporte: %.1f %%\n", b);
            printf("alimentação %.1f %%\n", a);
            printf("educação: %.1f %%\n", c);
        }
        else                    // c < b < a
        {
            printf("educação: %.1f %%\n", c);
            printf("trasporte: %.1f %%\n", b);
            printf("alimentação %.1f %%\n", a);
            printf("alimentação %.1f %%\n", a);
            printf("trasporte: %.1f %%\n", b);
            printf("educação: %.1f %%\n", c);
        }
    }

    if((a > salario) || (b > salario) || (c > salario))
    {
        if (a > salario) { printf("A categoria alimentação ultrapassou o valor do seu salário."); }
        if(b > salario) { printf("A categoria transporte ultrapassou o valor do seu salário."); }
        if(c > salario) { printf("A categoria educação ultrapassou o valor do seu salário."); }
    }
    else
    {
        if((a + b + c) > salario) { printf("A soma dos seus gastos ultrapassou seu salário."); }
    }

    return 0;
}