#include <iostream>

using namespace std;
string PIN;
string login, haslo;
int wiek;

int main()
{
    //symulator bankomatu
    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj numer PIN: ";
    cin >> PIN; //naszym poprawnym PINem bêdzie 1729

    if(PIN=="1729")
    {
      cout << "Poprawny PIN" << endl;
    }
    else
    {
      cout << "Niepoprawny PIN" << endl;
    }

    //logowanie do programu
    cout << "Podaj login: ";
    cin >> login; //nasz login to admin
    cout << "Podaj haslo: ";
    cin >> haslo; //nasze haslo to szarlotka

    if((login=="admin")&&(haslo=="szarlotka"))
    {
      cout << "Udalo sie zalogowac!" << endl;
    }
    else
    {
     cout << "Nie udalo sie zalogowac!" << endl;
    }

    //sprawdzenie wieku podanego przez uzytkownika
    cout << "Ile masz lat: ";
    cin >> wiek;
    if(wiek<18)
    {
     cout << "Nie jestes pelnoletni i nie mozesz kandydowac na prezydenta" << endl;
    }
    else if ((wiek>=18) && (wiek<35))
    {
     cout << "Jestes pelnoletni i nie mozesz kandydowac na prezydenta" << endl;
    }
    else
    {
     cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta" << endl;
    }

    return 0;
}
