#include <iostream>

using namespace std;

float oceny[5];
float suma=0, srednia;

int main()
{
    //podstawowe tworzenie tablicy
    int pomiary[30];
    //dostac sie do poszczegolnej zmiennej w tablicy
    pomiary[1];

    //program do obliczania sredniej z pieciu ocen
    for(int i=0; i<5; i++)
    {
       cout << endl << "Podaj " << i+1 << " ocene: ";
       cin >> oceny[i];
       suma += oceny[i];
    }
    srednia = suma/5;
    cout << endl << "Suma = " << suma;
    cout << endl << "Srednia = " << srednia;

    return 0;
}
