#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,0,2,1};
    int l,m,h;
    for(int i=0;i<5;i++)
    {
        if(a[i]=='0')
        {
            swap(a[m],a[l]);
            m++;
            l++;
        }
        else if(a[i]=='1')
        {
            m++;
        }
        else
        {
         swap(a[h],a[l]);   
         h--;
         l++;
        }
    }
    for(auto i:a)
    {
        cout<<i<<endl;
    }
}