/******************************************************************************************/
/* Q.1 Write application which accept file name from user and open that file in read mode

		Input:Demo.txt
		Output:File Opened Successfully


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	char Name[30];
	int Fd=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	Fd=open(Name,O_RDONLY);
	
	if(Fd== -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("File Opened Successfully with Fd %d",Fd);
	
	close(Fd);
	return 0;
}
*/
/******************************************************************************************/
/* Q.2 Write application which accept file name from user and create file
	
	Input:Demo.txt
	Output:File created successfully
	*/

#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	char Name[30];
	int Fd=0;
	
	printf("Enter file name\n");
	scanf("%s",Name);
	
	Fd=open(Name,O_CREAT);
	
	if(Fd== -1)
	{
		printf("Unable to create file");
		return -1;
	}
	
	printf("File created Successfully");
	
	close(Fd);
	return 0;
}

/***************************************************************************************/
/* Q.3 Write application which accept file name from user and read all data from that file
		and display contents on screen
		
		Input: Demo.txt
		Output: Display all data of file


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	char Arr[100];
	int Fd=0;
	int iRet=0;
	
	Fd=open("Hello.txt",O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	iRet=read(Fd,Arr,100);
	
	if(iRet<=0)
	{
		printf("Unable to read");
		close(Fd);
		return -1;
	}
	
	printf("Data From File \n%s",Arr);
	
	close(Fd);
	return 0;
}
*/
/************************************************************************************/
/* Q.4 Write application which accept file name from user and dislpay size of file 

		Input:Demo.txt
		Output: File size is 56 bytes



#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	char Arr[100];
	int Fd=0;
	int iRet=0;
	
	Fd=open("Hello.txt",O_RDONLY);
	
	if(Fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	 iRet=read(Fd,Arr,100);
	
	if(iRet<=0)
	{
		printf("Unable to read");
		close(Fd);
		return -1;
	}
	
	printf("File size is %d bytes.",iRet);
	
	close(Fd);
	return 0;
}
*/
/******************************************************************************/
/* Q.5 Write application which accept file name from user and one string from user .
		write that string at the end of file.
		
		Input:Demo.txt
			  Hello World	
		Output:Write Hello world at the end of Demo.txt file


#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	int Fd=0;
	int iRet=0;
	char Arr[100]="Hello World";
	
	Fd=open("Hello.txt",O_WRONLY | O_APPEND);
	
	if(Fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	iRet=write(Fd,Arr,12);
	
	if(iRet == -1)
	{
		printf("Unable to write");
		close(Fd);
		return -1;
	}
	
	printf("Data successfully written in file");
	close(Fd);
	
	return 0;
}
*/