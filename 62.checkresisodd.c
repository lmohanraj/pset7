#include<stdio.h>
int main()
{
	int n,i,d;
	printf("input\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		d=n/i;
		if(n%i==0)
		{
		if(d%2!=0)
		{
			printf("output : %d",i);
			break;
		}
		}
	}
	return 0;
}
