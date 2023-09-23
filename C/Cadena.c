#include <stdio.h>
#include <stdlib.h>
int main() {
//Declaramos la variable con un limite de caracteres de 100
char palabra[100];
//Obtenemos la palabra del usuario y la guardamos
printf("Ingresa una palabra -> ");
scanf("%s", palabra);
//Iteramos en cada letra de la palabra con el ciclo for
for (int i = 0; palabra[i] != '\0'; i++){
    //abrimos un condicional donde evaluamos cada letra de la palabra
    if (palabra[i] >= 'a' & palabra[i] <= 'z'){
        //Restamos 32 a cada letra de la palabra para dar con su equivalente en mayuscula ene l codigo ascii
        palabra[i]-= 32;
        }
    //Misma condicional pero en este caso si las letras son Mayusculas sumara 32 para hacerlas minusculas
    else if (palabra[i] >='A' & palabra[i] <='Z'){
        palabra[i] +=32;
    }
}
//mostramos el resultado en pantall
printf("La palabra en mayusculas ---> %s",palabra);

return 0;
}

