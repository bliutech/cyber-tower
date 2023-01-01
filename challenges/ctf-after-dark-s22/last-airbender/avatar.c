#include <stdio.h>

int water, earth, fire, air, stages;

int learn_water()
{
	stages++;
        water = stages;
	return 1;
}

int learn_earth()
{
	stages++;
	earth = stages;
	return 1;
}

int learn_fire()
{
	stages++;
        fire = stages;
	return 1;
}

int learn_air()
{
	stages++;
        air = stages;
	return 1;
}

int avatar()
{
	if((water == 0) && (earth == 1) && (fire == 2) && (air == 3) && (stages == 3))
	{
		printf("\x66""l\141g\x7B""s\063c\x72""3\164_\x74""u\156n\x33""1\137t\x68""4\157u\x67""h\137t\x68""3\137m\x30""u\1561\x61""i\156}\x0A""");
	}
	else
	{
		printf("You have not yet mastered all of the elements...\n");
	}
	exit(1);
}

int getbuf()
{
	char buff[20];
	printf("What is your name?\n");
	scanf("%s", buff);
	printf("Hello Avatar %s\n", buff);
	return 1;
}

int main()
{
	water = 0;
	earth = 0;
	fire = 0;
	air = 0;
	stages = 0;
	printf("Long ago, the four nations lived together in harmony.\nThen everything changed when the Fire Nation attacked.\nOnly the Avatar, master of all four elements, could stop them. But when the world needed him most, he vanished.\n");
	getbuf();
	return 1;
