#include<bits/stdc++.h>
using namespace std;
void sort()
{
	int i,a,n,j;
	cout<<"enter length of array"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout <<"enter the array (e.g. 2 3 5 1 8 6 ...)"<< endl;
	for (i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
		for (i=0;i<=n-1;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"which sorting method you want to use";
	cin>>a;
	
	switch (a)
	{
	
		case 1:
		{
			//bubble sort
			for (i=0;i<=n-1;i++)
			{
				for(int j=0;j<=n-i-1;j++)
				{
					if (arr[j]>arr[j+1])
					{
						swap(arr[j],arr[j+1]);
					}
				}
			}
		}
		case 2:
		{
			//selection sort
			for(i=0;i<=n-1;i++)
			{
				for(j=i+1;j<=n-1;j++)
				{
					if (arr[i]>arr[j])
					{
						swap(arr[i],arr[j]);		
					}
				}
			}
		}
		case 3:
			{
				for(i=0;i<=n-1;i++)
				{
					
				}
			}
	}
	for (i=0;i<=n-1;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
    sort();
}
