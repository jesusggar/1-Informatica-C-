#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//--------------------------------
cout << fixed;
//--------------------------------
int num11 = 9527;
int num12 = 15937;
double res1a = num11 * num12;
double num13 = 1.0;
int res1i = num11 * num12 * num13;
double res1d = num11 * num12 * num13;
cout << "Valor de número11 (int): " << num11 << endl;
cout << "Valor de número12 (int): " << num12 << endl;
cout << "Valor de número13 (double): " << num13 << endl;
cout << "Resultado (double) (num11 * num12): " << res1a << " CORRECTO" << endl;
cout << "Resultado (int) (num11 * num12 * num13): " << res1i << " CORRECTO" << endl;
cout << "Resultado (double) (num11 * num12 * num13): " << res1d << " CORRECTO" << endl;
//--------------------------------
int num21 = 9527;
int num22 = 15937;
float res2a = num21 * num22;
float num23 = 1.0;
int res2i = num21 * num22 * num23;
double res2d = num21 * num22 * num23;
cout << "Valor de número21 (int): " << num21 << endl;
cout << "Valor de número22 (int): " << num22 << endl;
cout << "Valor de número23 (float): " << num23 << endl;
cout << "Resultado (float) (num21 * num22): " << res2a << " ERROR" << endl;
cout << "Resultado (int) (num21 * num22 * num23): " << res2i << " ERROR" << endl;
cout << "Resultado (double) (num21 * num22 * num23): " << res2d << " ERROR" << endl;
//-------------------------------
}

/*El primer apartado del programa funciona correctamente.
El segundo apartado muestra resultados incorrectos ya que se
ha utilizado el tipo de variable float con el tipo int.
Lo que ocurre es que los bits del tipo float no son suficientes
para representar a todos los números enteros del tipo int y
se produce entonces una pérdida de precisión.
*/
