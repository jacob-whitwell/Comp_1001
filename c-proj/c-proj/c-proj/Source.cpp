#include <stdio.h>
#include <stdlib.h>

void Name()
{
	char charName[] = "Jay";
	int charAge = 28;

	printf("My name is %s.\n", charName);
	printf("I am %d years old.\n", charAge);
}

void Consts()
{
	const int num = 5;
	printf("%d", num);
}

void Input()
{

}

int main()
{
	printf("Hello, World!\n");

	Name();

	Consts();
}