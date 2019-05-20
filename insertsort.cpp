//Code for insertion sort

#include<iostream>
using namespace std;

int insertsort(int arr[],int n);

int main()
{
	
	int a[10],n;
	cout<<"Enter number of elements";
	cin>>n;
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertsort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}

int insertsort(int arr[],int n)
{int temp,j;
	for(int i=0;i<n;i++)
	{
		temp=arr[i];j=i-1;
	while(j>=0&&arr[j]>temp)
		{
		arr[j+1]=arr[j];
		j--;
		}
		
	arr[j+1]=temp;
	
	}
}
