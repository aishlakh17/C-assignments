/*********************************************************************************************/
/*Q.1 Write a program which accept number from user and return the count of even digits.

Input:2328
Output:3


#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if((iDigit % 2)== 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/**************************************************************************************************/
/*Q.2 Write a program which accept number from user and return the count of odd digits.

Input:123549
Output:4


#include<stdio.h>

int CountOdd(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if((iDigit % 2)!= 0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountOdd(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/***************************************************************************************************************/
/*Q.3 Write a program which accept number from user and return the count of digits in between 3 and 7.

Input:3456546
Output:6


#include<stdio.h>

int CountRange(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if((iDigit >3)&&(iDigit<7))
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountRange(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/*****************************************************************************************************/
/*Q.4 Write a program which accept number from user and return multiplication of all digits.

Input:4256
Output:240


#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit=0,iMult=1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit =iNo %10;
		if(iDigit > 0 )
		{
			iMult=iMult * iDigit;
		}
		iNo=iNo/10;
	}
	return iMult;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/******************************************************************************************************************************/
/*Q.5 Write a program which accept number from user anf difference between summation even digits and summation odd digits 

Input:2395
Output:-15


#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit=0,iSumEven=0,iSumOdd=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		if((iDigit % 2)==0)
		{
			iSumEven = iSumEven + iDigit;
		}
		else
		{
			iSumOdd = iSumOdd +iDigit;
		}
		
		iNo = iNo/10;
	}
	
  return (iSumEven - iSumOdd);
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/******************************************************************************************/