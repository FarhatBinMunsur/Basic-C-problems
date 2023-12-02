#include<stdio.h>
#include<math.h>
int main()
{
    float radius,pi,area;
    pi=3.14159;
    char c,n;

    printf("do you want to calculate the area:\n");
    c=getch();
    c=toupper(c);

    while(c!="N")
    {

    printf("enter  the radius");
    scanf("%f",&radius);
    area=radius*radius*pi;

    printf("the area of the circle is:%f \n",area);

    }
}
