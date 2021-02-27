/* Keeshan Rama
 *  COEN 11
 *  Lab1
 * Tuesday 2:15 pm
 */

#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int denominator;
        int dividend;
	int quotient;
        int answer;
        int score = 0;
        int guess;
	int i;
	int j;
	for(i=0;i<10;i++)
	{
		denominator= rand () % 12 + 1;
		quotient= rand () % 13;
		dividend=denominator*quotient;
		printf("What is the quotient if the denominator is %d and the dividend is %d?\n",denominator,dividend);
		j = division(denominator,dividend);
		if(j==1)
		{	score++;
			printf("Correct!\n");
		}
		else
			printf("Wrong!The correct answer was %d\n",dividend/denominator);
	}
printf("Your score is %d out of 10 \n",score);
}
int division(int denominator,int dividend)
{	
int answer;
int quotient;
int score = 0;
int guess ;
scanf("%d",&guess);
answer=dividend/denominator;
if(answer==guess)
{
	return 1;
	
}
else
	return 0;
	
}
        

                                                              
