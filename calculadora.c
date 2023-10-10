#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double resultado, num[2];
    int op, i, rest;
    printf("Escolha a operacao:\n");
    printf("1- soma\n2- sub\n3- multi\n4- div\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        for (i = 0; i < 2; i++)
        {
            printf("\nSoma: %s\n", i == 0 ? "Digite o primeiro numero" : "Digite o segundo numero");
            scanf("%lf", &num[i]);
        }
        resultado = num[0] + num[1];
        break;
    case 2:
        for (i = 0; i < 2; i++)
        {
            printf("\nSub: %s\n", i == 0 ? "Digite o primeiro numero" : "Digite o segundo numero");
            scanf("%lf", &num[i]);
        }
        resultado = num[0] - num[1];
        break;
    case 3:
        for (i = 0; i < 2; i++)
        {
            printf("\nMultiplicacao: %s\n", i == 0 ? "Digite o primeiro numero" : "Digite o segundo numero");
            scanf("%lf", &num[i]);
        }
        resultado = num[0] * num[1];
        break;
    case 4:
        for (i = 0; i < 2; i++)
        {
            printf("\nDivisao: %s\n", i == 0 ? "Digite o primeiro numero" : "Digite o segundo numero");
            scanf("%lf", &num[i]);
        }
        resultado = num[0] / num[1];
        break;
    default:
        printf("Valor invalido\n");
    }
    printf("\nresultado: %.1lf\n", resultado);
}