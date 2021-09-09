#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int data = 100;
void ProcessData(int x){
    printf("x from ProcessData : %d\n",x);
}
void Showdata(int x){
    printf("x from ShowData : %d\n",x);
}


int main(int argc,char *argv []){
    ProcessData(data);
    Showdata(data);




    return 0;

}