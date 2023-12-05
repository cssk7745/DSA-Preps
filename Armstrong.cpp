#include <cmath>
bool checkArmstrong(int n){
	//Write your code here
	int digit,temp;
	int count=0;
	int x = n;
	temp = x;
	
	// for counting number of digits
	while(n!=0) 
	{
		count = count + 1;
		n = n/10;
	}
	int ans = 0;
	while(x!=0) 
	{
		digit = x%10;
		ans = ans + pow(digit,count);
		x = x/10;
	}
	
	if(temp == ans || temp == 1) 
	{
		return true;
	}
	else 
	{
		return false;
	}
	
	
}
