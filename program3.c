//Write program to accept nos and Perform additon of 2 numbers 

#include<stdio.h>

int main()
{
	auto int i =0;
	auto int j =0;
	auto int k =0;
	
	printf("Enter First Number \n");
	scanf("%d",&i);
	
	printf("Enter Second Number \n");
	scanf("%d",&j);
	
	k = i + j;
	printf("Addition is : %d \n",k);
	
	return 0;
}