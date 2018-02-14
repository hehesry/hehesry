#include<stdio.h>
int i,j,n;
char c;
void DrawPic(int n,char c)
{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
int main()
{
	scanf("%d%d",&n,&c);
	DrawPic (n,c);
	return 0;
}