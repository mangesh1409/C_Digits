/*Accept number from user and display below pattern
	Input:		7846
	Output:		6	
					6	4
					6	4	8	
					6	4	8	7								*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0, i=0, j=0, k=0;
	int temp=iNo;
	
	while(temp>0)
	{
		temp=temp/10;
		i++;
	}
	
	for(j=1;j<=i;j++)
	{	
		temp=iNo;
		k=1;
		
		while(k<=j)
		{
			iDigit=temp%10;
			printf("%d ",iDigit);
			temp=temp/10;
			k++;
		}	
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}
