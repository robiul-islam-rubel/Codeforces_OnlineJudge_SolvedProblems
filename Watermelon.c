#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=n-2;
 
    if(n==2)
    {
        printf("NO");
    }
 
 
    else if(x%2==0&&1<=n<=100)
    {
        printf("YES");
    }
 
    else
    {
        printf("NO");
    }
}
