

//Collatz Lab2a
//Matt Luca : February 9, 2019 @ 12:49am


#include <stdio.h>

int get_start(); //Function prototype for compiler
int next_collatz(); //Function prototype for compiler

int main()  
{
    //calls for user input
    int nextcoll = get_start();
    int count = 1;

    //calculates collatz
    printf("The sequential length is: %d\n", next_collatz(nextcoll,count));
        return 0;
}

///////////////////////////////////////////////////

//Prompts for user input

int get_start () 
{
    int nextcoll;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &nextcoll);
    } while (nextcoll <= 0);
        return nextcoll;
}



///////////////////////////////////////////////////


int next_collatz (int nextcoll, int count) 
{
    int i = nextcoll;
    int length = count;
    
    while (i != 1) 
    {
        length ++;
        printf("%d\n", nextcoll);
     
        //positive int
        if ((i % 2) == 0) 
        return next_collatz (i/2, length);
             
        //negative int               
        else 
        return next_collatz(3 * i + 1, length);
    }
    return length;
}  


///////////////////////////////////////////////////





