/* Accept number from user and reverse it
	Input:  123		Output:	321				*/
	
#include<stdio.h>

int Reverse(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=Reverse(iNo);
	
	printf("Reverse of %d is %d \n",iNo,iRet);
	
	return 0;
}

int Reverse(int iNo)
{
	int iDigit=0, iRev=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		iRev=iRev*10+iDigit;
		
		iNo=iNo/10;
	}
	
	return iRev;
}
