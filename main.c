#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
* Programa: Operaciones Matematicas

* Objetivo:
 Permitir al usuario realizar operaciones matematicas a travez de un menu detallado,
suma, resta, multiplicacion, division y factorial.

* 2 de abril de 2016
* Autor: Matias Viola
**/


float sumar (float,float);
float restar (float,float);
float dividir (float,float);
float multiplicar (float, float);
float factorizar (float);

int main()
{
    char seguir='s';//variable para terminar while
    int opcion=0;//opcion a elegir por el usuario en el case
    float operandoUno;//valor del operando 1 que se le pedira al ususario
    float operandoDos;//valor del operando 2 que se le pedira al usuario


    while(seguir=='s')//while para el menu-indice que maneja el ususario
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)//orden de ejecucion de la operacion solicitada por el ususario
        {
            case 1:
                   printf("1er operando= ");
                   scanf("%f",&operandoUno);
                continue;
            case 2:
                printf("2do operando= ");
                scanf("%f",&operandoDos);
                continue;
            case 3:
                printf("Resultado suma= %.2f \n",sumar(operandoUno,operandoDos));
                break;
            case 4:
                printf("Resultado resta= %.2f \n",restar(operandoUno,operandoDos));
                break;
            case 5:
                printf("Resultado division= %.2f \n",dividir(operandoUno,operandoDos));
                break;
            case 6:
                printf("Resultado multiplicacion= %.2f \n",multiplicar(operandoUno,operandoDos));
                break;
            case 7:
                printf("Resultado factorizacion= %.2f \n",factorizar(operandoUno));
                break;
            case 8:
                printf("Resultado suma= %.2f \n",sumar(operandoUno,operandoDos));
                printf("Resultado resta= %.2f \n",restar(operandoUno,operandoDos));
                printf("Resultado division= %.2f \n",dividir(operandoUno,operandoDos));
                printf("Resultado multiplicacion= %.2f \n",multiplicar(operandoUno,operandoDos));
                printf("Resultado factorizacion= %.2f \n",factorizar(operandoUno));
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("No es una opcion valida del menu \n");
                continue;
        }


    return 0;
    }
}

