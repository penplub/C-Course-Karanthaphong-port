#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv []){
    char c;
    short s;
    int i;
    long    l;
    float f;
    double d;

    printf("char : %d\n",sizeof(char));//ใช้พนเท่าไร
    printf("short : %d\n",sizeof(short));
    printf("int : %d\n",sizeof(int));
    printf("long : %d\n",sizeof(short));
    printf("float : %d\n",sizeof(float));
    printf("double : %d\n",sizeof(double));
    return 0 ;
}