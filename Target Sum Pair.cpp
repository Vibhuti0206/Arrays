#include<iostream>
#include<algorithm>
using namespace std;
void sum(int a[],int n,int target)
{
	sort(a,a+n);
	int left=0;
	int right=n-1;
	while (left < right) { 
        if (a[left] + a[right] == target) 
           {
			 cout<<a[left]<<" and "<<a[right]<<endl;
            
            left++;
            
        }
        else if (a[left] + a[right] < target) 
            left++; 
        else // A[i] + A[j] > sum 
            right--; 
    } 
    
		
	
}
int main()
{
	int n;
	cin>>n;
	
	int arr[999];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	
	sum(arr,n,target);
	
  
	return 0;
}
