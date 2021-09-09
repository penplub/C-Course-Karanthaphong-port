#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef enum{
    Apple,
    Google
}Mobile;
int main(int argc,char *argv []){
    Mobile m = Apple;
    switch (m){
    case Apple:
    printf("Your phone is iphone");
    break;
    case Google:
    printf("Your phone is android");
    break;
    default:
    break;
    
    }
    return 0 ;

}