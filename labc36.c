#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char FullName[] = "Karanthaphong";
    char initial[] = "Mr";

    strcat(initial,FullName);
    printf("%s",initial);//ยึดตัวแรก
    return 0;

}