
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
      int x,flag=0;
      cin>>x;
      if(x==2) flag=0;
      else if(x==0 || x==1 || x%2==0) flag=1;
      else{
            for(int i=3;i<=x/2;i=i+2)
            {
                if(x%i==0)
                {
                    flag=1;
                    break;
                }
            }
      }

      if(flag==0) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
}
