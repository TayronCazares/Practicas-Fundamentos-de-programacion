#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("       Calculadora de areas        \n");
    printf( "           __________\n");
    printf( "          | ________ |\n");
    printf( "          ||12345678||\n");
    printf( "          |__________|\n");
    printf( "          |[M|#|C][-]|\n");
    printf( "          |[7|8|9][+]|\n");
    printf( "          |[4|5|6][x]|\n");
    printf( "          |[1|2|3][%]|\n");
    printf( "          |[.|O|:][=]|\n");
    printf( "           ----------\n");

    printf("\n");
    int base;
    int altura;
    printf("Dime la base de tu rectangulo o cuadrado: ");
    scanf("%d", &base);
    printf("Dime la altura: ");
    scanf("%d", &altura);
    printf("El area de tu figura es: %d ", base*altura);

    return 0;
}
