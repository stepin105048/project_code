/// @file main.c
#include<stdio.h>

/**
 * This is the main function
 *
*/


int main()
{
    char name[]="my_name_is_edcast_future_skills";
    char name1[10];
    printf("%s\n",name);///print the given string with delimeter
    printf("\"");
     /**
 * code block to divide the string into substring based on delimiter
 * @param[in] string
 * @param[out] substring
 *
*/

    for(int i=0;name[i]!='\0';i++) ///for loop to read character in a string
    {

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
