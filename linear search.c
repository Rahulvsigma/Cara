#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("found\n");
            break;
        }
    }
    if(i>=n)
    {
        printf("Not found\n");
    }

}