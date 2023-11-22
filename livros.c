#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3

struct Livro
{
    char titulo[100];
    char autor[100];
    int ano;
    double review[5];
};
typedef struct Livro Livro;

int main()
{

    Livro livros[N];
    int i, j;

        for (i = 0; i < N; i++)
        {
        printf(">> Insira os dados do livro %d <<\n", i + 1);

        printf("Titulo: ");
        fgets(livros[i].titulo, 100, stdin);
        fflush(stdin);

        printf("Autor: ");
        fgets(livros[i].autor, 100, stdin);
        fflush(stdin);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        fflush(stdin);

            for (j = 0; j < 5; j++)
            {
                printf("Review %d (0 a 10): ", j + 1);
                scanf("%lf", &livros[i].review[j]);
                fflush(stdin);
            }
            
        }
                
    for (i = 0; i < 3; i++)
    {
        printf("\n>> Livro %d <<\n\n", i + 1);
        printf("Titulo:%s", livros[i].titulo);
        printf("Autor:%s", livros[i].autor);
        printf("Ano:%d", livros[i].ano);
        double soma = 0.0;
        for (j = 0; j < 5; j++)

        {
            soma += livros[i].review[j];
        }
        soma /= 5;
        printf("\nReview: %.2lf/5 estrelas\n", soma / 2);
    }
}