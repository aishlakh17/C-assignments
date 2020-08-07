/******************************************************************/
/* Q.1 Write a program which accept one number from user and  off  
		7th of that number if it is on.Return modified number
	Input: 79
	Output:15


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0Xffffffdf;			//0X00000020;
		
		iResult =iNo & iMask;		//iNo ^ iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
}
*/
/*************************************************************************/
/* Q.2 Write a program which accept one number from user and  off  
		7th and 10th bit of that number if it is on.Return modified number
		
		Input:577
		Output:1
	

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0Xfffffdbf;
		
		iResult =iNo & iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
}
*/	
/*****************************************************************************/
/* Q.3 Write a program which accept one number from user and  toggle 
		7th bit of that number if it is on.Return modified number
		
		Input:137
		Output:201
		
	
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0X00000040;
		
		iResult =iNo ^ iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
}	
	
*/
/**********************************************************************************/
/* Q.4  Write a program which accept one number from user and  toggle 
		7th and 10th bit of that number if it is on.Return modified number
		
		Input:137
		Output:713
		


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0X00000240;
		
		iResult =iNo ^ iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
}	
	
*/
/********************************************************************************/
/* Q.5 	Write a program which accept one number from user and on its first 4 bits. 
		Return modified number
		
		Input:73
		Output79
		
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0X00000006;            //0X0000000f;
		
		iResult =iNo ^ iMask;		  //iNo | iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 
	 return 0;
}	