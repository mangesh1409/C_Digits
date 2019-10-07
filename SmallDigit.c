/* Accept number from user and return smallest digit from that number
	Input:    5478923		Output:	2													*/
	
#include<stdio.h>

int Small(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=Small(iNo);
	
	printf("Smallest digit in %d is %d \n",iNo,iRet);
	
	return 0;
}

int Small(int iNo)
{
	int iDigit=0, iSmall=0;
	
	iDigit=iNo%10;
	iSmall=iDigit;
	
	while(iNo>0)
	{
		iDigit=iNo%10;				
		if(iDigit<iSmall)
		{
			iSmall=iDigit;
		}
		
		iNo=iNo/10;
	}
	
	return iSmall;
}
