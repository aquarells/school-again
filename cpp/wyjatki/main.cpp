#include <iostream>
#include <fstream>

using namespace std;

int dziel(int a, int b)
{
    if(b==0)
    {
        string wyjatek="Wystapil blad dzielenia przez 0";
        throw wyjatek;
    }
    return a/b;
}

int main()
{
    cout << "Program oblicza wynik dzielenia a przez b" << endl;
    int a, b;

    while(true)
    {
        cout << "Podaj a i b: ";
        cin >> a;
        cin >> b;

        try
        {
            cout << "a/b= " << dziel(a,b);
            break;
        }
        catch(string e)
        {
            cout << e << endl;
        }
    }

    return 0;
}
