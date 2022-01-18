#include <stdio.h>
int main(void)
{
	int a,b,i,n=0,e,s[30],sum=0;

	printf("Enter number here:");
	scanf("%d",&a);
	b = a;
	while(a>0)
	{

		s[n] = a % 10;
        a = a / 10;
		n++;
	}
	for(i=0;i<n;i++)
	{
		sum = (sum + s[i]);
	}
	if(sum > 10){printf("Try again.\n");}
	else
	{
	e = (10-(sum));
	printf("%d\n",(b*10+e));
	}
	main();
	return 0;
}
