#include<stdio.h>
int main()
{
    int matriz[2][2] = {{1,1},{1,1}};
    int i, j;
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
         while (j<2);
        printf("\n");
        i++;
    }
     while(i<2);
