#include <iostream>
#include <cmath>

using namespace std;

void leer (double& x)
{
    cout << "Introduzca un numero entero: ";
    cin >> x;
}

double potencia(double base, double exp)
{
    double res = 1;
    for (int i = 1; i <= exp; ++i){
        res *= base;
    }
    return res;
}

double serie(double x)
{
    double operacion = x;
    double result = x;
    double exp = 3;
    double numer = 1;
    double denom = 2;
    while (operacion > 0.001){
        operacion = (numer/denom)*(potencia(x,exp)/exp);
        result += operacion;
        exp = exp + 2;
        numer = numer * (numer + 2);
        denom = denom * (denom +2);
    }
    return result;
}

int main()
{
    double num;
    leer(num);
    if ((num < 0)||(num > 1)){
        cout << "Error." << endl;
    }else{
        cout << "Serie: " << serie(num);
    }
}
