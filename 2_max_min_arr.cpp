//Maximum and minimum of an array using minimum number of comparisons
#include "bits/stdc++.h"
using namespace std;
int main(){
    int arr[100];
    int i,n;
    int smallest = INT_MIN;
    int largest = INT_MAX;
    cin>>n;
    for ( i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    for (i = 0; i <= n-1 ; i++)
    {
        if (arr[i] < largest)
        {
            largest = arr[i];
        }
        if (arr[i] > smallest)
        {
            smallest = arr[i];
        }
        
    }
    cout<<"smallest no"<<largest<<endl<<"largest no"<<smallest<<endl;
    /*
    for ( i = 0; i <= n-1; i++)
    {
        largest = max(largest,a[i]);
        smallest = min(smallest,a[i]);
        }
    */
    
}
