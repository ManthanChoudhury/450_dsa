// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    int low = 0;
    int mid =0;
    int high = n -1;
    int temp;

    while (mid<=high)
    {
        if(a[mid] == 0){
            temp = a[low];
            a[low]= a[mid];
            a[mid] = temp;
             
            low++;
            mid++;

            //!alternative
            //*swap(a[low++],a[mid++]);
        }

        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        //!swap(a[mid],a[high--]);
        }
        
        
    }
    
}