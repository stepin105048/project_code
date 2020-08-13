/// @file main.c
#include<stdio.h>
/**
 * Addition of two numbers is performed.

 * @param[in] numbers
 * @param[out] sum
 */
int add (int a, int b)
{

    return a+b;
}
/**
 * Subtractoin of two numbers is performed.

 * @param[in] numbers
 * @param[out] Difference
 */
int sub(int c,int d)
{
    return c-d;
}

/**
 * Main entry point of the program.
*/
int main()
{
    int result,result2;
    int (*ptr)(int,int)=&add;
     result= (*ptr)(10,20);
    printf("addition result : %d\n",result);
    int (*ptr2)(int,int)=&sub;
    result2=(*ptr2)(20,10);
    printf("subtraction result : %d",result2);
    return 0;
}
