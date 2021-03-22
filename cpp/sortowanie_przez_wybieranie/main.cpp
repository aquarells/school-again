#include <iostream>

using namespace std;

const int n=6;
int t[n]={1,6,2,4,5,3};

void print(int t[], int n)
{
 for(int i=0; i<n; i++)
  cout << t[i] << ",";
}

void wybieranie(int t[], int n)
{
 for(int i=0; i<n; i++)
 {
  for(int j=i; j<n; j++)
  {
   if(t[i]>t[j])
   {
    int tmp=t[i];
    t[i]=t[j];
    tmp=t[i];
   }
  }
 }

}

int main()
{
    wybieranie(t,n);
    print(t,n);
    return 0;
}
