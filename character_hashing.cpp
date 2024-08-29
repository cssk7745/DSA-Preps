#include<iostream>
using namespace std;
int hashing[256];

int main() 
{
    string s;       
    cin>>s;
    int q;
    cin>>q;

    for(int i=0;i<s.size();i++)
    {

        hashing[s[i]]++;
    }
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hashing[c]<<endl;

    }
    
    return 0;
}