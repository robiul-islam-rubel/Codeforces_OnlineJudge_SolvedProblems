#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l;
    cin>>n;
    char a[105];
    for(i=0;i<n;i++)
    {
        cin>>a;
        l=strlen(a);
        if(l>10)
        {

            cout<<a[0]<<l-2<<a[l-1]<<endl;


        }
        else
        {
            cout<<a<<endl;;
        }



    }
    return 0;
}
