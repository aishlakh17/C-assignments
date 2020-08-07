/*************************************************************/
/* Q.1 Write a program which accept number from user and display
		below pattern
		
		Input:7846
		Output:

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,i=0,iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	while(iRev>0)
	{
		iDigit=iRev%10;
		for(i=1;i<=iDigit;i++)
		{
			printf("*\t");
		}
		iRev=iRev/10;
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
/****************************************************************************/
/* Q.2 Write a program which accept number from user and display
		below pattern
		
		Input:7846
		Output:
		
	

#include<stdio.h>

void Pattern(int iNo)
{
	int i=0,iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		for(i=1;i<=iDigit;i++)
		{
			printf("*\t");
		}
		iNo=iNo/10;
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
/************************************************************************/
/* Q.3 Write a program which accept number from user and display
		below pattern
		
		Input:7846
		Output:

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,i=0,iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	while(iRev>0)
	{
		iDigit=iRev%10;
		for(i=1;i<=iDigit;i++)
		{
			printf("%d\t",i);
		}
		iRev=iRev/10;
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
/******************************************************/
/*Q.4 Write a program which accept number from user and display
		below pattern
		
		Input:7846
		Output:

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,i=0,iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	while(iRev>0)
	{
		iDigit=iRev%10;
		for(i=iDigit;i>=1;i--)
		{
			printf("%d\t",i);
		}
		iRev=iRev/10;
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
/****************************************************************/
/* Q.5 Write a program which accept number from user and display
		below pattern
		
		Input:7846
	Output:
*/	
#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,i=0,iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	while(iRev>0)
	{
		iDigit=iRev%10;
		for(i=1;i<=iDigit+1;i++)
		{
			if(i==1)
			{
				printf("%d\t",iDigit);
			}
			else
			{
				printf("#\t");
			}
		}
		iRev=iRev/10;
		printf("\n");
	}
	
	
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}

/***********************************************************************/
/* Q.6  Write a program which accept number from user and display
		below pattern
		
		Input:7846
		Output:

#include<stdio.h>

void Pattern(int iNo)
{
	int i=0,iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		for(i=1;i<=iDigit;i++)
		{
			if(i==1)
			{
				printf("%d\t",iDigit);
			}
			else
			{
				printf("#\t");
			}
		}
		iNo=iNo/10;
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