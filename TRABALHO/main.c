#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){   
    int latitude[7], longitude[7], acidez[7], producao[7];
    int i;
    
    for (i = 0; i < 7; i++)
    {
        printf("Latitude: %d\t",  latitude[i] = rand()%1000);
        printf("Longitude: %d\t",  longitude[i] = rand()%1000);
        printf("Producao: %d\t",  producao[i] = rand()%100);
        printf("Acidez: %d\n",  acidez[i] = rand()%100);
        printf("--------------------------------------------------------------------------------------------------------------------\n");
    }
    int posicao;

    printf("\nPosicao(1 a 7): ");
        scanf("%d", &posicao);
    printf("Valores da posicao: %d\n", posicao);
    printf("Latitude: %d\nLongitude: %d\nProducao: %d\nAcidez: %d\n",  latitude[posicao-1],  longitude[posicao-1],  producao[posicao-1],  acidez[posicao-1]);

system("pause");
return 0;
}