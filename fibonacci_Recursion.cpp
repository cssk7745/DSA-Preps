#include<iostream>
using namespace std;

int f(int n)
{
    if(n<=1) return n;
    else  return f(n-1) + f(n-2);
    
}

int main() 
{
    int n,i;
    cin >> n;
    cout<< "nth fibonacci"<<endl;
    cout<< f(n)<<endl;
    cout<<"n fibonacci numbers"<<endl;
    for(i=0;i<=n;i++) cout<<f(i)<<" ";
    cout<<"\n";
    cout<< "Sum of n fibonacci numbers"<<endl;
    cout<<f(i-1) + f(i-2);
    return 0;

}