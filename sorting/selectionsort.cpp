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
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i <= n-2; i++)
    {
        int min = i;
        for(int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    
    cout <<"Elements in sorted manner:"<<endl;
     for(int i = 0; i<n; i++)
    {
        cout<<arr[i] <<endl;
    }
}

/*
Input:
Enter size:
5
Enter elements:
20
-9
92
17
34
Output:
Elements in sorted manner:
-9
17
20
34
92
*/
