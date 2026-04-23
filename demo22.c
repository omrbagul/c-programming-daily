/*#include<stdio.h>

if we want to make condition more redable we can use switch case

switch(expression)
{
    default: 
    case 1:
        statement1;
        break;
    case 2:
        statement2;
        break;
    case 3:
        statement3;
        break;

}

cases should be unique (duplicate case not allowed as it jump to matching case)

there are 3 data types are allowed in cases
1. int 2. char (ascii value) 3. enum (int constant)


float,double and string not allowed for cases
using break is not mandatory if we dont use break it will execute next case.

if no matching case default case will execute
default can be any where in case(can be 1st case)

case 1+1; //allowed
case 1+2; //allowed

we can use constants with expression


we can not use variables in the cases

case a+b: // if a and b are variables

case 1,2,3: //not allowed

case 1:
case 2:
case 3: statements; break;
*/
//Simple Calculator using Switch

#include<stdio.h>
int main(void)
{
    int no1, no2, ans;
    char op;
    printf("\n Enter No1=");
    scanf("%d", &no1);

    printf("\n Enter Operator=");
    scanf("%*c%c", &op);

    printf("\n Enter No2=");
    scanf("%d", &no2);

    ans=0;

    switch(op)
    {
        default:
                printf("\n Invalid Operator\n");
                return 0; //exit (0);

        case '+':
                ans=no1+no2;
                break;
        case '-':
                ans=no1-no2;
                break;
        case '*':
                ans=no1*no2;
                break;
        case '/':
        {
            if(no2==0)
            {
                printf("\n can not divide by zero\n");
                return 0; //jump statement
            }
            else 
            {
                ans=no1/no2;
            }
        }
        break;

    }
    printf("\n ans=%d", ans);


    return 0;
}