#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
int main()
{
    int p=0;
    int y=0;
    int x[y];
    cin>>p;
    for(int m=0;m<p;m++)
    {
        
    
    int i=0;
    int j=0;
    int q=0;
    cin>>y>>q;

    for(int u=0;u<y;u++)
    {
        cin>>x[i];
    }
    quickSort(x, 0,y-1); 
    for(int u=0;u<y;u++)
    {
        if(x[u]>q)
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
        int sum = abs(i-j);
       cout<<sum<<endl;
}
}
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
  
        
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}
