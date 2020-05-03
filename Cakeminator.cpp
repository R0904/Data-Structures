#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int row=r,col=c,t;
    char a[r][c];
    for(int i=0;i<r;i++)
    {
        bool b=true;
      for(int j=0;j<c;j++)
      {
          cin>>a[i][j];
          if(a[i][j]=='S')
            b=false;
      }
      if(b==false)
        row--;
    }


        for(int i=0;i<c;i++)
    {
        bool b=true;
      for(int j=0;j<r;j++)
      {
          if(a[j][i]=='S')
            b=false;
      }
      if(b==false)
        col--;
    }
    t=col*r+row*(c-col);
    cout<<t<<endl;



    return 0;
}
