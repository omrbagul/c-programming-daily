//pre increment and post increment 
//pre decrement and post decrement

#include<stdio.h>

int main()
{   
   
   {
        int x=4, y=0;
        //y= 4+1=5 y=x y=5
        y=++x;    //pre increament         5  5      
        printf("\n y=++x-----> x=%d y=%d", x, y);

   }//block
   printf("\n=========================\n");
   {
        int x=4, y=0;
   // y=x    y=4 x=4+1 x=5
          y=x++; //post increment            5  4     
          printf("\n y=x++-----> x=%d y=%d", x, y);
   
   }
     printf("\n=========================\n");
   {
        int x=4, y=0;
          //x=4-1=3 y=x y=3
          y=--x; //pre decrement             3  3   
          printf("\n y=--x-----> x=%d y=%d", x, y);
   
   }
     printf("\n=========================\n");
   {
        int x=4, y=0;
      //y=x  y=4  x=4-1=3
          y=x--; //post decrement             3  4   
          printf("\n y=x-- -----> x=%d y=%d", x, y);
   
   }




    return 0; //end of the program
}