#include <iostream>

using namespace std;

int main()
{
    char c;
    int numdecaract = 0;
    cout << "Introduzca el texto terminado en un punto: " << endl;
    cin >> ws;
    cin.get(c);
    while (c != '.') {
        int ascii = c;
        cout << ascii << " ";
        cin.get(c);
        ++numdecaract;
        }
    cout << endl << "Numero de caracteres leídos: " << numdecaract << endl;

}
