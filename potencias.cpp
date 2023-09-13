#include <iostream>

using namespace std;

int main()
{
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
    int radio;
    float pi=3.1416;
    cout << "Dime el radio de tu circulo: ";
    cin >>radio;
    cout << "El area de tu circulo es "<< radio*radio*pi;


    return 0;
}
