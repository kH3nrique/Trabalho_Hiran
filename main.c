#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    struct CAIFSUL
    {
        int latitude, longitude, acidez, producao;
    }valor[7];

    int i;

    for (i = 0; i < 7; i++)
    {
            printf("Latitude: %d\n", valor[i].latitude = rand()%1000);
            printf("Longitude: %d\n", valor[i].longitude = rand()%1000);
            printf("Producao: %d\n", valor[i].producao = rand()%100);
            printf("Acidez: %d\n", valor[i].acidez = rand()%100);
            printf("----------------------------------------------------------------------\n");
    }
    int posicao;
    printf("Posicao(1 a 7): ");
        scanf("%d", &posicao);
    printf("Valores da posicao: %d\n", posicao);
    printf("Latitude: %d\nLongitude: %d\nProducao: %d\nAcidez: %d\n", valor[posicao-1].latitude, valor[posicao-1].longitude, valor[posicao-1].producao, valor[posicao-1].acidez);

system("pause");
return 0;
}