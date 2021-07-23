#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome [50];
    int idade, i;
    char genero [10];
    float peso;

    for(i=1;i<6;i++)
    {
        printf("\n=======================================================");
        printf("\n\n\t ACADEMIA CEFET- LEOPOLDINA \n");
        printf("\n=======================================================");

        printf("\n\t       CADASTRO DE ALUNOS ");
        printf("\n-------------------------------------------------------\n\n");

    system("color 80");
    system("pause");
    system("cls");

    printf("\n\nDigite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);

    printf("\n\nDigite sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\n\nDigite seu gênero (Masculino ou Feminino): ");
    scanf("%s", genero);
    fflush(stdin);

    printf("\n\nDigite seu peso: ");
    scanf("%f", &peso);
    fflush(stdin);

    system("pause");
    system("cls");

    printf("\nAluno: %d", i);
    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nGenero: %s", genero);
    printf("\nPeso: %.2f Kg", peso);
    }

    return 0;
}
