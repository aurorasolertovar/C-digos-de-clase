
#include <stdio.h>

#define const 5

void main()
{
    
    
    int v1[const];
    int v2[const];
    int v3[(2*const)];
    int valor;
    
    printf("Dame los valores del vector 1: \n");
    for(int i=0; i < const; i++)
    {
        scanf("%d", &valor);
        v1[i] = valor;
    }
    
    printf("Dame los valores del vector 2: \n");
    for(int i=0; i < const; i++)
    {
        scanf("%d", &valor);
        v2[i] = valor;
    }
    
    
    for(int i=0; i < const; i++)
    {
        v3[i] = v1 [i];
    }
    for(int j=0; j < const; j++)
    {
        v3[const+j] = v2 [j];
    }
  
    

    printf("El resultado del nuevo vector es: \n");
    for(int i=0; i< (2*const); i++)
    {
      printf ("%d", v3[i]);
    }


}
