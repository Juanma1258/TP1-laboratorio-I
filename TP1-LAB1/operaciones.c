
#include "operaciones.h"

int getSuma()
{
    int a;
    int b;
    int resultado;

    printf("ingresar un numero ");
    scanf("%d",&a);
    printf("ingresar otro numero ");
    scanf("%d",&b);

    resultado = a + b;

    printf("El resultado es %d",resultado);

}
