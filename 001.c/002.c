#include <stdio.h>

/***
 * main is the driving function the program
 *
 *
 * Return : nothing
 
 */

int main ()
{
	int score = 80;

	printf("please enter your score");
	

	scanf("%d", &score);


	if(score < 80)
	{
		printf(" you are not eligible to be enrolled");
	}

	else if(score > 80)
	{
		printf("you are qualified to be enrolled);
	}

	return(0);

}	
