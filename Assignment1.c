/****************************************************/

//Q.1 Program to divide two numbers

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
	int iAns=0;
	 
	if (iNo2 == 0) // Filter
	{
		return -1;
	}
	
	iAns = iNo1/iNo2;
	return iAns;
}

int main()
{
	int iValue1=15,iValue2=5;
	int iRet=0;
	
	iRet=Divide(iValue1,iValue2);
	
	printf("The Division is %d",iRet);
	return 0;
}
 
 
/***********************************************************/
  
 // Q.2  Program to print 5 times "Marvellous" on Screen
 
 // #include<stdio.h>
 
 // void Display()
 // {
	 // int iCnt=0;                   // Loop Counter
	 
	 // for(iCnt=1;iCnt<=5;iCnt++)
	 // {
		 // printf("Marvellous\n");
	 // }
 // }
 
 // int main()
 // {
	 // Display();
 // return 0;
 // }
 
/***********************************************************/

// Q.3 Print 5 to 1 numbers

// #include<stdio.h>

// void Display()
// {
	// int iCnt=0;
	
	// iCnt=5;
	// while(iCnt > 0)
	// {
		// printf46("%d\t",iCnt);
		// iCnt--;
	// }
// }

// int main()
// {
	// Display();
	// return 0;
// }

// /***************************************************************/

// Q.4  To check whether number is divisible by 5 or not

// Input : 25                    
// Output: Divisible by 5        

// Input: 46
// Output:Not Divisible by 5

// #include<stdio.h>

// #define TRUE 1
// #define FALSE 0
// typedef int BOOL;

// BOOL Check (int iNo)
// {
	// if((iNo % 5) == 0)
	// {
		// return TRUE;
	// }
	// else
	// {
		// return FALSE;
	// }
// }

// int main()
// {
	// int iValue=0;
	// BOOL bRet= FALSE;
	
	// printf("Enter Number\n");
	// scanf("%d\n",&iValue);
	
	// bRet=Check(iValue);
	
	// if(bRet == TRUE)
	// {
		// printf("Divisible by 5");
	// }
	// else
	// {
		// printf("Not Divisible by 5");
	// }
	// return 0;
// }

// /*************************************************************************/

// Q.5 Accept one number from user and print that number of * on screen

// Input: 5                    
// Output:* * * * *             

// #include<stdio.h>

// void Accept(int iNo)
// {
	// int iCnt=0;
	
	// for(iCnt=1; iCnt<=iNo; iCnt++)
	// {
		// printf("*\t");
	// }
// }

// int main()
// {
	// int iValue=0;
	// iValue=5;
	
	// Accept(iValue);
	// return 0;
// }
