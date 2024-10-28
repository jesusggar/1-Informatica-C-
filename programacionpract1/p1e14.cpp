#include <iostream>
using namespace std;
int main()
{
int num11 = -7;
int num12 = 4;
double num13 = num11 + num12;
int num14 = 1.0 * (num11 + num12);
cout << "Valor de número11 (int): " << num11 << endl;
cout << "Valor de número12 (int): " << num12 << endl;
cout << "Valor de número13 (double) = (num11 + num12): " << num13 << " CORRECTO" << endl;
cout << "Valor de número14 (int) = (1.0 * (num11 + num12)): " << num14 << " CORRECTO" << endl;
if (num11 < num12) {
cout << "El valor " << num11 << " es menor que el valor " << num12
<< " CORRECTO" << endl;
} else {
cout << "El valor " << num11 << " NO es menor que el valor " << num12
<< " ERROR" << endl;
}
//-------------------------------
cout << "-------------------------------" << endl;
//-------------------------------
int num21 = -7;
unsigned num22 = 4;
double num23 = num21 + num22;
int num24 = 1.0 * (num21 + num22);
cout << "Valor de número21 (int): " << num21 << endl;
cout << "Valor de número22 (unsigned): " << num22 << endl;
cout << "Valor de número23 (double) = (num21 + num22): " << num23 << " ERROR" << endl;
cout << "Valor de número24 (int) = (1.0 * (num21 + num22)): " << num24 << " ERROR" << endl;
if (num21 < num22) {
cout << "El valor " << num21 << " es menor que el valor " << num22
<< " CORRECTO" << endl;
} else {
cout << "El valor " << num21 << " NO es menor que el valor " << num22
<< " ERROR" << endl;
}
}

/*El primer apartado del programa funciona correctamente.
En el segundo apartado se producen resultados erróneos.
Esto sucede porque se ha usado el tipo de variable unsigned (binario puro), que no se debe usar con el tipo int
ya que en caso de ser un valor negativo no se representará adecuadamente.
*/
