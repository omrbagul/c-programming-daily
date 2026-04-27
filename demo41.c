/*enum

Date: 24/04/2026

enum make prog more redable
enum is internally integer constant
size of enum variable is 4 bytes (int constant)
enum is user defined data type
1st data member of enum will have value
next data member value will increment by 1

decl of enum should be before main i.e global decl
(we can declare in side main)
*/

#include<stdio.h>
//decl of enum will not have memory
enum months
{   //0    0+1 1+1=2 2+1=3  3+1=4
    Exit, Jan, Feb,   Mar,   Apr
};

int main(void)
{
   
    enum months m;  //enum months is user define data type
                    //m is variable of user defined data type enum 
                    //m will take memory 4 bytes
    int no1; // int is data type and no1 is variable of int data type

    printf("\nEnter Month =");
    scanf("%d", &m);

    switch(m)
    {
        case Jan: //case 1: Jan=1
            printf("\nJan has 31 days"); break;
        case Mar: //case 3: Mar=3
            printf("\nMar has 31 days"); break;   
        case Apr://case 4: Apr=4
            printf("\nMar has 30 days"); break;
        case Exit: //case 0; Exit=0
            return 0; //exit(0);
    }   
    printf("\n Size of m=%d", sizeof(m)); //4 bytes
    printf("\n Size of enum month=%d", sizeof(enum months)); //4 bytes
    printf("\n Size of no1=%d", sizeof(no1)); //sizeof(no1) =4
    printf("\n Size of int=%d", sizeof(int)); //sizeof(int) =4

    return 0;
}