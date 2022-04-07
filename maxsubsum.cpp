#include<iostream>
#include<climits>
using namespace std;
 
void maxSubArraySum(int a[], int size)
{
    int maxsofar = INT_MIN, maxendhere = 0,
       start =0, end = 0, s=0;
 
    for (int i=0; i< size; i++ )
    {
        maxendhere += a[i];
 
        if (maxsofar < maxendhere)
        {
            maxsofar = maxendhere;
            start = s;
            end = i;
        }
 
        if (maxendhere < 0)
        {
            maxendhere = 0;
            s = i + 1;
        }
    }
    cout << maxsofar<< " ";
    cout << start << " ";
    cout<<end << endl;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
       maxSubArraySum(a, n);
    }
   
    return 0;
}
