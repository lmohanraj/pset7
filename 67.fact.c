 #include<stdio.h>
 int main()
 {
 	int n,fact=1,i;
 	printf("input\n");
 	scanf("%d",&n);
 	for(i=n;i>0;i--)
 	{
 		fact=fact*i;
 	}
 	printf("output=%d",fact);
 	return 0;
 }
