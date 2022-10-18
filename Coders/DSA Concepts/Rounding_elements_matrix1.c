#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
clock_t start, end;
double cpu_time_used;

int main()
{
    int n;
	printf("Please enter the size of array :\n");
	scanf("%d", &n);
	
	double a[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("Elements of matrix are :\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%f   ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int intpart;
	double decpart;
	int i, j;
	
	for( i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			intpart = (int)a[i][j];
			decpart = a[i][j] - intpart;
			if(decpart >= .5)
				a[i][j] += 1;
			else
				a[i][j] -= 1;
		}
	}
	printf("Elements of matrix after rounding off value is :\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%f   ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	m
}
