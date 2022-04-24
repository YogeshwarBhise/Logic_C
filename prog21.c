//Display the number from 1 till user wants

#include<stdio.h>

void Display(int iNo)
{
	auto int iCnt = 0;
	
	if(iNo < 0)
	{	
			iNo = -iNo;
	}
	
	iCnt = 1;
	while(iCnt<=iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter The Number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}