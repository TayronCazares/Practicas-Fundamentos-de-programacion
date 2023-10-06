#include <stdio.h>


int main(){
//Declaramos las variables de peso y factor a multiplicar de gravedad de cada planeta
char nombre[100];
float peso = 0;
float G_marte = 0.38;
float G_jupiter = 2.55;
float G_saturno = .93;
float G_venus = .87;
float peso_final=0;
int opcion;

//Obtenemos el peso del usuario asi como su nombre y la opcion de planeta que eligio
printf("VAMOS A CALCULAR TU PESO EN OTROS PLANETAS\n\n!");

printf("Comencemos por tu nombre!\n");
scanf ("%s",&nombre);

printf("Ingresa tu peso!\n");
scanf("%f",&peso);
printf("ingresa en que planeta deseas conocer tu peso!\n");


//Creamos el menu swtich donde evaluamos segun la opcion se realiza la operacion y mostramos el resultado en pantalla
while (opcion!=5){
    printf("1 = marte\n2 = jupiter\n3 = saturno\n4 = venus\n5 para salir.\n");
    scanf("%i",&opcion);
    switch (opcion){
        case 1:;
            float peso_marte = peso*G_marte;
            printf("Hey %s tu peso en marte es %f kg\n",nombre,peso_marte);
            break;
        case 2:;
            float peso_jupiter = peso*G_jupiter;
            printf("Hey %s tu peso en jupiter es %f kg\n",nombre,peso_jupiter);
            break;
        case 3:;
            float peso_saturno = peso*G_saturno;
            printf("Hey %s tu peso en saturno es %f kg\n",nombre,peso_saturno);
            break;

        case 4:;
            float peso_venus = peso*G_venus;
            printf("Hey %s Tu peso en venus es %f kg\n",nombre,peso_venus);
            break;
}
}


return 0;
}

