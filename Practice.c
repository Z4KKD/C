#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


    void hello(char[], int); // function prototype

    int findMax(int x, int y) // --- Ternary operator
    {
        /* 
        if(x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
        */
        return ( x > y) ? x : y; // short verison of the if statement above.
    }

    double sqaure(double x) // replace void with the variable you want to return.
    {
        double result = x * x;
        return result;
    }

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

    void sort(int array[], int size)
    {
        for(int i = 0; i < size - 1; i++)
        {
            for(int j = 0; j < size - i - 1; j++)
            {
                if(array[j] > array[j+1])
                {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }

            }
        }
    }
    
            void printArray(int array[], int size)
    {
        for(int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
    }
    struct Player
    {
        char name[12];
        int score;
    };

    //typedef char user[25]; // a typedef is a keyboard thats given a nickname

    typedef struct// using a typedef struck instead of regular typedef
    {
        char name[25];
        char password[12];
        int id;
    } User; // adds the nickname to the bottom

    struct Student
    {
        char name[12];
        float gpa;
    };

    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

    void printAge(int *pAge)
    {
        printf("You are %d years old", *pAge); // dereference
    }

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);


int main(){


    /* --- Tic Tac Toe Game 
    
   char winner = ' ';
   char response = ' ';

   do
   {
      winner = ' ';
      response = ' ';
      resetBoard();

      while(winner == ' ' && checkFreeSpaces() != 0)
      {
         printBoard();

         playerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }

         computerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
      }

      printBoard();
      printWinner(winner);

      printf("\nWould you like to play again? (Y/N): ");
      scanf("%c");
      scanf("%c", &response);
      response = toupper(response);
   } while (response == 'Y');

   printf("Thanks for playing!");

    */

    /* Writing files

    FILE *pF = fopen("test2.txt", "a"); // W for write and A for append

    fprintf(pF, "\nTiny little test two");

    fclose(pF);

    //  if(remove("test2.txt") == 0) // to remove the txt file
    //  {
    //    printf("Deleted!");
    //  }
    //  else
    //  {
    //    printf("Error! Not Deleted!");
    //  }
    //
    */
 

    /* Reading files

           FILE *pF = fopen("test.txt", "r");
        char buffer[255];

        if(pF == NULL)
        {
            printf("unable to read!");
        }
        else
        {
            printf("reading!");
        }

    while(fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }

        fclose(pF);
    
    */

    /* Pointers
    
    int age = 21;
    int *pAge = NULL; // use * for pointers and assign null when declaring a pointer
    pAge = &age

    //printf("Address of age: %p\n", &age); 
    //printf("Value of age: %p\n", pAge);

   // printf("size of age: %d bytes\n", sizeof(age)); // must have at least 8 bytes for pointer to store
    //printf("size of pAge: %d bytes\n", sizeof(pAge)); // pointers use 8 bytes to store address
    
    //printf("Value of age: %d\n", age);
    //printf("value at stored address: %d\n", *pAge);  // dereferencing

    printAge(pAge);


    */



    /* memory addresses and to format this its %p
    
        char a = 'X'; // hexidemical
    short b = 'Y';
    double c = 'Z';

    printf("%d bytes\n", sizeof(a));
     printf("%d bytes\n", sizeof(b));
      printf("%d bytes\n", sizeof(c));
    
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    */


     /* Bitwise operators

    // & = AND
    // | = OR
    // ^ = XOR
    // << = LEFT SHIFT
    // >> = RIGHT SHIFT
    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 0000000

    z = x & y; // z becomes 0000100 
    printf("AND = %d\n", z);
    
    z = x | y; // z becomes 00001110
    printf("OR = %d\n", z);

    z = x ^ y; // z becomes 00001010
    printf("XOR = %d\n", z);

    z = x << y; // z becomes 0001100
    printf("LEFT SHIFT = %d\n", z);

    z = x >> y; // z becomes 0000011
    printf("RIGHT SHIFT = %d\n", z);

     /*

    /* Guess the number game

        
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
    
    */





    /*---- 
    srand(time(0)); // using current time for a random seed . You need a seed so it wont be the same random numbers all the time

    int dice = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    printf("%d\n", dice);
     printf("%d\n", dice2);
      printf("%d\n", dice3);
      */


    /*----Enums
    
    enum Day today = Sun;

    //printf("%d", today);

    if(today == Sun || today == Sat)
    {
        printf("Its the weekend");
    }else
    {
        printf("Its not the weekend yet");
    }
    
    
    */

    /*--Array of structs    
    struct Student student1 = {"Matt", 3.0};
    struct Student student2 = {"Bob", 2.9};
    struct Student student3 = {"Billy", 3.7};
    struct Student student4 = {"Sharron", 4.0};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {   
        printf("%-12s\t", students[i].name);
        printf("%.2f \n", students[i].gpa);
    }
    */ 

    /* typedef structs 

    User user1 = {"Zakk", "password", 123456789};
    User user2 = {"Bruce", "password", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    */

     /* structs

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Zakk");
    player1.score = 3;

    strcpy(player2.name, "Bruce");
    player2.score = 5;

    printf("%s \n", player1.name)
    printf("%d \n", player1.score)
    printf("%s \n", player2.name)
    printf("%d \n", player2.score)
    */

    /* Sort an array 

   int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
   int size = sizeof(array)/sizeof(array[0]);

   sort(array, size);
   printArray(array, size);

   */

    /* ------- User input 

    double A;
    double B;
    double C;
    printf("Enter side A: ")
    scanf("%lf", &A) // user input is & in front

    printf("Enter side of B: ")
    scanf("%lf", &B); ) // user input is & in front

    C = sqrt(A*A + B*B);
    printf("Side C: %lf", C);
    */

    /* ----------------- formats

        %c = char
        %s = string
        %f = float
        %lf = double
        %d = int
        %.1 = decimal precision
        %1 = minimun field width
        %- = left align
        
    
    */ 

    /* ----------------- print formats

    float item1 = 5.50;
    float item2 = 10.00;
    float item3 = 100.20;
    float item4 = 1000.10;
    printf("Item 1: $%.2f\n", item1);
    printf("Item 1: $%.2f\n", item2);
    printf("Item 1: $%.2f\n", item3);
    printf("Item 1: $%.2f\n", item4);

     */
    
    /*  ----------------- variables 

    printf("Test\n"); //will come up with a error
    printf("Test2\n");
    return 0; // if it returns 1 then there was an error 
    
    // \t can create a space and \" will print " while \\ will print \
    printf("\"1\t3\t3\\\n4\t5\""); 
    return 0;  

    char single = 'O'; // Single char using '' with format %c 
    printf("%c\n",single);

    char sTring = "Alot"; // array of char using "" with format %s

    float small = 3.141592; // 4 bytes (6-7 digits) with format %f
    printf("%0.15f\n",small);

    float item1 

    double big = 3.141592643589793; // 8 bytes (15-16 digits) with format %lf and more precise
    print("%0.15lf\n",big); // will be more accurate than a float 

    bool tof = true; // true or false with format %d

    char f = 100; // ASCII table ww with a format of %d or %c

    unsigned char g = 255; // 1 byte  0 - 255 only format is %d or %c


    short h = 32676; // ( short int ) 2 bytes (-32678 - 32767) with formate %d
    unsigned short i = 65536; // ( short int ) 2 bytes (0 - 6553567) with formate %d 

    int whole = 2147483647; // 4 bytes (-2147483648 - 2147483647) whole numbers only with format %d
    unsigned int k = 4294967295; // 4 byes (0 - 4294967295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9quintillion to +9quintillion ) format is %lld
    unsigned long long int l = 18446744073709551615U; // add U to the end so it will display without warning. 8 bytes (0 to +18quintillion ) format is %llu 

    const float PI = 3.14159; // const can not be changed during its execution
    printf("%f", PI);

    */

    /* ---------- augmented operators & import string

    // -- minus 1
    // ++ plus 1

    int x = 10;

    //x = x + 2;
    x+=2;

    // x = x - 3;
    x-=3;

    x = x * 4;
    x*=4;

    x = x / 5;
    x/=5;

    x = x % 6;
    x/=6;

    */
    /*
   char name[25]; //byes if goes over limit it will overflow
   int num;
   printf("\nWhats your name? ");
   //scanf("%s", name);  // will only scan up to a white space
   fgets(name, 25, stdin); // too inclued white spaces
   name[strlen(name)-1] = '\0'; // when using string function

   printf("\nHello %s", name);

   printf("\nPlease type a number ");
   scanf("%d",&num);
   printf("\nYou typed in %d", num);

   
    bool rain = true;

    if(!rain){
    printf("\nFinally the rain is gone");
    }else{
    printf("\nIts still raining!");
    }



   */

    /*---- import math
    
    double A = sqrt(9); //square root
    double B = pow(2,4); // powered
    int C = round(3.14); // rounded
    int D = ceil(3.14); // round up
    int E = floor(3.14); // round down
    double F =  fabs(-100); // how far away it is from zero ( Absolute value )
    double G = log(3); // find the log of a number 
    double H = sin(45); // trig
    double I = cos(45); // trig
    double J = tan(45); // trig
     printf("\n%d",E);
    
    */
  
    /*---Return statement

    double x = sqaure(3.14);
    printf("%lf", x);

    */

    /*--- Calling functions

    Circle(); // Circle circumference program
    Temparture(); // Temperature Conversion program

     */

    /*--- Ternary operator
    int max = findMax(3, 4);
    printf("%d", max);
    */


    /* -- Prototype
    char name[] = "Test";
    int age = 21;

    hello(name, age);
    */

   /*-- String functions
   
    char string1[] = "Test";
    char string2[] = "Math";
    //strlwr(string1); // lowercase
    //strupr(string1); // uppercase
    //strcat(string1, string2); // appends sppend2 to the end of append1
    //strncat(string1, string2, 4); // appends a certain number of append2 to the end of append1
    //strcpy(string1, string2); // copy string2 to string1
    //strset(string1, '?'); //sets the string 
    //strnset(string1, 'x', 1); //sets certain strings 
    //strrev(string1); // reverses the string

    printf("%s", string1);

    //int number = strlen(string1); // returns the length of the string
    //int number = strcmp(string1, string2); // compares strings ( 0 are same else not the same)
    //int number = strcmp(string1, string2, 1); // compares certain amount of strings
    //int number = strcmpi(string1, string2); // compares certain amount of strings ( ignore case sensitive)
    //int number = strnicmp(string1, string2, 1); // compares certain amount of strings ( ignore case sensitive)

    printf("%d", number);
   
   */ 

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

    /*---- Print arrays

    double prices[] = {5.0, 10.0, 15.0, 25.0};
    
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }


    */
   /* 2D Array
   
   
    //int numbers[2][3] = {{1,2,3},{4,5,6}};
    
    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]); // rows
        }

        printf("\n"); // columns
    }
    
   */

    /*--- Array of strings 
    char colors[][10] = {"Orange","Blue","Green"};

    strcpy(colors[0], "Red"); // how to set colors[0] = "Red"

    for(int i = 0; i < sizeof(colors)/sizeof(colors[0]); i++)
    {
        printf("%s\n", colors[i]);
    }
    */

   /* swapping values
    //char x = 'X';
    //char y = 'Y';
    //char temp;
    
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    //temp = x;
    //x = y;
    //y = temp;

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    //printf("x = %c\n", x);
    //printf("y = %c\n", y);
    printf("x = %s\n", x);
    printf("y = %s\n", y);

    */

    return 0; 

}

void resetBoard()
{
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}
void printBoard()
{
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
   printf("\n");
}
int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')
         {
            freeSpaces--;
         }
      }
   }
   return freeSpaces;
}
void playerMove()
{
   int x;
   int y;

   do
   {
      printf("Enter row #(1-3): ");
      scanf("%d", &x);
      x--;
      printf("Enter column #(1-3): ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
         printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER;
         break;
      }
   } while (board[x][y] != ' ');
   
}
void computerMove()
{
   //creates a seed based on current time
   srand(time(0));
   int x;
   int y;

   if(checkFreeSpaces() > 0)
   {
      do
      {
         x = rand() % 3;
         y = rand() % 3;
      } while (board[x][y] != ' ');
      
      board[x][y] = COMPUTER;
   }
   else
   {
      printWinner(' ');
   }
}
char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}
void printWinner(char winner)
{
   if(winner == PLAYER)
   {
      printf("YOU WIN!");
   }
   else if(winner == COMPUTER)
   {
      printf("YOU LOSE!");
   }
   else{
      printf("IT'S A TIE!");
   }
}


void hello(char name[], int age) // if you call this after you need a prototype
{
    printf("\nHello %s", name);
    printf("\nYou are %d", age);
}
