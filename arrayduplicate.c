#include<stdio.h>
int main()
{
	int n,arr[50];
	int i,j,k;
	printf("enter the size of the elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			  for(k=j;k<=n;k++)
			  {
				arr[k]=arr[k+1];
			  
			  }
			  n--;
			  j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
