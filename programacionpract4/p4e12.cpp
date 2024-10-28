#include <iostream>

using namespace std;

int leer (int& n)
{
    cout << "Introduzca un número: ";
    cin >> n;
    while (n < 0){
        cout << "Error. Introduzca un número >= 0: ";
        cin >> n;
    }
}

void fibonacci (int n)
{
    int valor1 = 0;
    int valor2 = 1;
    int aux;
    for (int i = 1; i <= n; ++i){
        aux = valor1;
        valor1 = valor2;
        valor2 = aux + valor2;
    }
    cout << "Fibonacci(" << n << "): " << valor1;
}


int main()
{
    int num;
    leer(num);
    fibonacci(num);
}
