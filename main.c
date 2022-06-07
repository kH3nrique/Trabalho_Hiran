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
            valor[i].latitude = rand()%1000;
            valor[i].longitude = rand()%1000;
            valor[i].acidez = rand()%100;
            valor[i].producao = rand()%100;
    }
    int posicao;
    printf("Posicao(1 a 7): ");
        scanf("%d", &posicao);
    printf("Valores da posicao %d\n", posicao);
    printf("Latitude: %d\nLongitude: %d\nAcidez: %d\nProducao: %d\n", valor[posicao-1].latitude, valor[posicao-1].longitude, valor[posicao-1].acidez, valor[posicao-1].producao);

system("pause");
return 0;
}