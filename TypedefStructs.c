

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


int main(){

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
   
   return 0;
}