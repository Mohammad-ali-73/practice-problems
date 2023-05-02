#include <iostream>
using namespace std;

int twosum(int n,int arr[],int target)
{
    int a = 0,b = 0;
    for(int i = 0; i<n-1 ;i++)
    {
        for(int j = i+1 ; j<n ;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                a = i;
                b = j;
            }
        }
    }
    return (a,b);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

     cout<<twosum(n,arr,target)<<endl;;
    return 0;
}
