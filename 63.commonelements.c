 #include<stdio.h>
 int main()
 {
 	int n,i,j,a[20],b[20];
 	printf("input\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 		scanf("%d",&a[i]);
 		for(i=0;i<n;i++)
 		scanf("%d",&b[i]);
 		printf("output :\n");
 		for(i=0;i<n;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				if(a[i]==b[j])
 				printf("%d ",a[i]);
 			}
 		}
 		return 0;
 
 }
