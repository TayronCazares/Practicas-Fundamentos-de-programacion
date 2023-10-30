#include <stdio.h>
#include <stdlib.h>

int suma(int numero1, int numero2) {
    return numero1 + numero2;
}

int resta(int numero1, int numero2) {
    return numero1 - numero2;
}

int multiplicacion(int numero1, int numero2) {
    return numero1 * numero2;
}

int division(int numero1, int numero2) {
    if (numero2 == 0) {
        printf("No se puede dividir por cero\n");
        return 0;
    }
    return numero1 / numero2;
}

int potencia(int numero1, int numero2) {
    int resultado = 1;
    if (numero2 > 0) {
        for (int i = 1; i <= numero2; i++) {
            resultado *= numero1;
        }
    } else if (numero2 < 0) {
        for (int i = 1; i <= -numero2; i++) {
            resultado /= numero1;
        }
    }
    return resultado;
}
int valorAbsoluto(double numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}

double raiz(int numero1) {
    double max = numero1;
    double min = 0;
    double med = (max + min) / 2;

    while (abs(med * med - numero1) > 0.0000001) {
        if (med * med > numero1) {
            max = med;
        } else {
            min = med;
        }
        med = (max + min) / 2;
    }
    return med;
}

int main() {
    int numero1, numero2;
    double resultado;
    char opc;
    int continuar = 1;

    printf("Bienvenido a la calculadora\n");

    while (continuar) {
        printf("Ingresa un numero->");
        scanf("%i", &numero1);
        printf("(En caso de que necesites una potencia ingresa el exponente o raiz poner 0)\nIngresa un segundo numero->");
        scanf("%i", &numero2);
        printf("Ingresa la opcion para la operacion que deseas realizar +, -, *, /, p (potencia), r (raiz), x para salir\n");
        scanf(" %c", &opc);

        if (opc == 'x' || numero1 == 'x') {
            printf("Adiooooos");
            continuar = 0;
        } else if (opc != '+' && opc != '-' && opc != '*' && opc != '/' && opc != 'p' && opc != 'r') {
            printf("Operacin invalida!\n");
        } else {
            switch (opc) {
                case '+':
                    resultado = suma(numero1, numero2);
                    printf("El resultado de %i %c %i es: %.2lf\n", numero1, opc, numero2, resultado);
                    break;
                case '-':
                    resultado = resta(numero1, numero2);
                    printf("El resultado de %i %c %i es: %.2lf\n", numero1, opc, numero2, resultado);
                    break;
                case '*':
                    resultado = multiplicacion(numero1, numero2);
                    printf("El resultado de %i %c %i es: %.2lf\n", numero1, opc, numero2, resultado);
                    break;
                case '/':
                    if (numero2 != 0) {
                        resultado = division(numero1, numero2);
                        printf("El resultado de %i %c %i es: %.2lf\n", numero1, opc, numero2, resultado);
                    } else {
                        printf("No se puede dividir por cero\n");
                    }
                    break;
                case 'r':
                    if (numero1 <= 0) {
                        printf("No se puede calcular la raiz cuadrada de un numero negativo o cero.\n");
                    } else {
                        resultado = raiz(numero1);
                        printf("La raíz de %i es %.2lf\n", numero1, resultado);
                    }
                    break;
                case 'p':
                    resultado = potencia(numero1, numero2);
                    printf("El resultado de %i a la potencia %i es: %.2lf\n", numero1, numero2, resultado);
                    break;
            }
        }
    }

    return 0;
}

