#include <iostream>

using namespace std;

int main()
{
    char l1, l2, l3, l4;
    cout << "Introduzca una palabra de cuatro letras: ";
    cin >> l1 >> l2 >> l3 >> l4;
    char lt1 = l1 + 1;
    char lt2 = l2 + 1;
    char lt3 = l3 + 1;
    char lt4 = l4 + 1;
    cout << "La palabra [" << l1 << l2 << l3 << l4 << "] transformada es [" << lt1 << lt2 << lt3 << lt4 << "]" << endl;
}
