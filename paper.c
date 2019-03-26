
//Matt Luca
//Lab 2b (Paper) : February 11, 2019 @ 8:39pm

#include <stdio.h>

int get_amount(); //function prototype
void bills(); //function prototype

int main()
{
   
int hundred = 0;
int twenty = 0;
int ten = 0;
int five = 0;
int one = 0;
   
int amount = get_amount();
bills(&hundred, &twenty, &ten, &five, &one, amount);
  
   printf(" Number of $100 bills: %d\n ",hundred);
   printf("Number of $20 bills: %d\n ",twenty);
   printf("Number of $10 bills: %d\n ",ten);
   printf("Number of $5 bills: %d\n ",five);
   printf("Number of $1 bills: %d\n ",one);
   
   return 0;
   
}

///////////////////////////////////////////////////

int get_amount()
{
	int amount;
	do {
		printf("Enter a positive amount: ");
		scanf("%d", &amount);
	  } while (amount <= 0);
		
	return amount;
}

///////////////////////////////////////////////////

void bills(int *hundred, int *twenty, int *ten, int *five, int *one, int amount)
	{
		
		*hundred = amount/100;
		amount %= 100;
		
		*twenty = amount/20;
		amount %= 20;
		
		*ten = amount/10;
		amount %= 10;
		
		*five = amount/5;
		amount %= 5;
		
		 *one = amount;  
	}

///////////////////////////////////////////////////