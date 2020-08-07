/********************************************************************************************************/
/*
Q.1 Write a program which accept number from user and if number is less than 50 then print small ,
	  if it is greater than 50 and less than 100 then print medium ,if number is greater than 100 
	 then print large.
	  
Input : 75 
Output: Medium

#include<stdio.h>

void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("Small");
	}
	else if((iNo>=50)&&(iNo<100))
	{
		printf("Medium");
	}
	else if(iNo >=100)
	{
		printf("Large");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Number(iValue);
	
	return 0;
}
*/
/*******************************************************************************************************/
/*
Q.2 Accept single digit from user and print it into word.

Input:5
Output:Five

#include<stdio.h>

void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	switch(iNo)
	{
		case 0: printf("Zerp");
		break;
		
		case 1: printf("One");
		break;
		
		case 2: printf("Two");
		break;
		
		case 3: printf("Three");
		break;
		
		case 4: printf("Four");
		break;
		
		case 5: printf("Five");
		break;
		
		case 6: printf("Six");
		break;
		
		case 7: printf("Seven");
		break;
		
		case 8: printf("Eight");
		break;
		
		case 9: printf("Nine");
		break;
		
		default: printf("Invalid");
		
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
/****************************************************************************************************/
/*
Q.3 Write a program to find Factorial of given numbers

Input:5
Output:Factorial of number is 120


#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt=0,iMult=1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		iMult=iMult * iCnt;
	}
	return iMult;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet= Factorial(iValue);
	
	printf("Factorial of number is %d",iRet);
	
	return 0;
}

*/
/*********************************************************************************************/
/*
Q.4 write a program which accept number from user and display its table.

Input: -5
Output:5       10      15      20      25      30      35      40      45      50


#include<stdio.h>

void Table(int iNo)
{
	int iCnt=0,iMult=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iMult=iCnt * iNo;
		printf("%d\t",iMult);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Table(iValue);
	
	return 0;
}

*/
/************************************************************************************************/
/*
Q.5 Write a program which accept number from user and display its table in reverse order

Input:2
Output:20      18      16      14      12      10      8       6       4       2

#include<stdio.h>

void TableRev(int iNo)
{
	int iCnt=0,iMult=0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=10;iCnt>=1;iCnt--)
	{
		iMult = iCnt * iNo;
		printf("%d\t",iMult);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	TableRev(iValue);
	
	return 0;
}
*/