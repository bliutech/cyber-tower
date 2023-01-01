#include <stdio.h>

int main()
{
	int buff[10][10];
	int inArea = 0;
	int i, j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			buff[i][j] = 0;
		}
	}
	for(i = 5; i < 10; i++)
        {
                for(j = 5; j < 10; j++)
                {
                        buff[i][j] = 1;
                }
        }

	printf("Welcome to Dave's Backyard!\n");

	int x, y;
	printf("Input the x coordinate of where you want to go.\n");
	scanf("%d", &x);
	printf("Input the y coordinate of where you want to go.\n");
	scanf("%d", &y);
	if(x > 5 && y > 5)
	{
		printf("MEOUCH! You just ran into the fence! Both your x and y can't be greater than 5!\n");
		return 1;
	}
	if(x > 10 && y > 10)
	{
		printf("MEWHOAH! You are out of the neighborhood! Both you x and y can't be greater than 10!\n");
		return 1;
	}
	inArea = buff[x][y];
	if(inArea == 1)
	{
		printf("Yay! Dave & Sam are together!\n");
		printf("flag{0verf19w_tunne1}\n");
		return 0;
	}
	else
	{
		printf("Naur!!! Dave & Sam are still separated!\n");
	}
	return 1;
}
