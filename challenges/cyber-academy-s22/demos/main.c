#include <stdio.h>
#include <string.h>

int main(void)
{
	char buff[15];
	int pass = 0;

	printf("Enter the password:\n");
	gets(buff);

	if(strcmp(buff, "acmcyber"))
	{
		printf("Wrong Password\n");
	}
	else
	{
		printf("Correct Password\n");
		pass = 1;
	}
	if(pass)
	{
		printf("Root privileges given to the user\nflag{buffer_overflow}\n");
	}

	return 0;
}
