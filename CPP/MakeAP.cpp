#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int countLIS(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> dp(n, 1);
    int count = 0;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[i] - arr[j] == k && arr[i]>arr[j])
            {
                
            }
        }
        count += 1;
    }
    return count;
}
int main()
{
    int k=1;
    vector<int> arr(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << countLIS(arr, k);
    return 0;
}
