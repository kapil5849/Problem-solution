
// sum tringle from array...

#include<iostream>
using namespace std;

void tringlePrint(int arr[],int n){
    if(n<1){
        return;
    }
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        int x=arr[i]+arr[i+1];
        temp[i]=x;
    }
    tringlePrint(temp,n-1);
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<", ";
        }
    }
    cout<<endl;
}

int main ()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]); //5
    tringlePrint(arr,n);
  return 0;
}
