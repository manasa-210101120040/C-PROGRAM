#include <stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
