/*********************************************************************************************
/*Q.1 Accept number of rows and column from user and display below pattern

Input: iRow=4, iCol=4

Output: 1       2       3       4
		5       6       7       8
		9       1       2       3
		4       5       6       7


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
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(iCnt < 10)
				{
					printf("%d\t",iCnt);
					iCnt++;
				}
				else
				{
					iCnt=1;
					printf("%d\t",iCnt);
					iCnt++;
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
***********************************************************************************
/* Q.2 	Input: iRow=4,iCol=5
		
		Output: 2       4       6       8       10
				1       3       5       7       9
				2       4       6       8       10
				1       3       5       7       9
		
		
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
		
		for(i=1;i<=iRow;i++)
		{
			if((i%2)==0)
			{
				iCnt=1;
				for(j=1;j<=iCol;j++)
				{
					printf("%d\t",iCnt);
					iCnt=iCnt+2;
				}
			}
			else
			{
				for(j=1;j<=iCol;j++)
				{
					iCnt=j*2;
					printf("%d\t",iCnt);
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

*************************************************************************************
/* Q.3 	Input: iRow=4, iCol=5

		Output:	a       b       c       d       e
				1       2       3       4       5
				a       b       c       d       e
				1       2       3       4       5
	
		
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
			if((i%2)==0)
			{
				
				for(j=1;j<=iCol;j++)
				{
					printf("%d\t",j);
					
				}
			}
			else
			{
				for(j=1,ch='a';j<=iCol;j++,ch++)
				{
					
					printf("%c\t",ch);
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
********************************************************************************************
/* Q.4 	Input: iRow=5, iCol=5

		Output:  1       2       3       4       5
				-1      -2      -3      -4      -5
				 1       2       3       4       5
				-1      -2      -3      -4      -5
				 1       2       3       4       5


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
			if((i%2)==0)
			{
				
				for(j=1;j<=iCol;j++)
				{
					printf("%d\t",-j);
					
				}
			}
			else
			{
				for(j=1;j<=iCol;j++)
				{
					
					printf("%d\t",j);
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

********************************************************************************
/* Q.5  Input: iRow=4, iCol=4

		Output: 1       2       3       4
				2       3       4       5
				3       4       5       6
				4       5       6       7
		

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
		int i=0,j=0,temp=0;
		
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
			temp=i;
			for(j=1;j<=iCol;j++)
			{
				printf("%d\t",temp);
				temp++;
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



