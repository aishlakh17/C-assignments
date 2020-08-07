/*****************************************************************************/
/*
Q.1 write a program which accept number from user and print that number of $ and * on screen.

Input : 6
Output: $       *       $       *       $       *       $       *       $       *       $       *

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("$\t");
		printf("*\t");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}

*/
/********************************************************************************************/
/*
Q.2 write a program which accept number from user and print numbers till that number.

Input:8
Output:1       2       3       4       5       6       7       8

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
*/																
/**********************************************************************************************/
/*
Q.3  Write a program which accept number from user and print its number line.

Input:4
Output:-4      -3      -2      -1      0       1       2       3       4

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
*/
/********************************************************************************/
/*
Q.4 Write a program which accept number from user and print all odd numbers upto N.

Input:16
Output:1       3       5       7       9       11      13      15

#include<stdio.h>

void OddDisplay(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt=iCnt+2)
	{
		
			printf("%d\t",iCnt);
			
	}
	
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	OddDisplay(iValue);
	
	return 0;
}

*/
/****************************************************************************************/
/*
Q.5 Write a program which accept N and print first 5 multiples of N.

Input:6
Output:6       12      18      24      30

#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt=0;
	int iMult=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
		
	}
	
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		iMult=iNo * iCnt;
		printf("%d\t",iMult);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	MultipleDisplay(iValue);
	
	return 0;
}
*/