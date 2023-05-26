#include<stdio.h>
main()
{
	int a=25,b=43,c=67,d=78;
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(b<c)
			{
				printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		if(a<d)
		{
			if(c<d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
   
	
}
