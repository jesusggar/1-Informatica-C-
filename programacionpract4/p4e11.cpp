#include <iostream>

using namespace std;

double leer (double& x)
{
    cout << "Introduzca el valor de X [0..1]: ";
    cin >> x;
}

double potencia (double base, double exp)
{
    double res = 1;
    for (int i = 1; i <= exp; ++i){
        res *= base;
    }
    return res;
}

int factorial (int n)
{
    int res = 1;
    for (int i = n; i >= 1; --i){
        res *= i;
    }
    return res;
}

double res_serie (double x)
{
    double suma = 1 + x;
    for (int i = 2; i <= 6; ++i){
        suma += potencia(x,i)/factorial(i);
    }
    return suma;
}

void serie (double x)
{
    cout << "Serie: " << res_serie(x);
}


int main()
{
    double x;
    leer(x);
    if ((x >= 0) && (x <= 1)){
        serie(x);
    }else{
        cout << "Error.";
    }
}
