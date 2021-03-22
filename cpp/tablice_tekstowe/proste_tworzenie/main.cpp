#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    //Proste sposoby tworzenia tablicy tekstowej.

    char tablica1[20]={'W','i','l','c','z','e', NULL};
    string tablica2="gniazdo";

    //Roznica miedzy char a string, polega na tym, ze pierwszy z nich pobiera znaki,
    //a drugi pobiera ciag znaków (lancuchy).

   cout << tablica1 << " " << tablica2 << endl;

    char tablica3[50]="Wojownik";
    //Podaje dlugosc tablicy.
    cout << strlen(tablica3) << endl;

    //Rozpoczyna wyświetlanie od wskazanej pozycji.
    cout << (tablica3+3);


    return 0;
}
