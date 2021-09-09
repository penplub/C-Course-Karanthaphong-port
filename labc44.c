#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int ProcessData (int num1, int num2);
int main(int argc,char *argv []){
    int result = AddData(5,10);
    printf("Result : %d", result);


    return 0;

}
int AddData (int x, int y ){
    return (x+y);
}