#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("enter the num");
	scanf("%d",&n);
	printf(" \n sum of serise =% d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n>=1)
	{
		return n+sum(n-1);
		printf(" % d",n);
		
	}
	else{
		return 0;
		
	}
}
