#include <iostream>

using namespace std;

int main()
{
    int modelos;
    cout << "Introduzca numero de modelos de coche: ";
    cin >> modelos;
    double pr_mod = 0;
    double suma = 0;
    double total = 0;
    for (int i=1; i<=modelos; ++i){
        pr_mod+=i;
        cout << "Precio modelo " << i << ": ";
        cin >> pr_mod;
        suma+=pr_mod;
        total = suma / modelos;
    }
    cout << "El valor medio de los 4 modelos de coche asciende a: " << total << " €" << endl;
}

