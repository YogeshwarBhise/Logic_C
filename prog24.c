//Program to accept a number from user and
//Find out whether or not the number is divisible by 3 and 5

#include<stdio.h>
#include<stdbool.h>

bool Chk2(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	if(((iNo % 3)== 0) && ((iNo % 5) ==0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bret = false;
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	bret = Chk2(iValue);
	
	if(bret == true)
	{
		printf("%d is divisible by 3 and 5",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 and 5",iValue);
	}
	return 0;
}