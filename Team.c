#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x,y,z,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        if((x+y+z>=2))
        {
            count++;

        }

    }
     printf("%d\n",count);
    return 0;
}
