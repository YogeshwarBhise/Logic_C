//Write a c program to accept input from user
//To buy gold coin
//Available gold coins are of 1grams,2grams,5grams,10grams Only

//1   4000
//2   8000 
//5   20000
//10  40000

#include<stdio.h>

void JewellersPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1: 
			printf("Your Bill Amount is 4000");
			break;
			
		case 2: 
			printf("Your Bill Amount is 8000");
		break;
		
		case 5: 
			printf("Your Bill Amount is 20000");
			break;
		
		case 10: 
			printf("Your Bill Amount is 40000");
			break;
		
		default:
			printf("Invalid Weight\n");
	}
}

int main()
{	
	auto int iValue = 0;
	printf("Available gold coins are of 1grams,2grams,5grams,10grams Only\n");
	printf("Enter the gold coins weight you want to buy\n");
	scanf("%d",&iValue);
	
	JewellersPortal(iValue);
	
	return 0;
}