 #include<stdio.h>
 int main()
 {
 	int i,j,n,k,c=0,a[20];
 	printf("input\n");
 	scanf("%d%d",&n,&k);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(a[i]+a[j]==k)
 			c++;
 		}
 	}
 	if(c>0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
