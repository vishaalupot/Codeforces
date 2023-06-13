#include <bits/stdc++.h>
using namespace std;

int swap(int *a, int *b)
{
	 int t = *a; 
    *a = *b; 
    *b = t; 
}
int part(int arr[],int l,int h)
{
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<h-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[j],&arr[i]);	
		}
		
	}
	swap(&arr[i+1],&arr[h]);
	return i+1;
}
void quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
	int pivot=part(arr,l,h);
	
	quicksort(arr,l,pivot-1);
	quicksort(arr,pivot+1,h);
	}
	
	
}

int main()
{
	int arr[6]={30,70,20,80,10,40};
	int p=6;
	quicksort(arr,0,p-1);
	for(int i=0;i<6;i++)
	cout<<arr[i]<<endl;
	
	
}
