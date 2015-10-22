#include <stdio.h>

void up(int floor);
void down(int floor);
void display(int floor);
int check_floor(int floor);
int selector(int floor);


int main()
{
	int floor = 1;
	int current = 1;

	printf("Hello welcome to my elevator sim.\n\n");
	while (1)
	{
		display(floor);
		current = check_floor(floor);
		break;
		
	}
}

void up(int floor)
{
	;
}

void down(int floor)
{
	;
}

void display(int floor)
{
	printf("Current floor: %d\n",floor);
}

int check_floor(int floor)
{
	int current = 0;
	printf("What floor are you on?: ");
	scanf("%d", &current);
	if (current == 1)
	{
		printf("You are on the %dst floor.\n", current);
	}
	else if (current == 2)
	{
		printf("You are on the %dnd floor.\n", current);
	}
	else if (current == 3)
	{
		printf("You are on the %drd floor.\n", current);
	}
	else
	{
		printf("You are on the %dth floor.\n", current);
	}
	return (current);
}

int selector(int floor)
{
	return 0;
}