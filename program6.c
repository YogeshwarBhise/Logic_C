#include<stdio.h>

////////////////////////////////////////////////
//
// Function name:	Addition
// Description: 	Used to perform Addition of 2 numbers
// Input: 			Integer,Integer
// Output: 			Integer
// Date: 			12/04/2022
// Author: 			Yogeshwar Pandurang Bhise
//
///////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{
	auto int iAns = 0;
	iAns = iValue1 +iValue2;
	return iAns;
}
	

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

///////////////////////////////////////////////////
//
//Input :	11 10 	
//Output:	21
//
///////////////////////////////////////////////////