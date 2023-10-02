#include <stdio.h>
#include <math.h>

int main() {
    //Declaramos las variables que vamos a usar y las iniciamos en 0
    char nombre[100];
    int edad = 0;
    float peso = 0;
    float estatura = 0;

    //Decoracion perrona!
    printf("VAMOS A CALCULAR TU IMC\n");
    printf("Indice de masa corporal\n");
    printf("           __________\n");
    printf("          | ________ |\n");
    printf("          ||   IMC  ||\n");
    printf("          |__________|\n");
    printf("          |[M|#|C][-]|\n");
    printf("          |[7|8|9][+]|\n");
    printf("          |[4|5|6][x]|\n");
    printf("          |[1|2|3][%]|\n");
    printf("          |[.|O|:][=]|\n");
    printf("           ----------\n");

    //Obtenemos los datos del usuario
    printf("\n\nComencemos por tu nombre!\n");
    scanf("%s", nombre);
    printf("Ingresa tu peso tan exacto como puedas!\n");
    scanf("%f", &peso);
    printf("Ingresa tu estatura tan exacta como puedas en cm!\n");
    scanf("%f", &estatura);

    //obtenemos la estatura en metros y la alevamos al cuadrado para la operacion
    float estatura2 = estatura/100;
    float estatura_final = estatura2*estatura2;

    //Obtenemos el IMC con la siguiente operacion y mostramos los datos en pantalla
    float imc = peso / estatura_final;
    printf("Hey, %s! sabias que tu IMC es de %f\n", nombre, imc);

    //esta condicional evalua si el imc es saludable
     if (imc < 18.5){
        printf("Tu imc es de %f te recomiendo que comas mas frutas y verduras:)",imc);
    }
    else if (imc >18.5 & imc < 24.5){
        printf("Tu imc es de %f estas en tu peso ideal sigue asi!:)");
    }
    else if (imc < 24.5 & imc < 29){
        printf("Tu imc es de %f tienes sobre peso te recomiendo hacer ejercicio con regularidad!:)");
    }
    else if (imc >29 ){
        printf("Tu imc es de %f tienes sobrepeso te recomiendo que hagas algo al respecto!:)");
    }





    return 0;
}

