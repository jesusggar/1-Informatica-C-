#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 14;
    int auxiliar;
    cout << "a vale " << a << " y b vale " << b << endl;
    // ¿Qué hacen estas tres sentencias?
    auxiliar = a;
    a = b;
    b = auxiliar;
    cout << "a vale " << a << " y b vale " << b << endl;

    /* Este programa intercambia los valores de "a" y "b". Para ello primero les asigna un valor a cada letra.
    Luego, guarda el valor de "a" en una varible auxiliar de forma que al sustituir el valor de "a" por el de "b" este no se pierda.
    Por último se le asigna al valor de la variable "b" el de la variable auxiliar, que es el primer valor de "a" guardado anteriormente.
    */
}
