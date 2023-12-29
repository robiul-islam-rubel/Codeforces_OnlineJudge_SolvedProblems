#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
   ll t,n,a,b,c,d,cnt,sum;
 
   cin>>t;
   string s="codeforces";
   while(t--)
   {
       char c;
       cin>>c;
         bool ispresent=false;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==c)
         {
             ispresent=true;
             break;
         }
     }
   if(ispresent)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
       
   }
 
    return 0;
}
