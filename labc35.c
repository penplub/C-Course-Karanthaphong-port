#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int i;
    char FullName[] = "Karanthaphong";
    int count = strlen(FullName);

    for (i=0;i<count;i++){
        printf("%c\n", FullName[i]);
    }
    return 0;


}