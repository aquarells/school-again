#include <iostream>
#include <string.h>
#include <cstdio>
#include <conio.h>

using namespace std;
char napis[50]="Devil may cry";
char slowo[50]=" may";

void usuwanie(char napis[], char slowo[])
{
 char prawa[100];
 char lewa[100];
 strcpy(prawa,strstr(napis,slowo)+strlen(slowo));
 strcpy(lewa, napis);
 *strstr(lewa,slowo)=NULL;
 strcpy(napis, lewa);
 strcat(napis, prawa);

}

int main()
{
 usuwanie(napis, slowo);
  cout << napis << endl;

    return 0;
}
