#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


void Circle()  //----Circle circumference program
    {

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius); // must use 

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("circumference: %lf", circumference);
    printf("\narea: %lf", area);
    }


int main(){

    Circle(); // Circle circumference program
    return 0;
    
}