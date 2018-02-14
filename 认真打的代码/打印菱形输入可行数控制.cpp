#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&c);
	for(a=1;a<=(c+1)/2;a++)
	{
		for(b=0;b<=(c+1)/2-a;b++)
		{
			printf(" ");
		}
		for(b=1;b<=2*a-1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(a=(c+1)/2+1;a<=c;a++)
	{
		for(b=0;b<=a-(c+1)/2;b++)
		{
			printf(" ");
		}
		for(b=1;b<=2*c+1-2*a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}