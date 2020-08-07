/**************************************************************************/
/* Q.1 Write a program which accept one number and position from user 
		and check whether bit at that position is on or off. If bit is 
		on return TRUE otherwise return FALSE.
		
		Input:10 2
		Output :TRUE
		
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
	UINT iMask=0X00000001;
	UINT iResult=0;
	
	if((iPos < 1)||(iPos>32))
	{
		return FALSE;
	}
	
	
	iMask = iMask<<(iPos-1);
	
	iResult= iNo & iMask;
	
	if(iResult == iMask)
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
	UINT iValue=0,iPos=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	 
	bRet=ChkBit(iValue,iPos);
	
	if(bRet== TRUE)
	{
		printf("The bit is ON");
	}
	else
	{
		printf("The bit is OFF");
	}
	
	 
	 //printf("%d",iRet);
	 
	 return 0;
}

*/
/*****************************************************************************/
/*Q.2 Write a program which accept one number and position from user 
		and off that bit. Return modified number.
	Input:10 2
	Output:8


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	UINT iResult=0,iMask=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask = 0X00000001;
	iMask = ~iMask << (iPos-1);
	
	iResult=iNo & iMask;
	
	return iResult;
}

int main()
{
	UINT iValue=0,iPos=0;
	UINT iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	
	iRet= OffBit(iValue,iPos);
	printf("%d",iRet);
		
	return 0;
}
*/
/********************************************************************/
/* Q.3  Write a program which accept one number and position from user 
		and on that bit. Return modified number.
	Input:10 2
	Output:14

	
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	UINT iResult=0,iMask=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask = 0X00000001;
	iMask = iMask<<(iPos-1);
	
	iResult=iNo | iMask;
	 
	return iResult;
}

int main()
{
	UINT iValue=0,iPos=0;
	UINT iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	
	iRet= OffBit(iValue,iPos);
	printf("%d",iRet);
		
	return 0;
}	
*/
/*******************************************************************/
/* Q.4 Write a program which accept one number and position from user 
		and toggle that bit. Return modified number.
	Input:10 3
	Output:14

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	UINT iResult=0,iMask=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask = 0X00000001;
	iMask = iMask<<(iPos-1);
	
	iResult=iNo ^ iMask;
	 
	return iResult;
}

int main()
{
	UINT iValue=0,iPos=0;
	UINT iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	
	iRet= OffBit(iValue,iPos);
	printf("%d",iRet);
		
	return 0;
}	
*/
/*************************************************************************************/
/* Q.5 Write a program which accept one number from user and toggle contents of first 
		and last nibble of the number . Return modified number.

*/
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
		UINT iResult=0,iMask=0;
		
		iMask=0Xf000000f;
		
		iResult = iNo^iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet= ToggleBit(iValue);
	printf("%d",iRet);
	
	return 0;
}
