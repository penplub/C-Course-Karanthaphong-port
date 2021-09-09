#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RESULT1 x+y
#define RESULT2 x-y
int main(int argc,char *argv []){
    int x = 100;
    int y = 200;
    printf("RESULT1 is : %d\n",RESULT1);
    printf("RESULT2 is : %d\n",RESULT2);
    return 0;
}