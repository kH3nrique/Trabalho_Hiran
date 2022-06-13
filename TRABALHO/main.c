#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){   
    srand(time(NULL));
    int latitude[5], longitude[5], acidez[5], producao[5];
    
    int i, j, auxiliar, posicao, posicao_melhor_producao[5], posicao_melhor_acidez[5];//essa nova variavel ajuda a organizar os vetores

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
                posicao_melhor_acidez[i] = j;
            }
            if (melhor_producao[i] < melhor_producao[j])
            {
                auxiliar = melhor_producao[i];
                melhor_producao[i] = melhor_producao[j];
                melhor_producao[j] = auxiliar;
                posicao_melhor_producao[i] = j;
            }
        }
    }
    
    printf("Digite a posicao producao: ");
        scanf("%d", &posicao);
        
    printf("\nLatitude: %d\nLongitude: %d\nAcidez do solo: %d\n", latitude[posicao_melhor_producao[posicao-1]], longitude[posicao_melhor_producao[posicao-1]], acidez[posicao_melhor_producao[posicao-1]]);
    printf("Melhor producao: %d\n", melhor_producao[posicao-1]);

    printf("\n");

    printf("Latitude: %d\nLongitude: %d\nProducao: %d\n", latitude[posicao_melhor_acidez[posicao-1]], longitude[posicao_melhor_acidez[posicao-1]], producao[posicao_melhor_producao[posicao-1]]);
    printf("Melhor acidez: %d\n", melhor_acidez[posicao-1]);

    int latitude_usuario, longitude_usuario, posicao_longitude_latitude;
    printf("Digite a latitude e longitude: ");
        scanf("%d %d", &latitude_usuario, &longitude_usuario);
    for (i = 0; i < 5; i++)
    {
        if (latitude_usuario == latitude[i] && longitude_usuario == longitude[i])
        {
            posicao_longitude_latitude = i;
        }
        
    }
    printf("\nMude a acidez e a producao: ");
        scanf("%d %d", &acidez[posicao_longitude_latitude], &producao[posicao_longitude_latitude]);
    
    for (i = 0; i < 5; i++)
    {
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
                posicao_melhor_acidez[i] = j;
            }
            if (melhor_producao[i] < melhor_producao[j])
            {
                auxiliar = melhor_producao[i];
                melhor_producao[i] = melhor_producao[j];
                melhor_producao[j] = auxiliar;
                posicao_melhor_producao[i] = j;
            }
        }
    }

    printf("\nLatitude: %d\nLongitude: %d\nAcidez do solo: %d\n", latitude[posicao_melhor_producao[posicao-1]], longitude[posicao_melhor_producao[posicao-1]], acidez[posicao_melhor_producao[posicao-1]]);
    printf("Melhor producao: %d\n", melhor_producao[posicao-1]);

    printf("\n");

    printf("Latitude: %d\nLongitude: %d\nProducao: %d\n", latitude[posicao_melhor_acidez[posicao-1]], longitude[posicao_melhor_acidez[posicao-1]], producao[posicao_melhor_producao[posicao-1]]);
    printf("Melhor acidez: %d\n", melhor_acidez[posicao-1]);
system("pause");
return 0;
}