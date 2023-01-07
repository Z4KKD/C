#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int main(){
        
   const int min = 1;
   const int max = 100;
   int guess;
   int guesses;
   int answer;

   srand(time(0)); // create time as a seed

   answer = (rand() % max) + min;

   //printf("%d", answer);

   do{
    printf("Enter a guess:  ");
    scanf("%d", &guess);
    if(guess > answer)
    {
        printf("Too high!\n");
    }
    else if (guess < answer)
    {
        printf("Too low!\n");
    }
    else
    {
        printf("Correct!\n");
    }
    guesses++;
   }while(guess != answer);

   printf("answer: %d\n",answer);
   printf("guesses: %d\n",guesses); 
    
    return 0;
}