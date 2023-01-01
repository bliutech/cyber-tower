#include <stdio.h>

int main(void)
{
	int sum = 0;
	int input1, input2;
	printf("The goal is to make the sum negative.\n");
	printf("Input the first number you want to add.\n");
       	scanf("%d", &input1);
	printf("Input the second number you want to add.\n");
	scanf("%d", &input2);
	if(input1 < 0 | input2 < 0)
	{
		printf("\nError: can't input a negative number\n");
		return 1;
	}
	else
	{
		sum = input1 + input2;
		printf("\nSum: %d", sum);
		if(sum < 0)
		{
			printf("\nflag{integer_overflow}\n");
		}
		else
		{
			printf("\nYour sum is not negative!\n");
			return 1;
		}
	}
	return 0;
}
