#include <stdio.h>

void catCall()
{
	printf("You have just given your cat... call.\n");
	printf("flag{act1ng_ca11y}\n");
}

void cat()
{
	char buffer[10];
        printf("Who ya tryna cat call?!?!:\n");
        scanf("%s", buffer);
        printf("You called: %s\n", buffer);
}

int main()
{
	cat();	
	return 0;
}

