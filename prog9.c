#include"header9.h"
//////////////////////////////////////////////////////
//Write a program to perform addition of 2 numbers
//////////////////////////////////////////////////////

int main()
{
	auto int iNo1 = 0;
	auto int iNo2 = 0;
	auto int iNo3 = 0;
	
	printf("Enter First Number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter Second Number: \n");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	
	printf("Addition is : %d",iNo3);
	return 0;
}