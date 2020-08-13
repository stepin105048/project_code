#include<stdio.h>
int add (int a, int b)
{

    return a+b;
}
int sub(int c,int d)
{
    return c-d;
}
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
