#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int division(int primerNumero,int segundoNumero);
int main()
{
    char opcion;
    int numeroUno = 6;
    int numeroDos = 2;
    int total;

    do
    {
        fflush(stdin);
        printf("1.SUMAR \n");
        printf("2.RESTAR \n");
        printf("3.DIVIDIR \n");
        printf("4.MULTIPLICAR \n");
        printf("5.FACTORIZAR \n");
        printf("6.SALIR \n");
        fflush(stdin);
        printf("ELIJA UNA OPCION: ");
        scanf("%c",&opcion);

        switch(opcion)
        {
        case '1':
            printf("suma \n");

            break;
        case '2':
            printf("resta \n");
            break;
        case '3':
            total = division(numeroUno,numeroDos);
            printf("el resultado es: %d \n",total);
            break;
        case '4':
            printf("multiplicacion \n");
            break;
        case '5':
            printf("factoriacion \n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion != '6');
    return 0;
}

int division(int a,int b)
{
    int resultado;

    if(a > b)
        {
                resultado = (a/b);
        }else
        {
            resultado = (b/a);
        }

        return resultado;
}
