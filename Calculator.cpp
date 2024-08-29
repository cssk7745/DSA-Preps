#include<iostream>
using namespace std;


int main() 
{
    float num1,num2,res;
    char oper;
    // create a calculator app 
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Enter the operation you want to perform(+,-,*,/): "<<endl;
    cin>>oper;

    // switch case for operations logic
    switch(oper)
    {
        case '+':
        res = num1+num2;
        cout<< "Result : "<< num1<<" "<< oper << " "<< num2 << " "<< " = "<< res;
        break;

        // subtraction
        case '-':
        if(num1>num2) res = num1-num2;
        else res = num2-num1;
        cout<< "Result : "<< num1<<" "<< oper << " "<< num2 << " "<< " = "<< res;
        break;
        // multiplication
        case '*':
        res = num1*num2;
        cout<< "Result : "<< num1<<" "<< oper << " "<< num2 << " "<< " = "<< res;
        break;
        // division
        case '/':
        res = num1/num2;
        cout<< "Result : "<< num1<<" "<< oper << " "<< num2 << " "<< " = "<< res;
        break;
        default:
        cout<<"Invalid Operation";
    }
    return 0;

}