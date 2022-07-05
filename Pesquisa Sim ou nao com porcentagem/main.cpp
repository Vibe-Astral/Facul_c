#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char pergunta[300];

    printf("Digite a pergunta: \n");
    gets(pergunta);

    int opcao = 0, contTotal;
    double contSim, contNao;

    contSim = 0;
    contNao = 0;
    contTotal = 0;

    do
    {
        printf("Digite 1 - SIM, 2 - NAO, 3 - ENCERRAR PESQUISA\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("%s\n", pergunta);
            contSim++;
            contTotal++;
            break;
        case 2:
            printf("%s\n", pergunta);
            contNao++;
            contTotal++;
            break;
        case 3:
            system("cls");
            printf("Resultado da pesquisa\n\n");
            printf("%s\n", pergunta);
            printf("\nO total de votos foi de: %d", contTotal);
            printf("\nA porcentagem de SIM foi de: %.2f%%", (contSim * 100) / contTotal);
            printf("\nA porcentagem de NAO foi de: %.2f%%", (contNao * 100) / contTotal);
            break;
        default:
            printf("Opcao Invalida.\n");
            break;
        }

    } while (opcao != 3);

    return 0;
}
