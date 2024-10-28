#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Introduzca el primer número entero: ";
    cin >> num1;
    cout << "Introduzca el segundo número entero: ";
    cin >> num2;
    int suma = num1 + num2;
    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;
    cout << "Resultado (num1 + num2): " << suma << endl;

    /*Los apartados a), b) y c) funcionan correctamente.
    El apartado d) da un resultado erróneo ya que se produce desbordamiento (overflow), es decir, el número de bits
    utilizados prara representar los números es limitado y da lugar a un valor que no se puede representar.
    En el caso e) y f) también se dan resultados incorrectos. Parece ser que el valor máx que se puede representar
    es 2147483647, porque no importa si le sumamos 1 o 3000000000, en ambos casos el resultado incorrecto será el mismo (-2147483648).
    */
}
