#include <iostream>
#include <windows.h> //zeby Sleep() zadzialalo, jezeli jestes na linuxie to <unistd.h>
#include <cstdlib> //zeby system("cls") zadzialalo

using namespace std;

string  imie;
int liczba;

int populacja=1;
int godzin=0;

int main()
{
    //uzycie petli for - program ma wypisaæ liczby od 1 do 10
    cout << "Liczby od 1 do 10: ";
    for (int i=1; i<=10; i++)
    {
        cout << i << " ";
    }
    cout << endl;


    //cwiczenie z petla for, napisz program do odliczenia czasu wystartowania rakiety
    cout << "Czas startu rakiety za: " << endl;
    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        // system("cls"); //wyczysci pole, jezeli jestes na linuxie to zamiast "cls" ma byc "clear"
        cout << i << endl;
    }
    cout << "JEBUT!" << endl;


    //wyswietli podane imie tyle razy ile uzytkownik podal
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj dodatnia liczbe calkowita: ";
    cin >> liczba;

    for (int i=1; i<=liczba ; i++)
    {
        cout << i << ". " << imie << endl;
    }


//po ilu godzinach liczba bakterii wyniesie miliard
    cout << "Odliczanie czasu zwiekszenia populacji bakterii do miliarda: " << endl;
    while(populacja<=1000000000)
    {
        godzin++;
        populacja=populacja*2;
        cout << "Minelo godzin: " << godzin << endl;
        cout << "Liczba bakterii: " << populacja << endl;
    }

//Gdybysmy uzyli petli do..while (roznica miedzy while a do..while
//polega na tym, ze w while najpierw wykonywany jest warunek,
//a w do..while najpierw wykonywana jest instrukcja).

// do
// {
//   godzin++;
//   populacja=populacja*2;
//   cout << "Minelo godzin: " << godzin << endl;
//   cout << "Liczba bakterii: " << populacja << endl;
// } while(populacja<=1000000000);

    return 0;
}
