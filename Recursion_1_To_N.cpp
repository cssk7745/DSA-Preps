#include<iostream>
using namespace std;
void f(int i,int n){
    if(i>n) return;
    cout << i << endl;
    f(i+1,n);

}

int main() 
{
    int x;
    cin >> x;
    f(1,x);
    return 0;
}