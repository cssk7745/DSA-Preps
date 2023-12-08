#include <iostream>
void f(int i, int n)
{
    if(i>n) return;  // base condition or base case
    std::cout << "Sanjay" << " ";
    f(i+1,n);
}


int main()
{
    int n;
    std::cin>>n;
    f(1,n);
    
    
}
