#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    float Price = 1200;
    float VatRate = 0.1;
    float Vat = Price*VatRate;
    float PrinceWithVat = Price + Vat;

    printf("Price : %f", PrinceWithVat);
    return 0 ;
}