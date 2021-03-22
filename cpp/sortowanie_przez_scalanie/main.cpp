#include <iostream>

using namespace std;
const int n=8;
int t[n]={5,2,1,3,8,7,6,4};

void print(int t[], int n)
{
 for(int i=0; i<n; i++)
  cout << t[i] << ",";
}

void mergeSort(int t[], int n)
{
 if(n<2) return;
 int n1=n/2;
 int n2=n-n1;

 int *t1=new int[n1];
 int *t2=new int[n2];
 int i=0;

 for(int i1=0; i1<n1; i1++, i++)
  t1[i1]=t[i];
 for(int i2=0; i2<n2; i2++, i++)
  t2[i2]=t[i];

 mergeSort(t1,n1);
 mergeSort(t2,n2);

 int i1=0;
 int i2=0;

 for(i=0; i<n; i++)
 {
  if(i1==n1)
  {
   t[i]=t2[i2];
   i1++;
   continue;
  }

   if(i2==n2)
   {
    t[i]=t1[i1];
   i1++;
   }
   else
  {
   t[i]=t2[i2];
   i2++;
  }
 }
}


int main()
{

    mergeSort(t,n);
    print(t,n);
    return 0;
}
