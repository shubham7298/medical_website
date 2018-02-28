//Vile Grasshoppers
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   long long int y,p,f=0,d;
    cin>>p>>y;
    int a[y-p];
    if(p==y)
    {cout<<"-1"; return 0;}
    for(int i=y-p-1;i>=0;i--)
    {  f=0;
       a[i]=p+i+1;
     
     if(p>sqrt(a[i]))  d=sqrt(a[i]);
     else          d=p;
        for(int j=2;j<=d;j++)
        {   // cout<<a[i]<<" "<<f<<" ";
            if(a[i]%j==0)
            {
                f=1; break;
            }
           
        } if(f==0)
            {
                cout<<a[i];
                return 0;
            }
    }
    cout<<"-1";
  
    return 0;
}
