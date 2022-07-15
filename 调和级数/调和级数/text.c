#include<stdio.h>

//int main()
//{
//	double sum = 0;
//	double i = 1.0;
//	while (i <86480040.0f)
//	{
//		sum = sum + 1.0/ i;
//		i=i+1.0;
//	}
//	printf("%lf  %lf", sum,i);
//	return 0;
//}

int main()
{
	int i = 1;
	long long c = 1;
	while (i <= 15)
	{
		c = c * i;
		i++;
	}
	printf("%lld", c);
	return 0;
}