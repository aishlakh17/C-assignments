/***************************************************************************/
/*



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

// void DisplayReverse(PNODE Head)                             // Q.1
// {
	// int iDigit=0,iRev=0,temp=0;
	
	// while(Head != NULL)
	// {
		// temp=Head->Data;
		// while(temp>0)
		// {
			// iDigit=temp%10;
			// iRev=iRev*10+iDigit;
			// temp=temp/10;
		// }
		// printf("%d\t",iRev);
		// iRev=0;
		// Head=Head->Next;
	// }
// }

// void DisplayPalindrome(PNODE Head)                           // Q.2
// {
	// int iDigit=0,iRev=0,temp=0;
	
	// while(Head != NULL)
	// {
		// temp=Head->Data;
		// while(temp>0)
		// {
			// iDigit=temp%10;
			// iRev=iRev*10+iDigit;
			// temp=temp/10;
		// }
		// if(Head->Data == iRev)
		// {
			// printf("%d\t",iRev);
		// }
		// iRev=0;
		// Head=Head->Next;
	// }
// }

// void DisplayProduct(PNODE Head)                                    // Q.3
// {
	// int iDigit=0,iProd=0,temp=0;
	
	// while(Head != NULL)
	// {
		// temp=Head->Data;
		// iProd=1;
		// if(temp==0)
		// {
			// iProd=0;
		// }
		// while(temp>0)
		// {
			// iDigit=temp%10;
			// if(iDigit>0)
			// {
				// iProd=iProd*iDigit;
			// }
			// temp=temp/10;
		// }
		// printf("%d\t",iProd);
		// Head=Head->Next;
	// }
// }

// void DisplaySmall(PNODE Head)                         // Q.4
// {
	// int iDigit=0,iMin=0,temp=0;
	
	// while(Head != NULL)
	// {
		// iMin=9;
		// temp=Head->Data;
		// if(temp==0)
		// {
			// iMin=0;
		// }
		// while(temp>0)
		// {
			// iDigit=temp%10;
			
			// if(iDigit<iMin)
			// {
				// iMin=iDigit;
			// }
			// temp=temp/10;
		// }
		// printf("%d\t",iMin);
		// Head=Head->Next;
	// }
// }
		
void DisplayLarge(PNODE Head)                                             // Q.5
{
	int iDigit=0,iMax=0,temp=0;
	
	while(Head != NULL)
	{
		iMax=0;
		temp=Head->Data;
		while(temp>0)
		{
			iDigit=temp%10;
			if(iDigit>iMax)
			{
				iMax=iDigit;
			}
			temp=temp/10;
		}
		printf("%d\t",iMax);
		Head=Head->Next;
	}
}
		
int main()
{
	PNODE First = NULL;
	int iRet=0;
	InsertFirst(&First,11);
	InsertFirst(&First,28);
	InsertFirst(&First,717);
	InsertFirst(&First,40);
	InsertFirst(&First,6);
	InsertFirst(&First,0);
	InsertFirst(&First,707);
	InsertFirst(&First,989);
	
	//DisplayPalindrome(First);
	//DisplayProduct(First);
	//DisplayReverse(First);
	//DisplaySmall(First);
	DisplayLarge(First);
	return 0;
}