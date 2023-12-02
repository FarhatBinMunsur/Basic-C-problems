#include<stdio.h>
int main()
{
    int i=5,n=1,result;


    while(n<=10){
        printf("%d*%d=%d\n",i,n,i*n);
        n++;
     if (n==11){
        break;
     }
    }


}
