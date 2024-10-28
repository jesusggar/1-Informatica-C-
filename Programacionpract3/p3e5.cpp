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
        if (col % 2 == 0){
            for (int fil = 0; fil < num; ++fil){
                if (fil % 2 == 0){
                    cout << "x";
                }else{
                    cout << "o";
                }
            }
        }else{
            for (int fil = 0; fil < num; ++fil){
                if (fil % 2 == 0){
                    cout << "o";
                }else{
                    cout << "x";
                }
            }

        }
        cout << endl;
    }
}

