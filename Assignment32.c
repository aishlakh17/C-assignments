/****************************************************************/
/* Q.1 Write a program which checks whether 15th bit is ON or OFF.


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask=0;
	UNIT iResult =0;
	
	iMask = 0X00004000;
	
	iResult = iNo & iMask;
	
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
	UNIT iValue=0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet == TRUE)
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
/***********************************************************************************/
/* Q.2 Write a program which checks whether 5th and 18th bit is ON or OFF.	

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask=0;
	UNIT iResult =0;
	
	iMask = 0X00020010;
	
	iResult = iNo & iMask;
	
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
	UNIT iValue=0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet == TRUE)
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

/**********************************************************************************************/
/* Q.3 Write a program which checks whether 7th and 15th  & 21st  28 th bit is ON or OFF.	



#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask=0;
	UNIT iResult =0;
	
	iMask = 0X08104040;
	
	iResult = iNo & iMask;
	
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
	UNIT iValue=0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet == TRUE)
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
/*********************************************************************************/
/* Q.4 Write a program which checks whether 7th and 15th  & 21st  28 th bit is ON or OFF.	



#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask=0;
	UNIT iResult =0;
	
	iMask = 0X000001C0;
	
	iResult = iNo & iMask;
	
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
	UNIT iValue=0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet == TRUE)
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
/******************************************************************************/
/* Q.5 Write a program which checks whether first and last bit is on or off 
		First bit means bit number 1 and last bit means bit number 32.
		
		*/
		
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;
 
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
	UNIT iMask=0;
	UNIT iResult =0;
	
	iMask = 0X80000001;
	
	iResult = iNo & iMask;
	
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
	UNIT iValue=0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("The bit is ON");
	}
	else
	{
		printf("The bit is OFF");
	}
	
return 0;
}		
