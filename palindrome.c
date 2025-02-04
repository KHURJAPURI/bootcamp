// palindrome.
#include<stdio.h>
int main()
{
	int n,t;
	int rev=0;
	int x=n;
	printf("Enter the numbers:");
	 scanf("%d",&n);
     while(n!=0)
     {   
        t=n;
        t=t%10;
        rev=rev*10+t;
     	n=n/10;
    
	 }
	 if(x==rev)
	 {
	 	printf("palindrome");
	 }
	 else{
	 	printf("not palindrome");
	 }
	 return 0;
}
