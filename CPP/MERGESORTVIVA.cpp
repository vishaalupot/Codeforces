#include <bits/stdc++.h>
using namespace std;
void merge(int *Arr, int start, int mid, int end) {

	int temp[end - start + 1];

	int i = start, j = mid+1, k = 0;

	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) 
		{
		
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
		
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}
	
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}
void mergeSort(int *Arr, int start, int end) {

	if(start < end) 
	{
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}


int main()
{
	int a[5]={1234,1223,1245,9987,1736};

	
	mergeSort(a,0,5);
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
     
}


