#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numero;
    int potencia;
    cout << "Inserte un numero --> ";
    cin >>numero;
    cout << "inserte a que potencia desea elevar el numero --> ";
    cin >>potencia;

    int resultado = pow(numero, potencia);

    cout << "Tu numero a la potencia "<<potencia<< " es "<<resultado;


    return 0;
}
