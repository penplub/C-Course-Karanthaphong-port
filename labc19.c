#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    bool x = true;
    bool y = false;

    printf("And");
    if(x&&y){
        printf("\nTrue");
    }else
    {
        printf("\nFlase");
    }
    printf("\nOr");
    if(x||y){
        printf("\nTrue");
    }else
    {
        printf("\nFlase");
    }
    printf("\nNot");
   printf("\n!x : %d",x);
   return 0 ;
    

}