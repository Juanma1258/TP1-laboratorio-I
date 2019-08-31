#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
#include "funciones.h"

int calculadora(int,int,int);

int sumar(int,int);
int restar(int,int);
int multiplicar(int,int);
int dividir(int,int);
int factorear(int,int);

int pedirNumero(int);
void mostrarResultado();
    /* */
int main()
{
printf("ingrese un numero");
scanf("%d");
printf("ingrese otro numero");
scanf("%d");
    return 0;
}

