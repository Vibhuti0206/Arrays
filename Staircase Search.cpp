#include<iostream>
using namespace std;
void staircase(int a[][30],int n,int m,int key)
{
  int i=0;
  int j=m-1;
  while(i<n && j>=0)
  {
      if(a[i][j]==key)
      {
          cout<<"1"<<endl;
          return;
      }
      else if(a[i][j]>key)
      {
          j--;
      }
      else
      
      {
          i++;
      }
     
  }
  cout<<"0";
}
int main() {
    int n,m;
    cin>>n>>m;
	if(n<=0 || m<=0)
	{
		cout<<"0"<<endl;
		return 0;
	}
    int arr[30][30];
    for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}
int number;
cin>>number;
staircase(arr,n,m,number);
	return 0;
}
