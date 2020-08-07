
/*****************************************************************************************************************************/

/*Q.1 Write a program which accept range from user and display all numbers in between that range

Input: 23 37
Output:23      24      25      26      27      28      29      30      31      32      33      34      35      36      37
         

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
	int iCnt=0;
	
	if(iStart > iEnd)
	{
		printf("Invalid Range");
		
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
		
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	RangeDisplay(iValue1,iValue2);
	
	return 0;
}*/
/************************************************************************************************************/

/*Q.2  Write a program which accept range from user and display all even numbers in between that range

Input:23  35
Output: 24      26      28      30      32      34




#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
	int iCnt=0;
	
	if(iStart > iEnd)
	{
		printf("Invalid Range");
		
	}
	
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt % 2)==0)
		printf("%d\t",iCnt);
		
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
}
*/

/**************************************************************************************************************/
/*
Q.3  Write a program which accept range from user and return addition of all numbers in between that range

Input:23 30          Input:-10  2                Input:90   18
Output:212           Output:Invalid Range        Output:Invalid Range


#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;
	
	if((iStart> iEnd) || (iStart<0)||(iEnd < 0))
	{
		printf("Invalid Range");
	}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	iRet=RangeSum(iValue1,iValue2);
	
	printf("Addition is:%d",iRet);
		
	return 0;
}
*/

/*********************************************************************************************************************/
/*Q.4  Write a program which accept range from user and return addition of all even numbers in between that range
 
 Input:23 30
 Output:108

 #include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;
	
	if((iStart> iEnd) || (iStart<0)||(iEnd < 0))
	{
		printf("Invalid Range");
	}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
		iSum=iSum+iCnt;
		}
	}
	return iSum;
}
 
 int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	iRet=RangeSumEven(iValue1,iValue2);
	
	printf("Addition is:%d",iRet);
		
	return 0;
}
  */
/***********************************************************************************************************************/
/*Q.5  Write a program which accept range from user and display all numbers in between that range in reverse order

Input:23  30
Output:35      34      33      32      31      30      29      28      27      26      25      24      23

*/
#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
	int iCnt=0;
	
	if(iStart > iEnd)
	{
		printf("Invalid Range");
		
	}
	
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
	{
		printf("%d\t",iCnt);
		
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	
	RangeDisplayRev(iValue1,iValue2);
	
	return 0;
}