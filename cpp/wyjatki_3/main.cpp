#include <iostream>
#include <conio.h>
#include "moja_biblioteka.h"

using namespace std;

int main()
{
    cout << suma(4, 5) << endl;
    DwieLiczby dl(3,4);
    cout << dl.suma() << endl;
    return 0;
}
