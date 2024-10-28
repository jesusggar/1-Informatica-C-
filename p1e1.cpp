#include <iostream>

using namespace std;

const double PTS_1_EUR = 166.386;

int main()
{
    cout << "Introduzca cantidad de pesetas: ";
    int pesetas;
    cin >> pesetas;
    double euros = pesetas / PTS_1_EUR;
    cout << pesetas << "pts equivalen a " << euros << " euros" << endl;
}
