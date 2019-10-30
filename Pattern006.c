/* Accept number from user and display below pattern
		Input:	7846
		Output:	6	#	#	#	#	#	#	
					4	#	#	#	#
					8	#	#	#	#	#	#	#	#
					7	#	#	#	#	#	#	#							*/


#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0, i=0;
		
	while(iNo>0)
		{
			iDigit=iNo%10;
			printf("%d ",iDigit);
			for(i=1;i<=iDigit;i++)
			{
				printf("# ");
			}
				printf("\n");
			iNo=iNo/10;
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
