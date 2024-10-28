# include <iostream>

using namespace std;

int num_digitos ( int n)
{
    int i = 1;
    while (n > 9) {
        n = n / 10;
        ++i;
    }
    return i;
}

int digito ( int n, int i)
{
    for (int a = 0; (a < i); ++a) {
        n = n / 10;
    }
    return n % 10;
}

void mostrar_suma_digitos (int n)
{
    int nd = num_digitos (n);
    for (int i = 0; i < nd / 2; ++i) {
        int di = digito (n, i);
        int dif = digito (n, nd-i-1);
        cout << di << " + " << dif << " = " << (di+dif) << ", ";
    }
    if (nd %2 != 0) {
        cout << digito (n, nd / 2);
    }
    cout << endl ;
}

int main ()
{
    cout << " Introduzca número : ";
    int num;
    cin >> num ;
    mostrar_suma_digitos ( num );
}

