/********************************************************************************************************/
/* 1. Accept N numbers from user and return frequency of even numbers.

	Input : N= 6
			Elemets : 85 66 3 80 93 88
			
	Output : 3


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	int iCnt=0,iEven=0;
	
	if((Arr == NULL) || (iLength<=0))
	{
		return 0;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEven++;
		}
	}
	
	return iEven;
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p=NULL;
		
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p =(int *)malloc(iSize * sizeof(int));
	
	printf("Enter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d elements: ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=CountEven(p,iSize);
	printf("The freuency of even numbers is %d ",iRet);
	
	return 0;
}
*/
/***************************************************************************************************/
/* 2. Accept N numbers from user and return difference between frequency of even numbers and odd numbers 

	Input : N=7
			Elemets : 85 66 3 80 93 88 90
	Output : 1 (4-3)
	


#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[],int iLength)
{
	int iCnt=0,iEven=0,iOdd=0;
	
	if((Arr==NULL) || (iLength <=0))
	{
		return 0;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)== 0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	
	return (iEven-iOdd);
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p=NULL;
		
	printf("Enter the no of elements\n");
	scanf("%d",&iSize);
	
	p =(int *)malloc(iSize * sizeof(int));
	
	printf("Enter the elements\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d elements: ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=frequency(p,iSize);
	printf("The freuency of even numbers is %d ",iRet);
	
	return 0;
}	
*/
/**********************************************************************************************/
/* 3. Accept N numbers from user check whether that numbers contains 11 in it or not.

	Input : N=6
			Elemets : 85 66 11 80 93 88
	Output : 11 is present



#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define ERROR -1

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
		int iCnt=0;
		
		if((Arr == NULL) || (iLength <=0))
		{
			return ERROR;
		}
		
		for(iCnt=0;iCnt<iLength;iCnt++)
		{
			if(Arr[iCnt] == 11)
			{
				break;
			}
		}
		
		if(iCnt== iLength)
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
	int iSize=0,iCnt=0;
	BOOL bRet=FALSE;
	int *p =NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p,iSize);
	if(bRet==TRUE)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	free(p);
	return 0;
}
*/
/************************************************************************************/
/* 4. Accept N numbers from user check whether that numbers contains 11 in it or not.

	Input : N=6
			Elemets : 85 66 11 80 93 88
	Output : 11 is present



#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
		int iCnt=0,iFrequency=0;
		
		if((Arr == NULL) || (iLength <=0))
		{
			return 0;
		}
		
		for(iCnt=0;iCnt<iLength;iCnt++)
		{
			if(Arr[iCnt] == 11)
			{
				iFrequency++;
			}
		}
		
	return iFrequency;	
		
}

int main()
{
	int iSize=0,iCnt=0,iRet=0;
	//BOOL bRet=FALSE;
	int *p =NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Frequency(p,iSize);
	printf("The frequency is %d",iRet);
	free(p);
	return 0;
}
*/
/*****************************************************************************************/
/* 5. Accept N numbers from user and accept one another number as No. return frequency of No from it.
	
	Input : N=6
			No=66
			Elemets : 85 66 3 66 93 88
	Output : 2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iFrequency=0;
	
	if((Arr == NULL) ||(iLength<=0))
	{
		return 0;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]== iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}
int main()
{
	int iSize=0,iCnt=0,iRet=0,iNo=0;
	//BOOL bRet=FALSE;
	int *p =NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements %d :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	printf("Enter number whose frequency is to be counted\n");
	scanf("%d",&iNo);
	iRet=Frequency(p,iSize,iNo);
	printf("The frequency is %d",iRet);
	free(p);
	return 0;
}
