//strong number
#include<stdio.h>
int main()
{
	int n=153,i,fact=1;
	int sum=0,d;
	while(n>0)
	{  
	 d=n%10;
	 for(i=1;i<=d;i++)
	 { 
	 	fact=fact*i;
	 }
	 	sum=sum+fact;
	    n=n/10;	
    }
    if(n==sum)
    {
	 printf("strong");
    }
    else
    {
    	printf("not");
	}
	 return 0;
}
