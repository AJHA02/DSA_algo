// Function - BubbleSort
// Bubble-Sort is the sorting algorithm that sorts an array in O(n^2)

#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>&arr)
{
    int temp;
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array"<<endl;
    for (int i=0; i<arr.size(); i++) 
    {
        cin>>arr[i];
    }
    bubbleSort(arr);
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}
