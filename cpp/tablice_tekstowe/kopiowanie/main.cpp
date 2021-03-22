#include <iostream>
#include <string.h>

using namespace std;
char t1[25]={'R','a','g','n','a','r', NULL};


int main()
{
 //Kopiuje drugie do pierwszego.
 //W tym przypadku program wyœwietli nam ,,Ivar".

    strcpy(t1,"Ivar");
    cout << t1;
    return 0;
}
