#include<stdio.h>

int main()
{
    char lower;

    printf("enter any lowercase :");
    scanf("%c",&lower);

    printf("the upercase of the word is:%c\n",toupper(lower));

    return 0;
}
