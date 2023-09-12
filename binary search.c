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

 int low=0;
 int high=n-1;
 while(low<=high)
 {
    int mid=(low+high)/2;
    if(a[mid]==key)
    {
      printf("found\n");
      break;
    }
    else if(a[mid]<key)
    {
      low=mid+1;
    }
    else
    {
     high=mid-1;
    }
}
if(low>=high)
{
    printf("Not found \n");
}
}