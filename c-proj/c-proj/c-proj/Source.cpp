#include <stdio.h>
#include <stdlib.h>

void Name()
{
	char charName[] = "Jay";
	int charAge = 28;

	printf("My name is %s.\n", charName);
	printf("I am %d years old.\n", charAge);
}

int main()
{
	printf("Hello, World!\n");

	Name();
}