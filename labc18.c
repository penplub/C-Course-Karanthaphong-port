#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv []){
    int x,y;
    x= 10;
    y= 5;
    printf("x :%d\n",x);
    printf("y : %d\n\n",y);
    printf("------------------------------------\n");
    printf("x+y \t = %d\n", x+y);
    printf("x-y \t = %d\n",x-y);
    printf("x*y\t = %d\n", x*y);
    printf("x/y \t = %d\n",x/y);
    printf("x %%y\t = %d\n", x%y);//เศษ
    return 0 ;

}