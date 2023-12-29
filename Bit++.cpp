#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<iomanip>
#include<queue>
#define ll long long
#define pb push_back

using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,l,m;
  cin>>n;
  l=0,m=0;
  for(int i=0;i<n;i++)
  {
      string s;
      cin>>s;
      if(s=="++X"||s=="X++")
      {
          l++;
      }
      else
      {
          m++;
      }
  }
  cout<<l-m<<endl;

  return 0;
}
 
