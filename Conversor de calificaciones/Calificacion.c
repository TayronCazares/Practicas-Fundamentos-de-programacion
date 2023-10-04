#include <stdio.h>

int main()
{
    int calificacion;
    
    printf("Vamos a convertir tu calificacion!");
    printf("Ingresa tu calificacion en una escala de 0-100 -->");
    scanf("%i",&calificacion);
    
    if (calificacion >= 97 & calificacion <= 100){
        printf("tu calificacion %i en el sistema ingles seria A+",calificacion);
    }
    else if (calificacion >= 93 & calificacion <= 96){
        printf("tu calificacion %i en el sistema ingles seria A",calificacion);
    }
    else if (calificacion >= 90 & calificacion <= 92){
        printf("tu calificacion %i en el sistema ingles seria A-",calificacion);
    }
    else if (calificacion >= 87 & calificacion <= 89){
        printf("tu calificacion %i en el sistema ingles seria B+",calificacion);
    }
    else if (calificacion >= 83 & calificacion <= 86){
        printf("tu calificacion %i en el sistema ingles seria B",calificacion);
    }
    else if (calificacion >= 80 & calificacion <= 82){
        printf("tu calificacion %i en el sistema ingles seria B-",calificacion);
    }
    else if (calificacion >= 77 & calificacion <= 79){
        printf("tu calificacion %i en el sistema ingles seria C+",calificacion);
    }
    else if (calificacion >= 73 & calificacion <= 76){
        printf("tu calificacion %i en el sistema ingles seria C",calificacion);
    }
    else if (calificacion >= 70 & calificacion <= 72){
        printf("tu calificacion %i en el sistema ingles seria C-",calificacion);
    }
    else if (calificacion >= 67 & calificacion <= 69){
        printf("tu calificacion %i en el sistema ingles seria D+",calificacion);
    }
    else if (calificacion >= 65 & calificacion <= 66){
        printf("tu calificacion %i en el sistema ingles seria D",calificacion);
    }
    else if (calificacion < 65){
        printf("tu calificacion %i en el sistema ingles seria D-",calificacion);
    }
    

    return 0;
}
