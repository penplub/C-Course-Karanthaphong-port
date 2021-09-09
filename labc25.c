#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int i = 0;
    long sum =0;
    for(i=1;i<=5;i++){
        sum = sum + 1;
    }
    printf("Total : %d",sum);
    return 0 ;
   

}