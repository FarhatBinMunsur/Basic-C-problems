#include<stdio.h>
int main()
{
 int a=5,i;


    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);

    }

    //anotor system
    int x=5,y=1;
    for ( ; y<=10;y++)
    {
        printf("%d*%d=%d\n",x,y,x*y);

    }



    //system3
    int p=1,q=5;
    for( ; ;)
    {
       printf("%d*%d=%d\n",q,p,q*p);

       p++;
       if( p>10)
       {
           break;
       }
    }

}
