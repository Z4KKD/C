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

   return 0;
}