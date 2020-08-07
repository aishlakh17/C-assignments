/*****************************************************************/
/* Q.1 Accept n numbers from user and return largest number
		
		Input : n=5
				Elements : 7 10 15 5 24
		Output: 24


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Maximum(int Arr[],int iLength)
{
	int iCnt=0,iMax=0;
	
	if((Arr == NULL) || (iLength<=0))
	{
		return -1;
	}
	
	iMax = Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
	}
	
	return iMax;
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p= NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL == p)
	{
		printf("Unable to locate memory");
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet= Maximum(p,iSize);
	
	printf("The largest number is %d",iRet);
	
	free(p);
	
	return 0;
}*/

/************************************************************************************************************/
 /*Q.2 Accept n numbers from user and return smallest number
		
		Input : n=5
				Elements : 7 10 15 5 24
		Output: 5


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Minimum(int Arr[],int iLength)
{
	int iCnt=0,iMin=0;
	
	if((Arr == NULL) || (iLength<=0))
	{
		return -1;
	}
	
	iMin = Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	
	return iMin;
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p= NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL == p)
	{
		printf("Unable to locate memory");
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet= Minimum(p,iSize);
	
	printf("The smallest number is %d",iRet);
	
	free(p);
	
	return 0;
}
*/
/*****************************************************************************************************/
/*Q.3 Accept N numbers from user and return the difference between largest and smallest number.



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Differrence(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	
	if((Arr==NULL)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin = Arr[iCnt];
		}
		else
		{
			iMax=Arr[iCnt];
		}
	}
	
	return iMax - iMin;
}

int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p= NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL == p)
	{
		printf("Unable to locate memory");
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet= Differrence(p,iSize);
	
	printf("The difference is %d",iRet);
	
	free(p);
	
	return 0;
}

*/

/*******************************************************************************************/
/* Q.4 Accept N numbers from user and display all such numbers which contains 3 digits in it.

	Input : N=6
			Elements : 8225 665 3 76 953 858
	
	Output : 665 953 858


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void Threedigits(int Arr[],int iLength)
{
	int iCnt=0,iNo=0,iDigit=0;
	
	if((Arr==NULL)||(iLength<=0))
	{
		printf("Error");
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iDigit=0;
		iNo=Arr[iCnt];
		while(iNo>0)
		{
			iDigit++;
			iNo=iNo/10;
		}
		if(iDigit==3)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}


int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p= NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL == p)
	{
		printf("Unable to locate memory");
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	Threedigits(p,iSize);
	
	//printf("The difference is %d",iRet);
	
	free(p);
	
	return 0;
}

*/

/*******************************************************************************/
/* Q.5 Accept N numbers from user and display summation of digits of each number 

		Input : N=6
				Elements : 8225 665 3 76 953 858
		Output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void DigitSum(int Arr[],int iLength)
{
	int iCnt=0,iNo=0,iDigit=0,iSum=0;
	
	if((Arr==NULL)||(iLength<=0))
	{
		printf("Error");
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iDigit=0;
		iNo=Arr[iCnt];
		iSum=0;
		
		while(iNo>0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
			
		}
		
		printf("%d\t",iSum);
	}
}
int main()
{
	int iCnt=0,iSize=0,iRet=0;
	int *p= NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize * sizeof(int));
	
	if(NULL == p)
	{
		printf("Unable to locate memory");
	}
	
	printf("Enter the elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter elements :%d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	DigitSum(p,iSize);
	
	//printf("The difference is %d",iRet);
	
	free(p);
	
	return 0;
}


	