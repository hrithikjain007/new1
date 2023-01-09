#include<stdio.h>

int fibonic(int a,int b,int n)
{
	int sum=0;
	for(int i=2;i<n;i++)
	{
		sum=a+b;
		printf("%d ",sum);
		a=b;
		b=sum;
	}
}
int main()
{
	int a=0,b=1,n;
	printf("Enter the size value : ");
	scanf("%d",&n);
	printf("%d ",a);
	if(n==1)
		return 0;
	printf("%d ",b);
	if(n==2)
		return 0;
	int (*fp)(int,int,int)=fibonic;
	fp(a,b,n);
	printf("\n");
	return 0;
}

	

