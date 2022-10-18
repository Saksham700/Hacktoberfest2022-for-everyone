#include <stdio.h>
int main()
{
	int n,count = 0, count_1 = 0;
	printf("Enter no. to check no is prime or not :");
	scanf("%d",&n);
	
	int i=0;
	for(i = 2;i < n;i++)
	{
		count_1++;
		if(n%i == 0)
		{
			count++;
			break;
		}
	}
	if(count == 0)
		printf("Prime number\n");
	else
		printf("Not a Prime number\n");
	printf("Frequency Count is : %d\n",count_1);	
}
