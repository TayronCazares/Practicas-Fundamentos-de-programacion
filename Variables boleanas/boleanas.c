#include <stdio.h>

int main() {
    //Imprimimos los anecabezados de las tablas de verdad
    printf("Tabla de verdad de la compuerta AND:\n");
    printf("A\tB\tA AND B\n");
    //Con los ciclos for generamos las combinaciones necesarias para la compuerta AND
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            //Guardamos e imprimimos el resultado de la compuerta
            int resultado_and = A && B;
            printf("%d\t%d\t%d\n", A, B, resultado_and);
        }
    }

    printf("\nTabla de verdad de la compuerta OR:\n");
    printf("A\tB\tA OR B\n");
    //Generamos las combinaciones posibles para la compuerta
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            //Guardamos el resultado y lo imprimimos
            int resultado_or = A || B;
            printf("%d\t%d\t%d\n", A, B, resultado_or);
        }
    }

    printf("\nTabla de verdad de la compuerta NOT:\n");
    printf("A\tNOT A\n");
    //Aqui solo necesitamos un for ya uqe la compuerta solo tiene una entrada
    for (int A = 0; A <= 1; A++) {
        int resultado_not = !A;
        printf("%d\t%d\n", A, resultado_not);
    }

    return 0;
}
