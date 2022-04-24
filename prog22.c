#include<stdio.h>

int Summation(int iNo1)
{
	auto int iCnt = 0;
	auto int iSum = 0;
	
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	for(iCnt = 1; iCnt <= iNo1; iCnt++)
	{
		iSum = iCnt + iSum;
	}
	return iSum;
}

int main()
{
	auto int iValue = 0;
	auto int iRet = 0;
	
	printf("Please Enter Number: \n");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	printf("%d",iRet);
	return 0;
}



























/*//Accept number from user and print the summation till that number

#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= iNo; iCnt++)
	{
		iSum = iCnt + iSum;
	}
	
	return iSum;
} 

int main()
{
	auto int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	int iret = 0;
	iret = Summation(iValue);
	
	printf("%d\n",iret);
	
	return 0;
}
*/
/*
	START
	Accept number from user
	Check whether number is Negative or not.
	If it is negative then convert it into positive.
	
	Create one variable as iSum and set it as 0.
	Create one varible as iCnt and set it as 0.
	
	Iterate till iCnt is less than or equal to No
	Add the value of Cnt into the Variable iSum.
	Increment the value of iCnt by 1
	Loop
	
	Display Value of Sum
	END
*/
