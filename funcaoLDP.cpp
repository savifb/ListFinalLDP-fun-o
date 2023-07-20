#include <stdio.h>
#include <stdlib.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);
int fatorial(int numero);
float pesoIdeal(char sexo, float altura);

int main(int argc, char const *argv[])
{
    char opcao;

    do
    {
        printf("\nDigite uma das opções:\n");
        printf("a) Área de um trapézio\n");
        printf("b) Fatorial\n");
        printf("c) Peso corporal ideal\n");
        printf("s) Sair\n");
        scanf(" %c", &opcao); 

        if (opcao == 'a')
        {
            float baseMenor, baseMaior, altura;
            printf("Digite a base menor:\n");
            scanf("%f", &baseMenor);
            printf("Digite a base maior:\n");
            scanf("%f", &baseMaior);
            printf("Digite a altura:\n");
            scanf("%f", &altura);
            

            do
            {
                printf("Resultado: %.2f\nDigite 1 para sair!\n", areaTrapezio(baseMenor, baseMaior, altura));
                scanf(" %c", &opcao); 
                getchar();

            } while (opcao != '1');
        }
        else if (opcao == 'b')
        {
            int numero;

            printf("Digite um número:\n");
            scanf("%d", &numero);

            do
            {
                printf("Resultado: %d\nDigite 1 para sair!\n", fatorial(numero));
                scanf(" %c", &opcao);
                getchar();

            } while (opcao != '1');
            

        }
        else if (opcao == 'c')
        {
            char sexo;
            float altura;
            printf("Digite seu sexo f ou m: \n");
            scanf(" %c", &sexo);
            getchar();
            printf("Digite sua altura: \n");
            scanf("%f", &altura);
             do
            {
                printf("Resultado: %.2f\nDigite 1 para sair!\n", pesoIdeal(sexo, altura));
                scanf(" %c", &opcao);
                getchar();

            } while (opcao != '1');
        } else {
        printf("Opção inválida, digite outra opção!\n");
        
        }
        

    } while (opcao != 's');

    return 0;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura)
{
    float area=((baseMaior + baseMenor)*altura)/2;
    return area;
}

int fatorial(int numero)
{
    int resFatorial = 1;
    for (int cont = numero; cont > 0; cont--)
    {
        resFatorial *= cont;
    }

    return resFatorial;
}

float pesoIdeal(char sexo, float altura)
{
    int peso = 0;

    if (sexo == 'f')
    {
        peso = 62.1 * altura - 44.7;
    }
    else
    {
        peso = 72.7 * altura - 58;
    }

    return peso;
}



