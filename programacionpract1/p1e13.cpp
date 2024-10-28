#include <iostream>

using namespace std;

int main()
{
    bool ok = (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0);
    cout << "Resultado de (3.0 * (0.1 / 3.0)) == ((3.0 * 0.1) / 3.0): "
    << boolalpha << ok << " -> ERROR" << endl;

    /*Este programa nos da como resultado de la expresión el valor "false" aunque matemáticamente debería ser "true"
    Esto ocuure porque los bits utilizados para representar partes fraccionarias de números reales es limitado.
    En este caso si dividimos 0.1 / 3.0 nos dará como resultado un número periódico que no es posible guardar dada esta limitación.
    */
}
