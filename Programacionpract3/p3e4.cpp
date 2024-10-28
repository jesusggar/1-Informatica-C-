#include <iostream>

using namespace std;

int main()
{
    int num;
    do{
        cout << "Introduzca un numero: ";
        cin >> num;
    }while (num <=0);
    for (int col = 0; col<num; ++col){
        for (int fil = 0; fil < num; ++fil){
        cout << "x";
        }
        cout << endl;
    }
}

