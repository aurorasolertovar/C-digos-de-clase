#include <stdio.h>
int vector[20];
int valor;
int cont;
int main()
{   
    cont=20;
    do 
    {
     
     printf("Escribe un valor, si quieres que sea el último, escribe cero\n");
     scanf("%d", &valor);
     vector[cont]=valor;
     cont=cont-1;
    }
     while(valor!=0 && cont>0);
    
    cont=1;
    
    do
    {
        printf("El arreglo con tus valores es: %d \n",vector[cont]);
        cont=cont+1;
    }
    while(cont<20);
    
    //printf("El arreglo con tus valores es: %d \n",vector[con]);
    
    return 0;  
}
