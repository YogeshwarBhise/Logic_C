//Filter
#include<stdio.h>

void Display(int iNo)
{
	auto int iCnt = 0;
	
	if(iNo < 0)
	{
		printf("Please Enter Positive Value!!\n");
		return;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("Hello\n");
	}
}

int main()
{
	auto int iValue = 0;
	
	printf("Enter how many times to display\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}