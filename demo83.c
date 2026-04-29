/*
string is array of char terminated by '\0'
strlen function dont consider '\0' char
sizeof operator consider '\0' char
*/

#include<stdio.h>
#include<string.h>
#define LEN 40 //macro
int main(void)
{
    //
    char city1[LEN] = "pune"; //when we " " \0 will be add by compiler

    char city2[] = {'p', 'u', 'n', 'e', '\0'}; // '\0'   should by user

    char city3[LEN]={'k','a', 'r', 'a','d', '\0'}; // '\0' should by user
    
    char city4[]="karad"; // when we "" \0 will be add by compiler

    // array char
    char city5[LEN]= {'p','u', 'n', 'e'};

    printf("\n city1 sizeof of %s is %d", city1, sizeof(city1)); //
    printf("\n city1 length of %s is %d", city1, strlen(city1));

    printf("\n city2 sizeof of %s is %d", city2, sizeof(city2));
    printf("\n city2 length of %s is %d", city2, strlen(city2));

    printf("\n city3 sizeof of %s is %d", city3, sizeof(city3));
    printf("\n city3 length of %s is %d", city3, strlen(city3));

    printf("\n city4 sizeof of %s is %d", city4, sizeof(city4));
    printf("\n city4 length of %s is %d", city4, strlen(city4));

    return 0;

}
