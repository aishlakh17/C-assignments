/*********************************************************************************************/
/*Q.1 Accept number of rows and column from user and display below pattern

Input: iRow=4, iCol=4

Output: *       #       #       #
		*       *       #       #
		*       *       *       #
		*       *       *       *


#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0;
		if(iRow < 0)
		{
			iRow = -iRow;
		}

		if(iCol < 0)
		{
			iCol = -iCol;
		}
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(i >= j)
				{
					printf("*\t");
					
				}
				else
				{
					printf("#\t");
				}
			}
			printf("\n");
		}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
/***********************************************************************************/
/* Q.2 	Input: iRow=4,iCol=4
		
		Output: *       *       *       *
				*       *       *       #
				*       *       #       #
				*       #       #       #
			
		
		
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0,iCnt=1;
		if(iRow < 0)
		{
			iRow = -iRow;
		}

		if(iCol < 0)
		{
			iCol = -iCol;
		}
		
		for(i=iRow;i>=1;i--)
		{
			for(j=1;j<=iCol;j++)
				{
					if(i>=j )
					{
					printf("*\t");
					}
					else
					{
						printf("#\t");
					}
					
				}
				printf("\n");
		}
			
			
		
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}

/**************************************************************************************/
/* Q.3 	Input: iRow=5, iCol=5

		Output:	$       *       *       *       *
				*       $       *       *       *
				*       *       $       *       *
				*       *       *       $       *
				*       *       *       *       $
		
	
		
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0;
		char ch='\0';
		
		if(iRow < 0)
		{
			iRow = -iRow;
		}

		if(iCol < 0)
		{
			iCol = -iCol;
		}
		
		for(i=1;i<=iRow;i++)
		{			
			for(j=1;j<=iCol;j++)
			{
				if(i==j)
				{
					printf("$\t");
				}
				else
				{
					printf("*\t");
				}
					
			}
			printf("\n");
		}
			
		
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}
/************************************************************************************/
/* Q.4 	Input: iRow=6, iCol=5

		Output: *       *       *       *       *
				*       @       @       @       *
				*       @       @       @       *
				*       @       @       @       *
				*       @       @       @       *
				*       *       *       *       * 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0;
		
		
		if(iRow < 0)
		{
			iRow = -iRow;
		}

		if(iCol < 0)
		{
			iCol = -iCol;
		}
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(i==iRow)||(j==1)||(j==iCol))
				{
					printf("*\t");
				}
				else
				{
					printf("@\t");
				}
			}
			printf("\n");
		}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}

/*************************************************************************/
/* Q.5  Input: iRow=4, iCol=4

		Output: 1       2       3       4
				1       *       *       4
				1       *       *       4
				1       2       3       4
	*/	

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0;
		
		
		if(iRow < 0)
		{
			iRow = -iRow;
		}

		if(iCol < 0)
		{
			iCol = -iCol;
		}
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if((i==1)||(i==iRow)||(j==1)||(j==iCol))
				{
					printf("%d\t",j);
				}
				else
				{
					printf("*\t");
				}
			}
			printf("\n");
		}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the column\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	 
	return 0;
}


/*************************************************************************/




