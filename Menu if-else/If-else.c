#include <stdio.h>

int main() {
    // Declaramos las variables de peso y factor a multiplicar de gravedad de cada planeta
    char nombre[100];
    float peso = 0;
    float G_marte = 0.38;
    float G_jupiter = 2.55;
    float G_saturno = 0.93;
    float G_venus = 0.87;
    float peso_final = 0;
    int opcion;

    // Obtenemos el peso del usuario, su nombre y la opción de planeta que eligió
    printf("VAMOS A CALCULAR TU PESO EN OTROS PLANETAS\n\n!");
    printf("Comencemos por tu nombre!\n");
    scanf("%s", &nombre);
    printf("Ingresa tu peso!\n");
    scanf("%f", &peso);
    printf("Ingresa en qué planeta deseas conocer tu peso!\n");
    printf("1 = Marte\n2 = Júpiter\n3 = Saturno\n4 = Venus\n");
    scanf("%i", &opcion);

    printf("Hey %s!\n", nombre);

    // Utilizamos if-else para calcular el peso en el planeta seleccionado
    if (opcion == 1) {
        float peso_marte = peso * G_marte;
        printf("Tu peso en Marte es %f kg", peso_marte);
    } else if (opcion == 2) {
        float peso_jupiter = peso * G_jupiter;
        printf("Tu peso en Júpiter es %f kg", peso_jupiter);
    } else if (opcion == 3) {
        float peso_saturno = peso * G_saturno;
        printf("Tu peso en Saturno es %f kg", peso_saturno);
    } else if (opcion == 4) {
        float peso_venus = peso * G_venus;
        printf("Tu peso en Venus es %f kg", peso_venus);
    } else {
        printf("Opcion invalida solo existen opciones del 1-4");
    }

    return 0;
}
