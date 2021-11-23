#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			if(b!=4)
			{
				
				printf("*");
			}else
			{
				printf("*\n");
				printf("****");
			}
		}
		printf("\n");
	}
	return 0;
}
