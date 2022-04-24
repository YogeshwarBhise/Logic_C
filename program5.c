#include<stdio.h>

int Addition(int ,int);

int main()
{
	auto int iNo1 = 0;
	auto int iNo2 = 0;
	auto int iNo3 = 0;
	
	printf("Enter Your First Number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter Your Second Number: \n");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	
	printf("Addition is: %d",iNo3);
	return 0;
}

int Addition(int iValue1,int iValue2)
{
	auto int iAns = 0;
	iAns = iValue1 + iValue2;
	return iAns;
}