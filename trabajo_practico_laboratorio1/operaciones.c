#include "operaciones.h"
#include <stdio.h>

int getSuma()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a+b);
    printf("El resultado de la suma es: %d \n",resultado);

    return resultado;

}
int getResta()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a-b);
    printf("El resultado de la resta es: %d \n",resultado);

    return resultado;
}
float getDivision()
{
    float a;
    float b;
    float resultado;

    printf("\n Ingrese un numero: ");
    scanf("%f",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%f", &b);
    while(b == 0)
    {
        printf("ERROR. NO SE PUEDE DIVIDIR POR 0.INGRESE OTRO NUMERO");
        scanf("%f", &b);
    }
    resultado = (a/b);
    printf("El resultado de la division es: %.1f \n",resultado);

    return resultado;
}
int getMultiplicacion()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a*b);
    printf("El resultado de la multiplicacion es: %d \n",resultado);

    return resultado;
}
int getFactorial()
{
    int i;
    int numero;
    int factorial=1;

    printf("\n Ingrese un numero: ");
    scanf("%d", &numero);

    for(i=numero; i>1; i--)
    {
        factorial = factorial*i;
    }
    printf("El factorial de %d es: %d \n",numero,factorial);

    return factorial;
}



