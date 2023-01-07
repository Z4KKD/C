#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{

 /*-- Do while loop
  int number = 0;
  int sum = 0;

    //while(number > 0) while loops check condition then executes. 
    do { //A DO While loop always executes block of code once, then checks condition.
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum =+ number;
        }
    } while(number > 0); // while must go at end for a do while loop
    printf("sum: %d", sum);
    */


   /*-- Nested loop

      int rows;
  int columns;
  char symbol;

  printf("\nEnter # of rows:  ");
  scanf("%d", &rows);
   printf("\nEnter # of columns:  ");
  scanf("%d", &columns); // this contains a \n 
  scanf("%c"); // this will remove the \n 
   printf("\nEnter a symbol to use:  ");
  scanf("%c", &symbol);

  for(int i = 1; i <= rows; i++){
    for(int j = 1; j <= columns; j++){
        //printf("%d ", j); // prints the amount of ammount of columns 
        printf("%c", symbol); // prints out rows and columns of the symbol 
    }
    printf("\n");
  }

   */   

    /* --- Continue and break

        for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
        //continue; // skips the rest of code n forces the next iteration of the loop
        break; // exits the loop
        }
        printf("%d\n", i);
    }  
   */   

    return 0;

}