#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int ProcessData (int x, int y){
    return (x*y);
}
int main(int argc,char *argv []){
    int result = ProcessData(10,20);
    printf("Result : %d", result);


    return 0;

}