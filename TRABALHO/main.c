#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){   
    int latitude[100], longitude[100], acidez[100], producao[100];
    int i;
    int melhor_acidez[100], melhor_producao[100];
    for (i = 0; i < 100; i++)
    {
        printf("Latitude: %d\t",  latitude[i] = rand()%1000);
        printf("Longitude: %d\t",  longitude[i] = rand()%1000);
        printf("Producao: %d\t",  producao[i] = rand()%100);
        printf("Acidez: %d\n",  acidez[i] = rand()%100);
        printf("--------------------------------------------------------------------------------------------------------------------\n");
        melhor_acidez[i] = acidez[i];
        melhor_producao[i] = producao[i];
    }
    

    for (i = 0; i < 100; i++)
    {
        
    }
    

system("pause");
return 0;

}