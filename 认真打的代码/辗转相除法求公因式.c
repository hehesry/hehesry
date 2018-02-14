#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("%d\n",a);
	}
	else if(b<a)
	{
		do
		{
			i=(a%b);
			a=b;
			b=i;
		}while(i!=0);
			printf("%d\n",a);
	}
	else if(a<b)
	{
		do
		{
			i=(b%a);
			b=a;
			a=i;
		}while(i!=0);
			printf("%d\n",b);
	}
	return 0;
}
