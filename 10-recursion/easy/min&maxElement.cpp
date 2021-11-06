
// maximum and minimum in an array...

#include<iostream>
using namespace std;

int findMin(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return min(arr[n-1],findMin(arr,n-1));
}

int findMax(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],findMax(arr,n-1));
}

int main ()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]); //5
    cout<<findMin(arr,n);
    cout<<endl;
    cout<<findMax(arr,n);
  return 0;
}
