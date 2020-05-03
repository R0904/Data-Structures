#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   int a[x][x];
   a[0][0]=1;
   for(int i=1;i<x;i++)
   {
       a[0][i]=1;
       a[i][0]=1;
   }
   for(int i=1;i<x;i++)
   {
       for(int j=1;j<x;j++)
       {
           a[i][j]=a[i-1][j]+a[i][j-1];
       }
   }
   cout<<a[x-1][x-1]<<endl;
    return 0;
}
