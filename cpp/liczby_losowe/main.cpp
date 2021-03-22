#include <iostream>
#include <cstdlib> //zeby moc uzyc rand()
#include <time.h> //zeby moc pobrac pierwszy czassystemu operacyjnego od 1 stycznia 1970 roku
#include <stdio.h> //wymagana do getchar()
#include <windows.h> //zeby moc uzyc funkcji Sleep()
using namespace std;

int liczba, strzal, ile_prob=0;
int liczba_d;

int main()
{
    //program typu ,,zgadnij jaka to liczba"
    cout << "Witaj! Pomyslalem sobie liczbe w zakresie 1..100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;
    cout << liczba << endl;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout << "Zgadnij jaka liczba (to Twoja " << ile_prob <<" proba): ";
        cin >> strzal;

        if(strzal==liczba)
            cout << "Udalo sie! Wygrywasz w " << ile_prob << " probie" << endl;
        else if(strzal<liczba)
            cout << "Nie udalo sie! To za malo :D" << endl;
        else if(strzal>liczba)
            cout << "Nie udalo sie! To za duzo :D" << endl;
    }
    getchar(); //pobierz znak, wymaga biblioteki <stdio.h>, podobne do system("pause"), tylko nie wyswietla komunikatu
    //system("pause"); -> instrukcja, ktora zatrzyma program na ekranie do momentu, az uzytkownik wcisnie enter


    //symulacja losowania duzego lotka (losujemy 6 liczb z zakresu 1..49)
    cout << "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady: " << endl;
    Sleep(3000);
    //srand(time(NULL));
    for(int i=1; i<=6; i++)
    {
        liczba_d =  rand()%49+1;
        Sleep(1000);
        cout << liczba_d << "\a" << endl;
    }


    return 0;
}
