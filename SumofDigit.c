/* Accept number from user and return additon of digits from that number
	Input:	432		Output:	9
	Input:	7456		Output:	22						*/
	
#include<stdio.h>

int Sum(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=Sum(iNo);
	
	printf("Addition of digits is %d \n",iRet);
	
	return 0;
}

int Sum(int iNo)
{
	int iDigit=0, iSum=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	
	return iSum;
}

