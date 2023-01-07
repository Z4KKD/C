#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


void Temparture() //---- Temperature Conversion program
    {

    char unit;
    float temp;

    printf("\n Temperature is in F or C ?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C')
    {
        printf("Enter the temp in Celsius:  ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temp in Farenheit:  ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else{

         printf("\n %c is not valid unit", unit);
    }
   

    }

int main(){

    Temparture(); // Temperature Conversion program
     return 0;

}