#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0) return 1;
    return  n * fact(n-1);
}
int ncr(int n, int r)
{
    int res = 1;
    for(int i=0;i<r;i++)
    {
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}



int main() 
{
    int n,r;
    cin>>n;
    cin>>r;
    cout<<ncr(n-1,r-1);
    return 0;
}