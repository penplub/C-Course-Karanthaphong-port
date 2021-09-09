#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int i;
    for(i=1 ; i<=10;i++){
        printf("Value : %d\n",i);
        if(i==5){
            break;
        }
    }
    return 0;

}