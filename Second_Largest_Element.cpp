#include<iostream>
using namespace std;



int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];
    //  largest element 
    int largest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }
    // find second largest element from largest element
    int slargest = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]!= largest)
        {
            slargest = arr[i];
        }
    }
    cout<<slargest;

}