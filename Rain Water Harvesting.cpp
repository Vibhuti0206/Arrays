#include<iostream>
using namespace std;
void save(int arr[],int n)
{
	int left[n];
	int right[n];
	int water=0;
	left[0]=arr[0];
	right[n-1]=arr[n-1];
	for(int i=1;i<n;i++)
	{
		left[i]=max(left[i-1],arr[i]);
	}
	for(int j=n-2;j>=0;j--)
	{
		right[j]=max(right[j+1],arr[j]);
	}
	for(int k=0;k<n;k++)
	{
		water+=min(left[k],right[k])-arr[k];
	}
	cout<<water<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	save(a,n);
	return 0;
}
