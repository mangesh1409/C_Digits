/* Accept number from user and return difference between summation of even and odd digits from that number
	Input:	12345	Output:	-3 (6-9)
	Input:	1357		Output:	-16 (0-16)																*/
	
#include<stdio.h>

int Difference(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=Difference(iNo);
	
	printf("Differnece is %d \n",iRet);
	
	return 0;
}

int Difference(int iNo)
{
	int i=0, iDigit=0, iEsum=0, iOsum=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit%2==0)
		{
			iEsum=iEsum+iDigit;
		}
		
		else
		{
			iOsum=iOsum+iDigit;
		}
		
		iNo=iNo/10;
	}
	
	return iEsum-iOsum;
}
