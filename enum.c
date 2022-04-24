//enum

#include<stdio.h>

int main()
{
	int i =0;
	enum Gender{Male=1,Female=2};
	
	enum Gender obj;
	
	printf("%d",Male);
	
	printf("Enter your Gender: ");
	scanf("%d",&i);
	
	switch(i)
	{
		case Male:
		printf("MAle\n");
		break;
		
		case Female:
		printf("FemAle\n");
		break;
		
		default:
		printf("Wrong input\n");
	}
	return 0;
}