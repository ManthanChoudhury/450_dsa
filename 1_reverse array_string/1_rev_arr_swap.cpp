#include "bits/stdc++.h"
using namespace std;

//?O(n)

void rev_arr(int arr[],int start, int end){
    while (start<end)
    //! if conditons failed loop exited
    {
        //* swapping
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //*  incresing address
        start++;
        end--;
    }
    

}

int main(){
    int arr[100];
    int i,n;
    cin>>n;
    for ( i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    
    rev_arr(arr,0,n-1);
    cout<<endl;
    for ( i = 0; i <= n-1; i++)
    {

        cout<<arr[i]<<" ";

    }
}