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
    if (n == 1){
        cout << n;
    }else{
        decimalAbinario(n/2);
        cout << n%2;
    }
}

int main()
{
    int num;
    leer(num);
    if (num < 0){
        cout << "Error." << endl;
    }else{
        cout << "Su representacion en binario es: ";
        decimalAbinario(num);
    }
}
