#include <stdio.h>
#include <math.h>

int main()
{
    double res;
    double a;
    double b;
    int opción;
    
    printf("Elige una opción\n1. Suma \n2. Resta\n3. Multiplicación\n4. División\n5. Raíz cuadrada\n6. Cuadrado\n");
    scanf("%d", &opción);
    if (opción==5)
    {
        printf("Proporciona un número\n");
        scanf("%lf", &a);
    }
    else 
    {
        printf("Proporciona tu primer número\n");
        scanf("%lf", &a);
    }
    if (opción!=5)
    {
        printf("Proporciona tu segundo número\n");
        scanf("%lf", &b);
    }
    
    if(opción==1)
    {
        res=a+b;
    }
    if(opción==2)
    {
        res=a-b;
    }
    if(opción==3)
    {
        res=a*b;
    }
    if(opción==4)
    {
        res=a/b;
    }
    if(opción==5)
    {
        res=sqrt(a);
    }
    if(opción==6)
    {
        res=pow(a,b);
    }
    printf("resultado: %lf", res);
    return 0;
}
