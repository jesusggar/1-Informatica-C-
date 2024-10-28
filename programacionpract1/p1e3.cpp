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
    cout << "El valor del primer número introducido es: " << num1 << endl;
    cout << "El valor del segundo número introducido es: " << num2 << endl;

    //Como el tipo de variable int solo reconoce números enteros, si introducimos otro tipo de valor nos dará como resultado 0.
    //Si el primer valor que introducimos no es un número entero, el programa finalizará al no reconocer el valor.
}
