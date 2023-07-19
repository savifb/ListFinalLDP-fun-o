#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);

int main(int argc, char const *argv[])
{
    char opcao;

    do
    {
        printf("Digite a ocpcao desejada\n: ");
        scanf("%c", &opcao);
        getchar();
        if (opcao =="a")
        {
            areaTrapezio();
        }
        
    } while (opcao != "s");



areaTrapezio(25, 100, 100);
printf("%f", areaTrapezio());
    return 0;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura){
    float area;
    area=((baseMaior+baseMenor)*altura)/2;
    return area;
}
int fatorial(int numero){
    int resFatorial=1;
    for (int cont = 0; cont < numero; cont++)
    {
        resFatorial=cont;
    }
    return resFatorial;
}
float pesoIdeal(float altura, char sexo){
    float resPesoIdeal;
    if (sexo== 'M'){
        resPesoIdeal= ((72.7)*altura)-58;
    }else if (sexo=='F')
    {
        resPesoIdeal=((62.1)*altura)-44.7;
    }
    return resPesoIdeal;
}
*/
