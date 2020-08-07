/****************************************************************************/
/* Q.1 write a program which number from user and display below pattern

	Input: 7846
	
	Output:6	4	8	7
		   6	4	8	7
		   6	4	8	7
		   6	4	8	7
	 

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=iNo;
	
	while(iNo1 > 0)
	{
		iDigit=iNo1%10;
		iNo1=iNo1/10;
		iCnt++;
	}
	printf("%d\n",iCnt);
	
	
	
	// for(i=1;i<=iCnt;i++)
	// {
		// iNo1=iNo;
		// while(iNo1>0)
		// {
			// iDigit=iNo1%10;
			// printf("%d",iDigit);
			// printf("\t");
			// iNo1=iNo1/10;
		// }
		// printf("\n");
	// }
	
	for(i=1;i<=iCnt)
	
	
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}
*/	
/************************************************************************/
/* Q.2 write a program which number from user and display below pattern

	Input: 7846
	Output:


#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	for(i=1;i<=4;i++)
	{
		iNo1=iRev;
		
			while(iNo1>0)
			{
				iDigit=iNo1%10;
				printf("%d",iDigit);
				printf("\t");
				iNo1=iNo1/10;
			}
		
		printf("\n");
	}
	
	
	
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}
*/
/********************************************************************************/
// /* Q.3  write a program which number from user and display below pattern

	// Input: 7846
	// Output:

// #include<stdio.h>

// void Pattern(int iNo)
// {
	// int iDigit=0,i=0,j=0,iNo1=iNo,iRev=0,iCnt=0,iNo2=iNo,iDigit1=0,iRev1,iNo3;
	
	// while(iNo1>0)
	// {
		// iDigit=iNo1%10;
		// iRev=iRev*10+iDigit;
		// iNo1=iNo1/10;
		// iCnt++;
	// }
	
	// for(i=1;i<=iCnt;i++)                                                /****************************************************/
	// {																	//  for(i=1;i<=iCnt;i++)
																			  // {
		// iNo=iRev;                                                       //		for(j=1;j<=iCnt;j++)
		// for(j=1;j<=iCnt;j++)											//			{
		// {																//				if(i>=j)	
				// while(iNo>0)											//				{
				// {														//					iDigit=iNo%10;
																							// printf("%d\t",iDigit);
					// iDigit=iNo%10;										//					iNo=iNo/10;		
																						// }
				// printf("%d\t",iDigit);								    //			}
																					// printf("\n");
		// iNo=iNo/10;														//	}
																		// /****************************************************/	
				// }
				
		// }
		// printf("\n");
		
		// iNo2=iNo2/10;
		// iNo3=iNo2;
		// while(iNo3>0)
		// {
			// iDigit=iNo3%10;
			// iRev1=iRev1*10+iDigit;
			// iNo3=iNo3/10;
		// }
		// iRev=iRev1;	
		// iRev1=0;		
	// }
	
	// for(i=1;i<=iCnt;i++)
	// {
		// iNo=iRev;
		// for(j=1;j<=iCnt;j++)
		// {
			// if(j>=i)
			// {
				// iDigit=iNo%10;
				// printf("%d\t",iDigit);
				// iNo=iNo/10;
			// }
		// }
		// printf("\n");

	// }
// }
// int main()
// {
	// int iValue=7846;
	
	// Pattern(7846);
	// return 0;
// }
// */
/****************************************************************************************/
/* Q.4 Input:7846
		Output: 7
				7	8
				7	8	4	
				7	8	4	6
				

#include<stdio.h>
void Pattern(int iNo)
{
	int iDigit=0,i=0,j=0,iNo1=iNo,iRev=0,iCnt=0,iNo2=iNo,iDigit1=0,iRev1,iNo3;
	
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		iRev=iRev*10+iDigit;
		iNo1=iNo1/10;
		iCnt++;
	}
	
	for(i=iCnt;i>=1;i--)
	{
		iNo=iRev;
		for(j=iCnt;j>=1;j--)
		{	
				if(i<=j)
				{					
					
					iDigit=iNo%10;
					printf("%d\t",iDigit);
					iNo=iNo/10;
				}
				
		}
		printf("\n");
			
	}
		
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}


*/
/******************************************************************************/
/* Q.5  write a program which number from user and display below pattern

	Input: 7846
	Output:
*/	
#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=iNo;
	
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		iCnt++;
		iNo1=iNo1/10;
	}
	
	
	for(i=1;i<=iCnt;i++)
	{
		iNo1=iNo;
		for(j=1;j<=iCnt;j++)
		{
			if(i>=j)
			{
			
				iDigit=iNo1%10;
				printf("%d",iDigit);
				printf("\t");
				iNo1=iNo1/10;
			}
				
		}
		printf("\n");
	}
		
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}

	