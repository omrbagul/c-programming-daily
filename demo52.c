// typedef is used to rename user defined data types
// 
// way 2 typedef
#include<stdio.h>
// decl of enum
enum color
{   // 0  0+1            3+1=4    4+1=5
    Exit, Red , Blue=3, White , Black
};
typedef enum color color_t;
//      old_name    new_name
//typedef enum color COLOR;
int main(void)
{
    int no;
    color_t c; // enum color c;  // enum color is user defined data type
    // c is variable of user defined data type enum color

    printf("\n 1. Red \n 3. Blue \n 4. While \n 5. Black \n 0. Exit");
    printf("\n Enter color=");
    //scanf("%d", &c);
    scanf("%d", &no);
    switch(no)
    {
        case 0: return 0;
        case 1: c=Red; break;
        case 3: c=Blue; break;
        case 4: c=White; break;
        case 5: c=Black; break;
        default: c= 10;  break;
    }

    switch(c)
    {
        default: printf("\n invalid color"); break;
        case Red: printf("Red color");break;
        case Blue: printf("Blue color");break;
        case White: printf("While color");break;
        case Black: printf("Black color");break;
        case 0: return 0;
    }
    
    return 0;
}
/*
typedef strcut node
{
    int data;
    strcut node* next;
}node_t;

sunbeam@sunbeam-IdeaPad-3-15ITL6:~/PM49/Day_06$ gcc demo3_1.c
sunbeam@sunbeam-IdeaPad-3-15ITL6:~/PM49/Day_06$ ./a.out

 1. Red 
 3. Blue 
 4. While 
 5. Black 
 0. Exit
 Enter color=1
Red color
*/