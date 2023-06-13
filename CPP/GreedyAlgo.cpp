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
	int n=0;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		
	int b=0;
	int a[b];
	int l=0;
	int r=0;
	int c=0;
	cin>>b>>c;

	for(int i=0;i<b;i++)
	{
		cin>>a[i];
	}
	mergeSort(a,0,b-1);
	for(int i=0;i<b;i++)
	{
		if(a[i]>c)
		{
			l++;
		}
		else if(a[i]<c)
		{
			r++;
		}
	}
       cout<<abs(l-r)<<endl;
}

}
