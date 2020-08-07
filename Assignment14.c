/*******************************************************************************************/
/* Q.1 Accept number from user and display below pattern.

Input:7
Output:A       B       C       D       E       F       G       H


#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	char ch ='\0';
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for (iCnt=0,ch='A';iCnt <= iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
*/
/********************************************************************************************/
/* Q.2  Accept number from user and display below pattern.

Input:6
Output:6       #       5       #       4       #       3       #       2       #       1       #


#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for (iCnt=iNo ; iCnt>0 ; iCnt--)
	{
		printf("%d\t",iCnt);
		printf("#\t");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
*/
/***********************************************************************************************/
/* Q.3 Accept number from user and display below pattern.

Input:4
Output:1       *       2       *       3       *       4       *


#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for (iCnt=1 ; iCnt<=iNo ; iCnt++)
	{
		printf("%d\t",iCnt);
		printf("*\t");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
*/
/*********************************************************************************************/
/* Q.4 Accept number from user and display below pattern.

Input:5
Output:#       1       *       #       2       *       #       3       *       #       4       *       #       5       *


#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for (iCnt=1 ; iCnt<=iNo ; iCnt++)
	{
		printf("#\t");
		printf("%d\t",iCnt);
		printf("*\t");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
*/
/*********************************************************************************************/
/* Q.5 Accept number from user and display below pattern.

Input:
Output:

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0,iMult=1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for (iCnt=1 ; iCnt<=iNo ; iCnt++)
	{
		iMult= 2 * iCnt;
		printf("%d",iMult);
		
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
*/
/***************************************************************************************/
