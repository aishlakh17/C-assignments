/*****************************************************************************************/
/* Q.1 Write a recursive program which accept number from user and display below pattern

	Input:5
	Output:5	*	4	*	3	*	2	*	1	*



#include<stdio.h>

void DisplayI(int iNo)
{
	int i=0;
	
	for(i=iNo;i>=1;i--)
	{
		printf("%d\t",i);
		printf("*\t");
	}
	printf("\n");
}

void DisplayR(int iNo)
{
	 int i=iNo;
	
	if(i>=1)
	{
		printf("%d\t",i);
		printf("*\t");
		i--;
		DisplayR(i);
	}
}
int main()
{
	int iValue=5;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Inside main\n");
	
	DisplayI(iValue);
	
	DisplayR(iValue);
	
	printf("\nEnd of main");
	
	return 0;
}
*/
/*****************************************************************************************/
/* Q.2 Write a recursive program which accept number from user and display below pattern

	Input:879
	Output:24
*/

#include<stdio.h>

int SumI(int iNo)
{
	int iDigit=0,iSum=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}

int SumR(int iNo)
{
	int iDigit=0;
	static int iSum=0;
	
	if(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum + iDigit;
		iNo=iNo/10;
		SumR(iNo);
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=SumI(iValue);
	printf("The sum is %d\n",iRet);
	
	iRet=SumR(iValue);
	printf("The sum is %d",iRet);
	
	return 0;
}

/*****************************************************************************/
/* Q.3 Write a recursive program which accept number from user and count characters

	Input:Hello
	
	Output:5


#include<stdio.h>

int StrlenI(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	
	return iCnt;
}

int StrlenR(char *str)
{
	static int iCnt=0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		StrlenR(str);
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char Arr[20];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=StrlenI(Arr);
	printf("%d\n",iRet);
	
	iRet=StrlenR(Arr);
	printf("%d",iRet);
	
	return 0;
}
*/
/*******************************************************************************/
/* Q.4 Write a recursive program which accept number from user and return its factorial

	Input:5
	Output:120


#include<stdio.h>

int FactI(int iNo)
{
	int iFact=1,i=0;
	printf("Inside Iteration function\n");
	
	for(i=iNo;i>=1;i--)
	{
		iFact=iFact*i;
	}
	return iFact;
	printf("\n");
}

int FactR(int iNo)
{
	static int iFact=1;

	 if(iNo>=1)
	 {
		 iFact=iFact*iNo;
		 iNo--;
		 FactR(iNo);
	 }
	 return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=FactI(iValue);
	printf("%d\n",iRet);
	
	iRet=FactR(iValue);
	printf("%d",iRet);
	 return 0;
}
*/
/******************************************************************************/
/* Q.5 Write a recursive program which accept number from user and return its product of digits
		
		Input:523
		Output:30

#include<stdio.h>

// int MulI(int iNo)
// {
	// int iDigit=0,iMult=1;
	
	// while(iNo>0)
	// {
		// iDigit=iNo%10;
		// if(iDigit>0)
		// {
			// iMult=iMult*iDigit;
		// }
		// iNo=iNo/10;
	// }
	// return iMult;
// }

int MultR(int iNo)
{
	int iDigit=0;
	static int iMult=1;
	
	if(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>0)
		{
			iMult=iMult*iDigit;
		}
		iNo=iNo/10;
		MultR(iNo);
	}
	return iMult;
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	// iRet=MulI(iValue);
	// printf("%d\n",iRet);

	iRet=MultR(iValue);
	printf("%d",iRet);
	
	return 0;
}
*/	