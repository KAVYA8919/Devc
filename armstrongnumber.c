#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,rem,i;
	int result=0;
	scanf("%d",&n);
    while(n>0)
	{
		num/=10;
	    rem=num%10;
		result+=pow(rem,i);
	}
	if(n==result)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
