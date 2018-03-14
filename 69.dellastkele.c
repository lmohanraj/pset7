 #include <stdio.h>
int main(void) 
{
int n,k,a[100],t=1,i;
printf("input\n");
scanf("%d%d",&n,&k);
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
for(i=n-1;t<=k;i--)
{
  a[i]=NULL;
  t++;
}
		
	 printf("\noutput:\n");
	 for(i=0;a[i]!=NULL;i++)
printf("%d ",a[i]);
	return 0;
}
