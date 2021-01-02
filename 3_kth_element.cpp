#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<k<<endl;

        sort(a,a+number_of_elements);
        cout<<a[k-1]<<endl;
        
    }
    return 0;
}
