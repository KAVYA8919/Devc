#include<stdio.h>
int main()
{
	int i,arr[5];
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr[4]=50;
	for(i=0;i<5;i++)
	{
		printf("elements %d:%d\n",i,arr[i]);
	}
	return 0;
}
