#include <iostream>
#include <iomanip>

using namespace std;

const int seg_sem = 604800;
const int seg_dia = 86400;
const int seg_hora = 3600;
const int seg_min = 60;

int main()
{
    int seg_totl;
    cout << "Introduzca los segundos: ";
    cin >> seg_totl;

    int sem = seg_totl / seg_sem;
    int resto_sem = seg_totl % seg_sem;
    int dias = resto_sem / seg_dia;
    int resto_dias = resto_sem % seg_dia;
    int horas = resto_dias / seg_hora;
    int resto_horas = resto_dias % seg_hora;
    int mins = resto_horas / seg_min;
    int resto_seg = resto_horas % seg_min;

    cout << seg_totl << " segundos equivalen a [" << setw(3) << sem << "] semanas, " << dias << " dias "
    << setfill('0') << setw(2) << horas << ":"
    << setfill('0') << setw(2) << mins << ":"
    << setfill('0') << setw(2) << resto_seg << endl;
}
