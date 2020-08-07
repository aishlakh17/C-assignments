/**************************************************************************************/
/* Q.1 Write a program which display all elements which are perfect from singly linear
		linked list.
		
		Input:11	28	17	41	6	89
		Output:6	28
*/
/***********************************************************************************/
/* Q.2 Write a program which display all elements which are prime from singly linear
		Linked list.
		
		Input: 11	20	17	41	6	89	
		Output: 11	17	41	89
*/
/************************************************************************************/
/* Q.3 Write a program which return addition of all even elements from singly linear linked 
		list
		
		Input:11	20	32	41
		Output:52
*/
/*********************************************************************************************/
/* Q.4 write a program which return second maximum element from singly linear linked list
		
		Input:110	230	320	240 
		Output: 240
*/
/*********************************************************************************************/
/* Q.5 Write a program which display addition of digits of elements from singly linear linked list

		Input:110	230	20	240	640
		Output:2	5	2	6	10
*/
/************************************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn =NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn ->Next=NULL;
	newn ->Data=No;
	
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->Next = *Head;
		*Head = newn;
	}
}

// int DisplayPerfect(PNODE Head)                              // Q.1
// {
	// int iCnt=0;
	// while(Head != NULL)
	// {
		// int iSum=0;
		// for(iCnt=(Head->Data)/2;iCnt>=1;iCnt--)
		// {
			// if((Head->Data)%iCnt == 0)
			// {
				// iSum= iSum+iCnt;
			// }
		// }
		// if((Head->Data)==iSum)
		// {
			// printf("%d\t",Head->Data);
		// }
		// Head=Head->Next;
	// }
// }

// int DisplayPrime(PNODE Head)                   //Q.2
// {
	// int iCnt=0;
	// while(Head != NULL2
	// {
		// for(iCnt=(Head->Data)/2;iCnt>=1;iCnt--)
		// {
			// if((Head->Data)%iCnt == 0)
			// {
				// break;
			// }
		// }
		// if(iCnt==1)
		// {
			// printf("%d\t",Head->Data);
		// }
		// Head=Head->Next;
	// }
// }

// int AdditionEven(PNODE Head)                               // Q.3
// {
	// int iSum=0;
	
	// while(Head != NULL)
	// {
		// if((Head->Data)%2 == 0)
		// {
			// iSum= iSum + Head->Data;
		// }
		// Head=Head->Next;
	// }
	// return iSum;
// }


// int SecMaximum(PNODE Head)                                     // Q.4
// {
	// int temp=0,iSecMax=0,iMax=0;
	// temp=Head->Data;
	
	// while(Head != NULL)
	// {
		// iMax=Head->Data;
		// if(temp < iMax)
		// {
			// iSecMax=iMax;
			// temp=iMax;
		// }
		// else if((iSecMax < iMax) && (iMax != temp))
		// {
			// iSecMax=iMax;
		// }
		// Head=Head->Next;
	// }
	// return iSecMax;
// }

int SumDigit(PNODE Head)                                   // Q.5
{
	int iDigit=0,temp=0,iSum=0;
	
	while(Head != NULL)
	{
		temp=Head ->Data;
	
		while(temp != 0)
		{
			iDigit= temp % 10;
			iSum=iSum + iDigit;
			temp=temp/10;
			
		}
		printf("%d\t",iSum);
		Head=Head->Next;
		iSum=0;
	}
}
int main()
{
	PNODE First = NULL;
	int iRet=0;
	InsertFirst(&First,11);
	InsertFirst(&First,28);
	InsertFirst(&First,17);
	InsertFirst(&First,40);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,70);
	InsertFirst(&First,89);
	
	//DisplayPerfect(First);
	//DisplayPrime(First);
	//iRet=AdditionEven(First);
	//iRet=SecMaximum(First);
	SumDigit(First);
	//printf("%d",iRet);
	return 0;
}
