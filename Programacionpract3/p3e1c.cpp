#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Introduzca un numero: ";
    cin >> num;
    int suma = 0;
    int i = 0;
    if (num < 0){
        cout << "Error." << endl;

    }else{
        do{
            ++i;
            suma = suma + i;
        }while (i < num);
        cout << "La suma es: " << suma << endl;
    }
}

