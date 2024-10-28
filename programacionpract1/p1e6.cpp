#include <iostream>

using namespace std;

const int byte_kbyte = 1024;
const int kbyte_mbyte = 1024;
const int bytes_mbyte = byte_kbyte * kbyte_mbyte;

int main()
{
    int bytes_totales;
    cout << "Introduzca una cantidad de Bytes: ";
    cin >> bytes_totales;
    int mbyte = bytes_totales / bytes_mbyte;
    int resto_bytes = bytes_totales % bytes_mbyte;
    int kbyte = resto_bytes / byte_kbyte;
    int bytes_restantes = resto_bytes % byte_kbyte;
    cout << bytes_totales << " corresponden a: " << endl
    << "MiBytes = "<< mbyte << endl
    << "KiBytes = " << kbyte << endl
    << "Bytes = " << bytes_restantes << endl;
}
