#include <stdio.h>

int main() {

    int decimalNumber=0,tmp;
    int octalNumber,i=1 ;

    printf("Enter a octal number(start with 0): ");
    scanf("%o", &octalNumber);
    tmp = octalNumber; //save the octal number 	


    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 8)*i;
        octalNumber /= 8;
	i *= 8;
    	printf("%o in octal = %d in decimal\n", octalNumber, decimalNumber);
    }
    printf("%o in octal = %d in decimal\n", tmp, decimalNumber);
}
