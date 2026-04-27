#include<stdio.h>
void main()
{
    char matriz[8][8]= {{0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}};
    int i, j;
    printf("**Batalla Naval**\nIngresa las coordenadas de tus barquitos, \nprimero la coordenada x y después la coordenada y.\nTienes 8 barquitos, el tablero es de 8x8.\nTus barquitos serán horizontales \n \n");
    int coordenada;
    int coordenada2;
    int cont;
    cont=0;
    while(cont<8)
    {
        printf("Coordenadas barquito %d \n", cont+1);
        scanf("%d", &coordenada);
        scanf("%d", &coordenada2);
        
        if(coordenada >7 || coordenada<1 ||coordenada2 >7 || coordenada2<1 )
        {
            printf("Deben ser valores entre 1 y 7,\ningresa nuevamente las coordenadas de tu barquito %d \n", cont+1);
            scanf("%d", &coordenada);
            scanf("%d", &coordenada2);
        }
        
        matriz[coordenada-1][coordenada2-1]=1;
        matriz[coordenada-1][coordenada2]=1;
        cont= cont+1;
    }
    
    printf("Imprimir Matriz\n");
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
