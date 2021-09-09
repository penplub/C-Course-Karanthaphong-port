#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv []){
    int num1;
    int num2;
    printf("Enter two number : ");
    scanf("%d , %d", &num1,&num2);

    printf("First number  is:%d\n ",num1);
    printf("Second number is:%d\n ",num2);
    int result = num1 + num2;
    printf("Result : %d", result);
    return 0;
}