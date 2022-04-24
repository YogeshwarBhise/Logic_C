////////////////////////////////////////////////
//
#include"header9.h"
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
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;	
	}
	
	if(iValue2 < 0)
	{
		iValue2 = -iValue2;	
	}
	
	iAns = iValue1 +iValue2;
	return iAns;
}