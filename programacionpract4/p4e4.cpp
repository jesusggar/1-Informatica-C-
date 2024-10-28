#include <iostream>

using namespace std;

int leer (int& x, int& y)
{
    cout << "Introduzca dos numeros: ";
    cin >> x >> y;
}

int divs (int x)
{
    int res = 0;
    for (int i = 1; i < x; ++i){
        if (x % i == 0){
            res += i;
        }
    }
    return res;
}

bool amigos (int n1, int n2)
{
    bool comprobante = false;
    if ((divs(n1) == n2) && (divs(n2) == n1) && (n1 != n2)){
        comprobante = true;
    }
    return comprobante;
}

int main()
{
    int num1, num2;
    leer(num1,num2);
    if (amigos(num1,num2)){
        cout << "El resultado es: " << num1 << " y " << num2 << " son amigos.";
    }else{
        cout << "El resultado es: " << num1 << " y " << num2 << " no son amigos.";
    }
}
