#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){   
    srand(time(NULL));
    int latitude[5], longitude[5], acidez[5], producao[5];
    
    int i, j, auxiliar, posicao;//essa nova variavel ajuda a organizar os vetores

    int melhor_acidez[5], melhor_producao[5];

    for (i = 0; i < 5; i++)
    {
        printf("Latitude: %d\t",  latitude[i] = rand()%1000);
        printf("Longitude: %d\t",  longitude[i] = rand()%1000);
        printf("Producao: %d\t",  producao[i] = rand()%100);
        printf("Acidez: %d\n",  acidez[i] = rand()%100);
        printf("--------------------------------------------------------------------------------------------------------------------\n");
        melhor_acidez[i] = acidez[i];
        melhor_producao[i] = producao[i];
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (melhor_acidez[i] < melhor_acidez[j])
            {
                auxiliar = melhor_acidez[i];
                melhor_acidez[i] = melhor_acidez[j];
                melhor_acidez[j] = auxiliar;
            }
            if (melhor_producao[i] < melhor_producao[j])
            {
                auxiliar = melhor_producao[i];
                melhor_producao[i] = melhor_producao[j];
                melhor_producao[j] = auxiliar;
            }
        }
    }
    
    printf("Digite a posicao producao: ");
        scanf("%d", &posicao);
    printf("%d\n", melhor_producao[posicao-1]);

system("pause");
return 0;
}