#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    //zapis do pliku tekstowego
    cout << "Podaj imie: "; cin >> imie;
    cout << "Podaj nazwisko: "; cin >> nazwisko;
    cout << "Podaj nr telefonu: "; cin >> nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);
    //aby program dopisywal tresc do pliku tekstowego, a nie na nadpisywal, trzeba dodac "| ios::app"
    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    //zamkniecie pliku tekstowego
    plik.close();

    //odczyt z pliku tekstowego
    plik.open("wizytowka.txt", ios::in);
    if(plik.good()==false)
    {
      cout << "Plik nie istnieje!";
      exit(0);
    }

    //w przypadku, gdyby uzytkownik podal dwa imiona ,,Anna Maria"
    string linia;
    int nr_linii=1;
    while(getline(plik, linia))
    {
     switch(nr_linii)
     {
      case 1: imie=linia; break;
      case 2: nazwisko=linia; break;
      case 3: nr_tel=atoi(linia.c_str()); break;
     }
      nr_linii++;
    }

    plik.close();

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;
    return 0;
}
