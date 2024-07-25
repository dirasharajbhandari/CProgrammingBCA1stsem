#include<stdio.h>
int main()
/*1011 into decimal*/
{
	int n,base=1,rem,sum=0;
	printf("n:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*base;
		n=n/10;
		base=base*2;
		
	}
	printf("%d",sum);
	return 0;
}