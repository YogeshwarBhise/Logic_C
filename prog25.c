#include<stdio.h>

void DisplayClass(float fNo)
{	
	if((fNo > 0.0) && (fNo < 35.0))
	{
		printf("You are in fail class\n");
	}
	else if((fNo >= 35.0) && (fNo < 50.0))
	{
		printf("You are in pass class\n");
	}
	else if((fNo >= 50.0) &&(fNo < 60.0))
	{
		printf("You are in Second class\n");
	}
	else if((fNo >= 60.0) &&(fNo < 70.0))
	{
		printf("You are in First class\n");
	}
	else if((fNo >= 70.0) && (fNo <= 100.0))
	{
		printf("You are in First with distinction class\n");
	}
	else
	{
		printf("Invalid input");
	}
}

int main()
{
	auto float iPercenatge = 0.0;
	
	printf("Enter Your Percenatge: \n");
	scanf("%f",&iPercenatge);

	DisplayClass(iPercenatge);

	return 0;
}

//We cant convert this code in Switch Case bcoz we cant write range in switch 
//In switch we can only write integral constant values