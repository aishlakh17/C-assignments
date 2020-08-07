/*********************************************************************************/
/* Q.1 Write a program which accepts file name from user and count number of capital
		characters from that file
		
		Input: Demo.txt
		Output:Number of capital characters are 23
	

#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int CountCapital(char FName[])
{
	int Fd=0,iRet=0,i=0,iCnt=0;
	char Arr[50];
	
	Fd = open(FName,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open");
		return-1;
	}
	iRet=read(Fd,Arr,50);
	while(iRet>0)
	{
		if((Arr[i]>='A')&&(Arr[i]<='Z'))
		{
			iCnt++;
		}
		i++;
		iRet--;
	}
	close(Fd);
	
	return iCnt;
}

int main()
{
	char Name[20];
	int iRet=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	iRet=CountCapital(Name);
	printf("Number of capital characters are %d",iRet);
	return 0;
}
*/
/**********************************************************************************/
/* Q.2 Write a program which accepts file name from user and count number of small
		characters from that file
		
		Input: Demo.txt
		Output:Number of small characters are 23


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int CountSmall(char FName[])
{
	int Fd=0,iRet=0,i=0,iCnt=0;
	char Arr[50];
	
	Fd = open(FName,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open");
		return-1;
	}
	iRet=read(Fd,Arr,50);
	while(iRet>0)
	{
		if((Arr[i]>='a')&&(Arr[i]<='z'))
		{
			iCnt++;
		}
		i++;
		iRet--;
	}
	close(Fd);
	
	return iCnt;
}

int main()
{
	char Name[20];
	int iRet=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	iRet=CountSmall(Name);
	printf("Number of Small characters are %d",iRet);
	return 0;
}
*/
/*****************************************************************************************/
/* Q.3 	Write a program which accepts file name from user and count number of white spaces 
		from that file.
		
		Input:Demo.txt
		Output:Number of white spaces are 13


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int CountSmall(char FName[])
{
	int Fd=0,iRet=0,i=0,iCnt=0;
	char Arr[50];
	
	Fd = open(FName,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open");
		return-1;
	}
	iRet=read(Fd,Arr,50);
	while(iRet>0)
	{
		if(Arr[i]==' ')
		{
			iCnt++;
		}
		i++;
		iRet--;
	}
	close(Fd);
	
	return iCnt;
}

int main()
{
	char Name[20];
	int iRet=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	iRet=CountSmall(Name);
	printf("Number of Small characters are %d",iRet);
	return 0;
}	
*/
/**********************************************************************************/
/* Q.4 Write a program which accepts file name from user and one character from user and
		count number of occurrence of that characters from that file.
		
		Input:Demo.txt  'M'
		Output:Frequency of M is 7


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int CountChar(char FName[],char ch)
{
	int Fd=0,iRet=0,i=0,iCnt=0;
	char Arr[50];
	
	Fd = open(FName,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open\n");
		return-1;
	}
	iRet=read(Fd,Arr,50);
	
	while(iRet>0)
	{
		if(Arr[i] == ch)
		{
			iCnt++;
		}
		i++;
		iRet--;
	}
	return iCnt;
	close(Fd); 
}

int main()
{
	char Name[20];
	int iRet=0;
	char cValue=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);	
	
	fflush(stdin);
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	iRet=CountChar(Name,cValue);
	printf("Frequency of %c is: %d",cValue,iRet);
	return 0;
}	
*/
/************************************************************************************/
/* Q.5 Write a program which accepts file name and one count from user and read that number 
		of characters from starting point
		
		Input:Demo.txt
		Output:Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<stdlib.h>
#include<malloc.h>


void DisplayN(char Fname[],int iSize)
{
	int Fd=0,iRet=0;
	char *Arr=NULL;
	
	Fd=open(Fname,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open");
		return;
	}
	
	Arr=(char*)malloc(sizeof(char)*iSize);
	
	iRet=read(Fd,Arr,iSize);
	
	if(iRet == -1)
	{
		printf("Unable to open\n");
		close(Fd);
		free(Arr);
		return;
	}
	
	printf("Data is %s\n",Arr);
	close(Fd);
	free(Arr);
}

int main()
{
	char Name[20];
	int iValue=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	printf("Enter number of characters\n");
	scanf("%d",&iValue);
	
	DisplayN(Name,iValue);
	
	return 0;
}

