#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Introduzca un numero entero: ";
    cin >> num1;
    cout << "Introduzca otro numero entero: ";
    cin >> num2;
    cout << "El valor del primer n�mero introducido es: " << num1 << endl;
    cout << "El valor del segundo n�mero introducido es: " << num2 << endl;

    //Como el tipo de variable int solo reconoce n�meros enteros, si introducimos otro tipo de valor nos dar� como resultado 0.
    //Si el primer valor que introducimos no es un n�mero entero, el programa finalizar� al no reconocer el valor.
}
