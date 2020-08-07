/***************************************************************/
/* Q.1 Write a program which accept one number from user and 
		count number of ON (1) bits in it without using % and / 
		operator
		Input:11
		Output:3
	
#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	UINT iCnt=0,iMask=1,iResult=0;
	
	while(iMask <= iNo)
	{
		iResult = iNo & iMask;
		if(iResult !=0)
		{
			iCnt++;
		}
		iMask= iMask << 1;
	}
	return iCnt;
}
int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountOne(iValue);
	printf("%d",iRet);
	
	return 0;
}
*/
/**********************************************************/
/* Q.2 Write a program which accept two numbers from user and display 
		position of common on bits from that two numbers
		
		Input: 10 15  (1010  1111)
		Output: 2, 4
		
		
		
#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
	UINT iPos=1,iResult=0,iMask=0X1;
	iResult= iNo1 & iNo2;
	while(iMask <= iResult )
	{
		
		if((iMask & iResult)!= 0)
		{
			printf("%d\t",iPos);
			
		}
		iPos++;
		iMask=iMask<<1;
	
	}
	
}	
int main()
{
	UINT iValue1=0,iValue2=0 ;

	printf("Enter the two numbers\n");
	scanf("%d\t%d",&iValue1,&iValue2);
	
	CommonBits(iValue1,iValue2);
	
	return 0;
}
*/
/***********************************************************************/
/* Q.3 	Write a program which accept one number from user and check whether 
	9th or 12 th bits is on or off
	Input:257
	Output:TRUE


	
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
{
	UINT iMask=0,iResult=0;
	
	iMask=0X00000101;
	
	iResult= iNo & iMask;
	
	if((iResult== iMask)||(iResult==0X00000100)||(iResult==0X00000001))
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
	UINT iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet== TRUE)
	{
		printf("The bit is On");
	}
	else
	{
		printf("The bit is off");
	}
	return 0;
	
}
*/
/*****************************************************************/
/* Q.4 Write a program which accept one number ,two positions from user and check whether first or second position is on or off.
	Input: 10 3 7
	Output: TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo,int iPos1, int iPos2)
{
	UINT iMask1=0,iMask2=0,iMask=0,iResult=0;
	
	if((iPos1<1)||(iPos1>32)||(iPos2<1)||(iPos2>32))
	{
		return FALSE;
	}
	
	iMask1= iMask1 << (iPos1-1);
	iMask2=iMask2 << (iPos2-1);
	
	iMask=iMask1 | iMask2;
	
	iResult= iNo & iMask;
	
	if((iResult== iMask)||(iResult== iMask1)||(iResult==iMask2))
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
	
	UINT iValue=0,iPos1=0,iPos2=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos1);
		
	printf("Enter the Position\n");
	scanf("%d",&iPos2);
	
	bRet= ChkBit(iValue,iPos1,iPos2);
	
	if(bRet== TRUE)
	{
		printf("The bit is ON");
	}
	else
	{
		printf("The bit is OFF");
	}
	
	 return 0;
}
*/
/******************************************************************/
/* Q.5 Write a program which accept one number , range of positions from user and toggle all bits from that range
Input:897 9 13



				Not solved
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart,int iEnd)
{
	UINT iMask1=0,iMask2=0,iMask=0,iResult=0;
	
	if((iStart>iEnd)||(iStart<1)||(iStart>32)||(iEnd<1)||(iEnd>32))
	{
		return iNo;
	}
	
	iMask1=0Xffffffff;
	iMask2=0Xffffffff;
	
	iMask1=iMask1 <<(iStart - 1);
	iMask2=iMask2 >> (32- iEnd);
	
	iMask = iMask1 & iMask2;
	
	iResult = iNo ^ iMask;

return iResult;
}
int main()
{

		UINT iValue=0,