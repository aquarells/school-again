#include <iostream>

using namespace std;

const int n=8;
int t[n]={4,1,2,7,5,3,6,8};

void print(int t[], int n)
{
 for(int i=0; i<n; i++)
  cout << t[i] << " ";
 cout << endl;
}

void bucketSort(int t[], int n)
{
 int t2[n] = {};
 for(int i=0; i<n; i++)
  t2[t[i]] += 1;

 int k=0;
 for(int i=0; i<n; i++)
  for(int j=0; j<t2[i]; j++)
  t[k++]=i;


}
int main()
{
 print(t,n);
 bucketSort(t,n);
 print(t,n);


    return 0;
}
