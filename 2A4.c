#include<stdio.h>
int main()
{
	int year;
	printf("Enter year ");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("Year is Leap Year");
			
			}else
			{
				printf("Year is not Leap year");
			}
		}
		else
			{
				printf("Year is Leap year");
			}
	}
	else
			{
				printf("Year is not Leap year");
			}

 return 0;
}

