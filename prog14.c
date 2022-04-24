/*#include<stdio.h>

//Demonstartion For Iteration

void Display()
{
	int iCnt = 0;
  //for(initilization;Condition;Displacement)
	for(iCnt = 1     ;iCnt<=5  ;iCnt++)
	{
		printf("Hello\n"); //Loop Body
	}
}

int main()
{
	Display(); //function call
	return 0;
}*/

#include<stdio.h>

void Display()
{
	int iCnt = 0;

	for(iCnt = 0;iCnt<5;iCnt++)
	{
		printf("Hello\n");
	}
	printf("Value of iCnt: %d",iCnt);
}

int main()
{
	Display();
	return 0;
}