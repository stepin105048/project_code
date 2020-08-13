#include<stdio.h>

/**
 * This is the main function
 *
*/


int main()
{
    char name[]="my_name_is_edcast_future_skills"; /// input string with '_' delimiter
    char name1[10];
    printf("%s\n",name);///print the given string with delimeter
    printf("\"");

    for(int i=0;name[i]!='\0';i++) ///for loop to read character in a string
    {
        /**
 * code block to divide the string into substring based on delimiter
 *
*/
        name1[i]=name[i];
        if(name[i]=='_')
        {
            printf("\"");
            printf("");
            printf(",");
            printf("\"");
           continue;
        }
        printf("%c",name1[i]);///print the substring
        }
printf("\"");


    return 0;


}
