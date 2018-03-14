#include <stdio.h>

int main(void) 
{
int n,k,a[100],i,j,count=1;
printf("input\n");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		count++;
	}
	if(count==k)
	{
		printf("output=%d",a[i]);
		break;
	}
}
	return 0;
}
