#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int i;
    int j;
    for(i=1;i<=100;i+=10){
        printf("%d\t",i);
        for(j=1;j<10;j++){
            printf("%d\t", j+i);    

        }




        printf("\n");

    }

}