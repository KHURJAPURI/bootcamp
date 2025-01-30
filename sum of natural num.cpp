#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("enter the num");
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n>=1)
	{
		return n+sum(n-1);
	}
	else{
		return 0;
		
	}
}
