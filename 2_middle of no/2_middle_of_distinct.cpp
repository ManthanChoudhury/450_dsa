// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
//? 0(1)
class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        // checking for B
        if((A<B && B<C)||(C<B && B<A)){
            return B;
        }
        // Checking for C
        else if((A<C && C<B)||(B<C && C<A)){
            return C;
        }
        // else A
        else{
            return A;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver 