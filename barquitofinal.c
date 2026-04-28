#include<stdio.h>
void main()
{
    char matriz[8][8]= {{0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}};
    int i, j;
    printf("Ingresa las coordenadas x y y de tus barquitos, separadas por un salto de línea , \nTienes 8 barquitos horizontales \n \n");
    int coordenada;
    int coordenada2;
    int cont;
 

    cont=0;
    while(cont<8)
    {
        printf("Coordenadas barquito %d \n", cont+1);
        scanf("%d", &coordenada);
        scanf("%d", &coordenada2);
        
        while(coordenada >7 || coordenada<1 ||coordenada2 >8 || coordenada2<1)
        {
            printf("Deben ser valores entre 1 y 7,\ningresa nuevamente las coordenadas de tu barquito %d \n", cont+1);
            scanf("%d", &coordenada);
            scanf("%d", &coordenada2);
        }
        
        
        while (matriz[coordenada2-1][coordenada-1]==2 || matriz[coordenada2-1][coordenada]==2)
        {
            printf("Ya existe un barquito en ese lugar,\ningresa nuevamente las coordenadas de tu barquito %d \n", cont+1);
            scanf("%d", &coordenada);
            scanf("%d", &coordenada2);
        }
        
        cont= cont+1;
        matriz[coordenada2-1][coordenada-1]= 2;
        matriz[coordenada2-1][coordenada]= 2;
        
        
        
    }
    
    printf("Tus barquitos abarcan 2 casillas horizontales\nDonde hay un número 2 están tus barquitos\n");
    i=0;
    do
    {
        j=0;
        
        do 
        {
            printf("%d, ", matriz[i][j]);
            j++;
        }
         while (j<8);
        printf("\n");
        i++;
    }
     while(i<8);
  }
