#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int salary = 2500;
    int *p=&salary;
    printf("p is address of salary = %p\n", p);
    printf("*p is the value of salary = %d", *p);
    return 0;

}