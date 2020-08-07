/*********************************************************/
/* Q.1 Accept N numbers from user and return difference between
		summation of even and summation of odd elements

		Input:	N=6
				Elements : 85	80	3	93	66	88	
		
		Output:53


#include<stdio.h>
#include<stdlib.h>

int Difference (int Arr[],int iLength)
{
	int iEven=0,iOdd=0,iCnt=0;
	
	if((Arr == NULL)||(iLength <= 0))
	{
		return 0;
	}
	
	for(iCnt=0;iCnt < iLength;iCnt++)
	{
		if((Arr[iCnt]%2) == 0)
		{
			iEven = iEven + Arr[iCnt];
		}
		else
		{
			iOdd = iOdd + Arr[iCnt];
		}
	}
	
	return (iEven-iOdd);
}

int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p = NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	p=(int *) malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to alloacate memory");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements:%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Difference(p,iSize);
	
	printf("Result is %d",iRet);
	return 0;
}
*/

/*********************************************************************************************************/
/* 2. Accept N numbers from user and display all such elements which are divisible by 5
	
	Input : N=6
			Elements : 85 66 3 80 93 88
	Output :85 80
	
			


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		printf("Unable to locate memory");
	}
	
	for(iCnt =0;iCnt <iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
 
int main()
{
		int iSize=0,iCnt=0;
		int *P=NULL;
		
		printf("Enter number of elements\n");
		scanf("%d",&iSize);
		P = (int *)malloc(iSize * sizeof(int));
		
		printf("Enter the elements of array\n");
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
			printf("Enter elements:%d\n",iCnt+1);
			scanf("%d",&P[iCnt]);
		}
		
		Display(P,iSize);
		free(P);
		printf("\nfree memory");
		return 0;
}

*/
/****************************************************************************************************/
/* 3.  Accept N numbers from user and display all such elements which are divisible by 5 and even	
		
		Input : N=6
			    85 66 3 80 93 88
		Output : 80


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		printf("Unable to locate memory");
	}
	
	for(iCnt =0;iCnt <iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0 && (Arr[iCnt]%2==0))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
 
int main()
{
		int iSize=0,iCnt=0;
		int *P=NULL;
		
		printf("Enter number of elements\n");
		scanf("%d",&iSize);
		P = (int *)malloc(iSize * sizeof(int));
		
		printf("Enter the elements of array\n");
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
			printf("Enter elements:%d\n",iCnt+1);
			scanf("%d",&P[iCnt]);
		}
		
		Display(P,iSize);
		free(P);
		printf("\nfree memory");
		return 0;
}

*/

/***********************************************************************************************/
/* 4. Accept N numbers from user and display all such elements which are divisible by 5 and divisible by 3	
		
		Input : N=6
			    85 66 3 15 93 88
		Output : 15


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		printf("Unable to locate memory");
	}
	
	for(iCnt =0;iCnt <iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0 && (Arr[iCnt]%3==0))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
 
int main()
{
		int iSize=0,iCnt=0;
		int *P=NULL;
		
		printf("Enter number of elements\n");
		scanf("%d",&iSize);
		P = (int *)malloc(iSize * sizeof(int));
		
		printf("Enter the elements of array\n");
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
			printf("Enter elements:%d\n",iCnt+1);
			scanf("%d",&P[iCnt]);
		}
		
		Display(P,iSize);
		free(P);
		printf("\nfree memory");
		return 0;
}
*/
/************************************************************************************************************/
/* 4. Accept N numbers from user and display all such elements which are multiple of 11.	
		
		Input : N=6
			    85 66 3 15 93 88
		Output : 66 88
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	if((Arr == NULL) || (iLength <= 0))
	{
		printf("Unable to locate memory");
	}
	
	for(iCnt =0;iCnt <iLength;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
 
int main()
{
		int iSize=0,iCnt=0;
		int *P=NULL;
		
		printf("Enter number of elements\n");
		scanf("%d",&iSize);
		P = (int *)malloc(iSize * sizeof(int));
		
		printf("Enter the elements of array\n");
		for(iCnt=0;iCnt<iSize;iCnt++)
		{
			printf("Enter elements:%d\n",iCnt+1);
			scanf("%d",&P[iCnt]);
		}
		
		Display(P,iSize);
		free(P);
		printf("\nfree memory");
		return 0;
}