 #include<stdio.h>
 int main()
 {
 	int i,j,n,k,t,a[20];
 	printf("inputs\n");
 	scanf("%d%d",&n,&k);
 	for(i=0;i<n;i++)
             scanf("%d",&a[i]);
             for(i=0;i<n;i++)
             {
             	for(j=0;j<n;j++)
             	{
             		if(a[i]<a[j])
             		{
             			t=a[i];
             			a[i]=a[j];
             			a[j]=t;
             		}
             	}
             }
             for(i=0;i<n;i++)
             {
             	if(a[i]<k)
             	printf("%d ",a[i]);
             }
             return 0;
 }
