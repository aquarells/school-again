#include <iostream>

using namespace std;
//wstawienie tablicy

const int n=10;
int t[n]={5,8,7,1,2,6,3,4,9,0};

void print(int t[], int odkad, int dokad)
{
 for(int i=0; i<n; i++)
  cout << t[i] << ",";
}

void qsort(int t[], int odkad, int dokad)
{
 if(odkad>=dokad) return;
 int pp=odkad;
 for(int i=odkad; i<=dokad; i++)
 {
  if(t[i]<t[odkad])
  {
   swap(t[i], t[pp+1]);
   pp++;
  }
 }
 swap(t[odkad], t[pp]);
 qsort(t, odkad, pp-1);
 qsort(t, pp+1, dokad);
}



int main()
{
    qsort(t,0,9);
 print(t,0,9);

    return 0;
}
