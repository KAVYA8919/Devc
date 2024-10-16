//write a program to print the last odd numbers of the arrays
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	int oddno;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		oddno=a[i];
	}
	printf("%d ",oddno);
}
