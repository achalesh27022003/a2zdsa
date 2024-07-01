// Bubble sort: maximum element at the last of the array using adjacent swaps.

#include<bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cout <<"Enter size:"<<endl;
    cin>>n;
    
    int arr[n];
    cout <<"Enter elements:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=n-1; i>=1; i--)
    {
        for(int j=0; j<=i-1; j++)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
    
    cout <<"Elements in sorted manner:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

/* Input:
Enter size:
10
Enter elements:
90
47
0
12233
-9
-1222
87
999
-999
006

Output:
Elements in sorted manner:
-1222
-999
-9
0
6
47
87
90
999
12233
*/  
