#include <iostream>
#include <cmath>

using namespace std;

void leer (int& x)
{
    cout << "Introduzca un numero entero: ";
    cin >> x;
}

void decimalAbinario(int n)
{
    int cociente = n;
    while (cociente != 0){
        cout << cociente%2;
        cociente = cociente/2;
    }
}

int main()
{
    int num;
    leer(num);
    if (num < 0){
        cout << "Error.";
    }else{
        decimalAbinario(num);
    }
}
