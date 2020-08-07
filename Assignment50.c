/**************************************************************************************/
/* Q.1 Write a recursive function which accept string from user and count white spaces.

	Input:
	Output:

#include<stdio.h>

int WhiteSpacesI(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int WhiteSpacesR(char *str)
{
	 int iCnt=0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpacesR(str);
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	char Arr[20];
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=WhiteSpacesI(Arr);
	printf("%d\n",iRet);
	
	iRet=WhiteSpacesR(Arr);
	printf("%d",iRet);
	
	return 0;
}
*/
/********************************************************************/
/* Q.2 Write a 

	Input:87983
	Output:9


#include<stdio.h>

int MaxI(int iNo)
{
	int iMax=0,iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
	}
	return iMax;
}

int MaxR(int iNo)
{
	int iMax=0,iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		MaxR(iNo);
	}
	return iMax;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MaxI(iValue);
	printf("%d\n",iRet);
	
	iRet=MaxR(iValue);
	printf("%d",iRet);
	
	return 0;
}
*/
/************************************************************************************/
/* Q.3 count of small characters
	
	Input: HelloWOrld	
	Output:7


#include<stdio.h>

int SmallI(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int SmallR(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		SmallR(str);
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char Arr[20];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=SmallI(Arr);
	printf("%d\n",iRet);
	
	iRet=SmallR(Arr);
	printf("%d",iRet);
	
	return 0;
}
*/
/**************************************************************************/
/* Q.4 Input:87893
		Output:3
	
	
#include<stdio.h>

int MinI(int iNo)
{
	int iMin=9,iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
	}
	return iMin;
}

int MinR(int iNo)
{
	int iMin=9,iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
		MinR(iNo);
	}
	return iMin;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MinI(iValue);
	printf("%d\n",iRet);
	
	iRet=MinR(iValue);
	printf("%d",iRet);
	
	return 0;
}	

*/
/************************************************************************************/
/* Q.5 Input:523
		Output:325
	*/

#include<stdio.h>

// int ReverseI(int iNo)
// {
	// int iDigit=0,iRev=0;
	
	// while(iNo>0)
	// {
		// iDigit=iNo%10;
		// iRev=iRev*10+iDigit;
		// iNo=iNo/10;
	// }
	// return iRev;
// }

int ReverseR(int iNo)
{
	int iDigit=0,iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
		
		ReverseR(iNo);
	}
	return iRev;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	// iRet=ReverseI(iValue);
	// printf("%d\n",iRet);
	
	iRet=ReverseR(iValue);
	printf("%d",iRet);
	
	return 0;
}