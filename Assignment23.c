/***********************************************************************/
/* 1. Accept N numbers from user and accept one another number as No ,check
		whether number is present or not

		Input : N=6
				NO =66
				Elements: 85 66 3 66 93 88
		Output : TRUE


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	if((Arr == NULL) ||(iLength<=0))
	{
		return ERROR;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	
	if(iCnt == iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int iSize=0,iCnt=0,iValue=0;
	BOOL bRet=FALSE;
	int *p=NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter the number to check whether its is present or not\n");
	scanf("%d",&iValue);
	bRet=Check(p,iSize,iValue);
	
	if(bRet == TRUE)
	{
		printf("The number is present");
	}
	else
	{
		printf("The number is not present");
	}
	
	return 0;
}
*/

/***********************************************************************************************/
/* Q.2 Accept N numbers from user and accept one another number as No , return index of first occurrence of that No
 
	Input : N=6
			No=66
			Elements : 85	66	3	66	93	88
	Output : 1


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int FirstOccurrence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	if(Arr== NULL)
	{
		return -1;
	}
	if(iLength<=0)
	{
		return -2;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -3;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iRet=0, iSize=0,iCnt=0,iValue=0;
	//BOOL bRet=FALSE;
	int *p=NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter the number to check whether its is present or not\n");
	scanf("%d",&iValue);
	iRet=FirstOccurrence(p,iSize,iValue);
	
	if(iRet== -1)
	{
		printf("ERROR: Memory Failure");
	}
	else if(iRet==-2)
	{
		printf("ERROR: Size Failure");
	}
	else if(iRet== -3)
	{
		printf("ERROR : There is no such elements");
	}
	else
	{
		printf("The index of first occurrence of %d is %d ",iValue,iRet);
	}
	free(p);
	
	return 0;
}

*/
/*******************************************************************************************/
/* Q 3 Accept N numbers from user and accept one another number as No , return index of last occurrence of that NO.
 
	Input : N=6
			No=66
			Elements : 85 66 3 66 63 99
	Output : 3
	

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int LastOccur(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	if(Arr == NULL)
	{
		return -1;
	}
	if(iLength<=0)
	{
		return -2;
	}
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
		
	}
	return iCnt;
}
		
int main()
{
	int iRet=0, iSize=0,iCnt=0,iValue=0;
	//BOOL bRet=FALSE;
	int *p=NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter the number to check whether its is present or not\n");
	scanf("%d",&iValue);
	iRet=LastOccur(p,iSize,iValue);
	
	if(iRet== -1)
	{
		printf("ERROR: Memory Failure");
	}
	else if(iRet==-2)
	{
		printf("ERROR: Size Failure");
	}
	else if(iRet== -3)
	{
		printf("ERROR : There is no such elements");
	}
	else
	{
		printf("The index of first occurrence of %d is %d ",iValue,iRet);
	}
	free(p);
	
	return 0;
}
*/

/*******************************************************************************************************/
/* Q.4 Accept N numbers from user and accept Range,Display all elements from that range	.
	
		Input : N:6
				Start :60
				End:90
				Elements : 85 66 3 76 93 88
		Output : 85 66 76 88

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	
	if(Arr == NULL)
	{
		printf("ERROR: Memory Failure");
	}
	if(iLength<=0)
	{
		printf("ERROR: Size Failure");
	}
	if(iStart>iEnd)
	{
		printf("Invalid Range");
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]>iStart)&&(Arr[iCnt]<=iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
		


int main()
{
	int iRet=0, iSize=0,iCnt=0,iValue1=0,iValue2=0;
	//BOOL bRet=FALSE;
	int *p=NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	printf("Enter the Starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point\n");
	scanf("%d",&iValue2);
	
	
	
	Range(p,iSize,iValue1,iValue2);
	
	
	free(p);
	
	return 0;
}		
*/

/************************************************************************************************/
/* Q.5 Accept N numbers from user and return product of all odd elements.

		Input: N=6
				Elements : 15 66 3 70 10 88
				
		Output:45
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Product(int Arr[],int iLength)
{
	int iCnt=0,iProd=1;
	
	if(Arr == NULL)
	{
		printf("ERROR: Memory Failure");
	}
	if(iLength<=0)
	{
		printf("ERROR: Size Failure");
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2) != 0)
		{
			iProd=iProd * Arr[iCnt];
		}
	}
	
	return iProd;
}

int main()
{
	int iValue=0,iSize=0,iCnt=0,iRet=0;
	int *p=NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Product(p,iSize);
	
	printf("The Product is %d\t",iRet);
	
	free(p);
	
	return 0;
}
	
	