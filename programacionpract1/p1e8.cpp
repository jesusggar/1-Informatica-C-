#include <iostream>

using namespace std;

int main()
{
    char min1, min2, min3, min4;
    cout << "Introduzca una palabra de 4 letras minusculas: ";
    cin >> min1 >> min2 >> min3 >> min4;
    char may1 = 'A' + min1 - 'a';
    char may2 = 'A' + min2 - 'a';
    char may3 = 'A' + min3 - 'a';
    char may4 = 'A' + min4 - 'a';
    cout << "La palabra [" << min1 << min2 << min3 << min4 << "] transformada es [" << may1 << may2 << may3 << may4 << "]" << endl;
}
