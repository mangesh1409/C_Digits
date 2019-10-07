/* Accept number from user and return number of even digits from that number
	Input:	12345	Output:	2
	Input:	1357		Output:	0																*/
	
#include<stdio.h>

int EvenCount(int);

int main()
{
	int iNo=0, iRet=0;
	
	printf("Enter number: ");
	scanf("%d",&iNo);
	
	iRet=EvenCount(iNo);
	
	printf("Even digits in %d  is %d \n",iNo, iRet);
	
	return 0;
}

int EvenCount(int iNo)
{
	int i=0, iDigit=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit%2==0)
		{
			i++;
		}
		
		iNo=iNo/10;
	}
	return i;
}
