#include "bits/stdc++.h"
using namespace std;

//?O(n)

void rev_arr_recursion(char arr[],int start, int end){
    if(start>=end){
        //!to get exit from loop if start is  greater than end
        return ;
    }
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

    //! recursion repeat itself auto.


    rev_arr_recursion(arr,start+1,end-1);
       

}

int main(){
    char arr[100];
    int i,n;
    cin>>n;
    for ( i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    //! to get size
    //* int size = sizeof(arr)/sizeof(arr[0]);
    rev_arr_recursion(arr,0,n-1);
    cout<<endl;
    for ( i = 0; i <= n-1; i++)
    {

        cout<<arr[i]<<" ";

    }
}