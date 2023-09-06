#include <iostream>

using namespace std;

int main()
{/*Dibujo perron de una calculadora*/
        cout << "       Calculadora de areas        " << endl;
    cout << "           __________" << endl;
    cout << "          | ________ |" << endl;
    cout << "          ||12345678||" << endl;
    cout << "          |__________|" << endl;
    cout << "          |[M|#|C][-]|" << endl;
    cout << "          |[7|8|9][+]|" << endl;
    cout << "          |[4|5|6][x]|" << endl;
    cout << "          |[1|2|3][%]|" << endl;
    cout << "          |[.|O|:][=]|" << endl;
    cout << "           ----------" << endl;

       cout << endl << endl;
    /*Declaracion de variables */
    int radio;
    float pi=3.1416;
    /*Tomamos los datos del usuario*/
    cout << "Dime el radio de tu circulo: ";
    cin >>radio;
    /*Mostramos el resultado de la operacion*/
    cout << "El area de tu circulo es "<< radio*radio*pi;


    return 0;
}
