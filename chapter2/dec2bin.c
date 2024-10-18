#include <stdio.h>

int main() {

    int decimalNumber,tmp;
    int binNumber = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    tmp = decimalNumber; //save the decimal number 	

    while (decimalNumber != 0) {
/*        binNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 2; */
    }
    printf("%d in decimal = %x in binary\n", tmp, binNumber);
}
