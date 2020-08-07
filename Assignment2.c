/************************************************************************************/

//Q.1 Accept one number from user and print that number of * on Screen.

// Input : 7
//Output : *	*	*	*	*	*	*

// #include<stdio.h>

// void Display(int iNo)
// {
	// int iCnt=0;
	
	// if(iNo < 0)
	// {
		// iNo = -iNo;
	// }
	
	
	// while(iCnt < iNo)
	// {
		// printf("*\t");
		// iCnt++;
	// }
// }

// int main()
// {
	// int iValue=0;
	
	// printf("Enter the number\n");
	// scanf("%d",&iValue);
	
	// Display(iValue);
	
	// return 0;
// }


/************************************************************************************************/

//Q.2 Accept one number from user and print that number of * on Screen. (Without Local Variable)

//Input: 4
//Output: *	*	*	*

// #include<stdio.h>

// void Display(int iNo)
// {
	// if(iNo < 0)
	// {
		// iNo = -iNo;
	// }
	
	// while(iNo > 0)
	// {
		// printf("*\t");
		// iNo --;
	// }
// }

// int main()
// {
	// int iValue=0;
	
	// printf("Enter the number\n");
	// scanf("%d",&iValue);
	
	// Display(iValue);
	
	// return 0;
// }

/**************************************************************************************************/

//Q.3 Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

//Input:8
//Output: Hello

//Input:12
//Output:Demo

// #include<stdio.h>

// void Display(int iNo)
// {
	// if(iNo < 10)
	// {
		// printf("Hello");
	// }
	// else
	// {
		// printf("Demo");
	// }
// }

// int main()
// {
	// int iValue=0;
	
	// printf("Enter the number\n");
	// scanf("%d",&iValue);
	
	// Display(iValue);
	
	// return 0;
// }


/********************************************************************************************************/

//Q.4 Accept two numbers from user and display first number in second number of times.

//Input: 12 5
//Output: 12 12	12	12	12

// #include<stdio.h>

// void Display(int iNo,int iFrequency)
// {
	// int iCnt=0;
	
	// if(iFrequency < 0)
	// {
		// iFrequency = -iFrequency;
	// }
	
	// for(iCnt=1;iCnt<=iFrequency;iCnt++)
	// {
		// printf("%d\t",iNo);
	// }
// }

// int main()
// {
	// int iValue=0;
	// int iCnt=0;
	
	// printf("Enter number\n");
	// scanf("%d",&iValue);
	
	// printf("Enter the frequency");
	// scanf("%d",&iCnt);
	
	// Display(iValue,iCnt);
	
	// return 0;
// }

/****************************************************************************************/

//Q.5 Accept number from user and check whether number is even or odd.

//Input: 5
//Output:5 is odd number

//Input:6
//Output:6 is even number

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if((iNo %2)== 0)
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
	int iValue=0;
	BOOL bRet= FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
	if(bRet==TRUE)
	{
		printf("%d is even number",iValue);
	}
	else
	{
		printf("%d is odd number",iValue);
	}
	
	return 0;
}
