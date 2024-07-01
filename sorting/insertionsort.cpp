// Insertion Sort: Select the element and put it in its correct order.

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
    
    int didSwap = 0;
    int stepComplete = 0;
    int arr[n];
    cout <<"Enter elements:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j-1] > arr[j])
            {
                swap(arr[j-1], arr[j]);
                didSwap += 1;
            }
        }
    }
    
    cout<<"didSwap value: "<<didSwap<<endl;
    cout <<"Elements in sorted manner:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

/*
Input:
Enter size:
7
Enter elements:
14
9
15
12
6
8
13

Output:
didSwap value: 13
Elements in sorted manner:
6
8
9
12
13
14
15
*/
