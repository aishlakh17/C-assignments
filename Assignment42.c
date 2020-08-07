/**********************************************************/
/* Q.1 Write a program which search first occurrence of particular 
	element from singly linear linked list
	Function should return position at which element is found
	
	Input: 10 20 30 40 50 30 70
		   30
	Output:3
*/
/*****************************************************************/
/* Q.2 Write a program which search last occurrence of particular
		element from singly linear linked list
		Function should return position of at which element is found
		
		Input: 10 20 30 40 50 30 70
			   30	
		Output:6
*/
/******************************************************************/
/* Q.3 Write a program which returns addition of all elements from singly 
		linear list
		
		Input:10 20 30 40 
		Output:100
*/
/*********************************************************************/
/* Q.4 write a program which return largest element from singly linear list
		
		Input:110  230  320  240
		Output:320

*/
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

// int SearchFirstOcc(PNODE Head,int No)                              // Q.1 
// {
	// int iCnt=0;
	// while(Head != NULL)
	// {
		// iCnt++;
		// if((Head -> Data)== No)
		// {
			// break;
		// }
		// Head= Head->Next;
	// }
	// if(Head->Data == No)
	// {
		// return iCnt;
	// }
	// else
	// {
		// return -1;
	// }
// }	


int LastOccurrence(PNODE Head,int No)						      // Q.2
{
		int iCnt=0;
		
		while(Head != NULL)
		{
			iCnt++;
			if((Head -> Data)== No)
			{
				while(Head != NULL)
				{
					iCnt++;
					if((Head->Data )==No)
					{
						break;
					}
					Head= Head-> Next;
				}
			}
			
			Head=Head-> Next;
		}
		
		if(Head->Data == No)
		{
			return iCnt;
		}
		else
		{
			return -1;
		}
}

// int Addition(PNODE Head)									// Q.3
// {
	// int iSum=0;
	// while(Head != NULL)
	// {
		// iSum= iSum + (Head-> Data);
		// Head=Head->Next;
	// }
	// return iSum;
// }

// int Maximum(PNODE Head)                                 // Q.4
// {
	// int iMax=0;
	// iMax= Head-> Data;
	// while(Head != NULL)
	// {
		// if((Head->Data) > iMax )
		// {
			// iMax = Head-> Data;
		// }
		// Head = Head->Next;
	// }
	
	// return iMax;
// }



// int Minimum(PNODE Head)
// {
	// int iMin=0;
	
	// iMin= Head-> Data;
	// while(Head != NULL)
	// {
		// if((Head->Data) < iMin )
		// {
			// iMin = Head-> Data;
		// }
		// Head = Head->Next;
	// }
		
	// return iMin;
// }
int main()
{
	PNODE First = NULL;
	int iRet=0;
	InsertFirst(&First,10);
	InsertFirst(&First,20);
	InsertFirst(&First,30);
	InsertFirst(&First,40);
	InsertFirst(&First,50);
	InsertFirst(&First,30);
	InsertFirst(&First,70);
	InsertFirst(&First,80);
	
	//iRet=SearchFirstOcc(First,30);
	iRet=LastOccurrence(First,30);
	//iRet=Addition(First);
	//iRet=Maximum(First);
	  //iRet=Minimum(First);
	printf("The position of number is: %d",iRet);
	return 0;
}


		