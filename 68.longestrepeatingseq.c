 #include <stdio.h>

int main(void) 
{
int n,k=2,a[100],i,j,count=1;
printf("input\n");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 if(a[i]==a[i+1])
 {
 	count++;
 	if(i==0)
 	k=count;
 }
 else
 count=1;
 if(count>k)
 {
 k=count;
}
}
		
	 printf("output=%d",k);
	return 0;
}
