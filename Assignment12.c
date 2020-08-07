/**********************************************************************************/
/*Q.1 Write a program which accept number from user and display its digits in reverse order

Input:  2395 
Output: 5
		9
		3
		2


#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit=iNo %10;
		printf("%d\n",iDigit);
		iNo = iNo/10;
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
}
*/
/**********************************************************************************/
/*
Q.2 Write a program which accept number from user and check whether it contains 0 or not.

Input:2395                                       Input:1018
Output:There is no Zero.                         Output:It cintains zero 
	
	
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit=0;
	
	while(iNo != 0)
	{
		iDigit=iNo % 10;
		
		if(iDigit == 0)
		{
			break;
		}
		iNo=iNo/10;
	}
	
	if(iDigit== 0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet= FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	
	if(bRet==TRUE)
	{
		printf("It contains zero");
	}
	else
	{
		printf("There is no zero");
	}
	
	return 0;
}
*/
/******************************************************************************************************/
/* Q.3 Write a program which accept number from user and count frequency of 2 in it.

Input:12226
Output:3


#include<stdio.h>

int CountTwo(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		
		if(iDigit == 2)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/********************************************************************************************/
/* Q.4 Write a program which accept number from user and count frequency of 4 in it.

Input:44444
Output:5


#include<stdio.h>

int CountTwo(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		
		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
*/
/********************************************************************************************/
/*Q.5 Write a program which accept number from user and count frequency of such digits which are less than 6.

Input:354952
Output:5
*/

#include<stdio.h>

int CountTwo(int iNo)
{
	int iDigit=0,iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit=iNo%10;
		
		if(iDigit < 6)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}