#include<stdio.h>
void main()
{
    int matriz[8][8]= {{0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0}};
    int i, j;
    printf("Ingresa las coordenadas de tus barquitos, primero la coordenada x y después la coordenada y\n");
    int coordenada;
    int coordenada2;
    int cont;
    cont=0;
    while(cont<8)
    {
        scanf("%d", &coordenada);
        scanf("%d", &coordenada2);
        matriz[coordenada-1][coordenada2-1]=1;
        matriz[coordenada-1][coordenada2]=11;
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
