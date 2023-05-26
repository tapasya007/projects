#include<stdio.h>
main()
{
	int unit,ele_bill,sr,total_ele_bill;
	printf("enter electricity unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		ele_bill=unit*0.50;
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+20;
	}
	if(unit<=100)
	{
		ele_bill=unit*1.20+20;
	}
	else if(unit<=250)
	{
		ele_bill=(unit-100)*1.20+20;
	}
	if(unit<=250)
	{
		ele_bill=(unit-250)*1.50+20;
	}
	
	printf("%d",ele_bill);
	
}
