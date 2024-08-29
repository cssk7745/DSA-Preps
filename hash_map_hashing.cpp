#include<iostream>
using namespace std;
int hashing[1000000];

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    // input queries 
    int q;
    cin>>q;
    for(int i = 0;i<n;i++)
    {
        hashing[arr[i]] +=1; 
    }
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hashing[number]<<endl;
    }
    return 0;
}
