#include <iostream>
using namespace std;
    
int  binary(int n,int arr[],int key)
{
    int start = 0;
    int end = n;
    int mid = (start+end)/2;
   while(start<end)
   {
       if(arr[mid] == key)
       {
           return mid;
       }
       
        if(key > arr[mid])
           {
               start = mid+1;
           }
           else
           {
               end = mid-1;
           }

           mid = (start+end)/2;
   }
   return -1;
}

int main() {
int n;
cin>>n;
int arr[n];
for(int i = 0; i<n; i++)
{
    cin>>arr[i];
}
int key;
cin>>key;

 int index = binary(n,arr,key);
 cout<<"index is: "<<index<<endl;
 return 0;
}
