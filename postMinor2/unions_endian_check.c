#include <stdio.h>
union
{
    int i;
    char c[sizeof(int)];
} utype;
int main()
{
    utype.i = 1;         // storing in int type member, the same memory is used by the char array c too
    if (utype.c[0] == 1) // 1 is stored in the first byte of the four bytes required by int
        printf("little-endian\n");
    else
        printf("big-endian\n");
    puts("union contents: ");
    for (int i = 0; i < sizeof(int); i++)
        printf("%d %c ", utype.c[i], utype.c[i]);
    return 0;
}