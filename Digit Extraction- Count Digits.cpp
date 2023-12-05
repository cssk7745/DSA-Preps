int countDigits(int n){
	// Write your code here.
	int d,count=0,temp=n;

        

       while(temp>0){

        d=temp%10;

 

        if((d!=0) && (n%d==0)){

            count++;

        }

        temp=temp/10;

        

       }

       return count;    
}
