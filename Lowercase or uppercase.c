#include<stdio.h>
int main()
{
    char ch;
    printf("enter a word : \n");
    scanf("%c",&ch);
    //MUST USE SINGLE COTATION
    if(ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
     else if(ch>='A' && ch<='Z')

    {
        printf("uppercase");

    }


    return 0;

}
