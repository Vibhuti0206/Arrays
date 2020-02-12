#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k,x,a[n],t;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    
    sort(a,a+n);
    
    for(i=0;i<n;i++)   
    {
        for(j=i+1;j<n;j++)   
        {
            for(k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])==x)
                {
                    cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<endl;
                }
            }
        }
    }
return 0;
}
