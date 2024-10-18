#include <stdio.h>

int main() {

    int decimalNumber,tmp;
    int octalNumber = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    tmp = decimalNumber; //save the decimal number 	

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    printf("%d in decimal = %od in octal\n", tmp, octalNumber);
}
