#include<iostream>
using namespace std;
int func(int ar[],int n)
{
    int c=0,m=0;
    for(int i=0;i<n;i++)
    {
        c=c+ar[i];
        if(c<0)
        {
            c=0;
        }
        else
        if(c>m)
        {
            m=c;
        }
    }
    return m;
}
int maxcir(int ar[],int n)
{
    int c1=func(ar,n);
    int p=0;
    for(int i=0;i<n;i++)
    {
        p=p+ar[i];
        ar[i]=-ar[i];
    }
    int c2=p+func(ar,n);
    if(c1 > c2)
    {
        return c1;
    }
    else
    {
        return c2;
    }
}
int main()
{
int input;
cin>>input;
int k=1;
while(k<=input)
{
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++)
{
   cin>>ar[i];
}
int y=maxcir(ar,n);
cout<<y<<endl;
k++;
}
return 0;
}
