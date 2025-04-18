#include<stdio.h>
#include<stdlib.h>   // to use rand()
#include<time.h>    // to use srand() ... s for seed
main()
{
	srand(time(0));
	int number=rand()%100 + 1;//generates a random int in [1,100]
	int guess=0, count=0;
	do
	{
		count++;
		printf("Enter a guess: ");
		scanf("%d", &guess);
		if(guess == number) 
		printf("You got it after %d attempts!\n", count);
		else if(guess < number) printf("Guess higher !\n");
		else printf("Guess lower !\n");
	} while (guess != number);
}
