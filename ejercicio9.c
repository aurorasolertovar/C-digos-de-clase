#include <stdio.h>
int valor;
int suma;
int ma;
int me;
int cont;
int media;
int main()
{   
    cont=0;
    
    do 
         {
             printf("Proporciona un valor entero positivo %d\n");
             scanf("%d", &valor);
             suma=suma+valor;
             cont=cont+1;
              if (cont ==1)
              {
                  ma=valor;
                  me=valor;
              }
             
              if (valor>ma)
              {
           
                  ma=valor;
            
              }
             if (valor<me)
             {
           
                  me=valor;
           
             }
        
         } 
              while(cont<10);
    
        media=suma/10;
         printf("La suma de tus números es %d\n", suma);
        printf("La media de tus números es %d\n", media);
        printf("El mayor de tus números es %d\n", ma);
          printf("El menor de tus números es %d\n", me);
         
    return 0;
}
