#include<stdio.h>

int main()
{
	auto int iNo1 = 0;
	auto int iNo2 = 0;
	auto int iNo3 = 0;
	
	printf("Enter the First number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter the Second number: \n");
	scanf("%d",&iNo2);
	
	iNo3  = iNo1 + iNo2;
	
	printf("Addition is : %d\n",iNo3);
	return 0;
}