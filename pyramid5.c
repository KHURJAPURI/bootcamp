#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=0;i<=5;i++)
 {
 	for(j=0;j<=i;j++)
 	{
 		printf(" ");
	 }
 
 	for(k=0;k<=2*(5-i);k++)
 	{
 		printf("*");
	 }
 
// for(j=i+1;j>=1;j--)
// 	{
// 		printf("");
//	 }
	 printf("\n");
 }
 return 0;
}
 

 
 
