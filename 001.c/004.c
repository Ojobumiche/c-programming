#include <stdio.h>

/***
 *
 * main - the entry point of program
 *
 * scanf: take input from the user
 *
 * Return : Always 0.
 *
 *
 */


int main()

{

	int name;

	int age;

	printf("what is your name? \n how old are you? ");


	scanf("my name is %d\n and I am %d year old\n", &name, &age);

	printf("%d %d\n", name, age);


	return 0;

}
