// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int currentsum = 0;
    int maxsum =0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum +arr[i];
        if (currentsum < 0)
        {
            currentsum =0;
        }
        maxsum = max(currentsum,maxsum);
    }
    return maxsum;
    
}


// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends