#include <stdio.h>
#include <stdlib.h>

int main()
{   //Declaramos las variables que vamos a utilizar
    float fra1;
    float fra2;
    //Obtenemos la informacion del usuario
    printf("Convertidor de fraccion a decimal!");
    printf("Ingresa el numerador de tu fraccion --> ");
    scanf("%d",&fra1);
    printf("Ingresa el denominador de tu fraccion --> ");
    scanf("%d", &fra2);
    //Realizamos la operacion e imprimimos en pantalla
    printf("Tu fraccion en numero decimal es --> %f",fra1/fra2);

    return 0;
}
