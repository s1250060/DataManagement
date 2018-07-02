#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int GetRandom(int min,int max);

int main(void)
{
  int num1, num2, count = 0;

  printf("Rolling the dice...\n");
  srand((unsigned)time(NULL));

  printf("Die  1: %d\n", num1 = rand()%6 + 1);
	  printf("Die  2: %d\n", num2 = rand()%6 + 1);
	  
	  count = num1 + num2;


	printf("Total value: %d\n", count);
	return 0;
}
