#include "bits/stdc++.h"
using namespace std;
int main(){
    int arr[100];
    int i,n;
    cin>>n;
    for ( i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    for (i = n-1; i >= 0 ; i--)
    {
        cout<<arr[i];
    }
    
    
}
