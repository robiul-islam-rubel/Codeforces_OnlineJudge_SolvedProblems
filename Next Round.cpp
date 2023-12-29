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
#define endl '\n'

using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,m,c;
  cin>>n>>m;
  int a[n];
  c=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }

  for(int i=0;i<n;i++){
      if(a[i]>=a[m-1]&&a[i]>0)
      {
          c++;
      }
  }
  cout<<c<<endl;

  return 0;
}
 
