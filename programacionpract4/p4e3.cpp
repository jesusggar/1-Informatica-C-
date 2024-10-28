#include <iostream>

using namespace std;

void leer(int& a)
{
    cout << "Introduzca un número: ";
    cin >> a;
    while (a < 0){
        cout << "Error. Introduzca un numero: ";
        cin >> a;
    }
}

bool es_primo(int a)
{
    bool esprimo = (a > 1);
    for (int div = 2; (div <= a/2) && esprimo ; ++div) {
        if ((a % div) == 0) {
            esprimo = false;
        }
    }
    return esprimo;
}

void primos(int a)
{
    cout << "El resultado es: ";
    int cont = 0;
        for (int i = 2; cont < a; ++i){
            if (es_primo(i)){
                cout << i << " ";
                ++cont;
            }
        }
}

int main()
{
    int num;
    leer(num);
    primos(num);
}
