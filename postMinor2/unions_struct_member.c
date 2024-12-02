/*******************************************************************************
 *
 * Program: Union Tutorial
 *
 * Description: Example of how to use unions in C.
 *
 * YouTube Lesson: https://www.youtube.com/watch?v=-iJL8E7V6xY
 *
 * Author: Kevin Browne @ https://portfoliocourses.com
 *
 *******************************************************************************/
// updated version for classroom instruction
#include <stdio.h>
#include <string.h>
// Because it is often the case that only one union member can be used
// effectively at any given time, one pattern is to wrap a union in a
// struct where the struct has a member (in this case type) that signifies
// which union member is currently 'in use'.  So if type == 'c' it could
// signify that buffer member x is in use, if type == 'f' it could signify
// that buffer member y is in use, and so on...
typedef struct
{
    char type; // to know the type of the union member
    union
    {
        char x[10];
        float y[10];
        double z[10];
    } buffer;
} Info;

int main()
{

    // the struct info contains a type member
    Info info;

    // we can set the type to 'c' to signify that the x member of the buffer
    // is the one currently in use
    info.type = 'c';

    // write all 't' characters into the buffer.x member
    memset(info.buffer.x, 't', 10);

    // we could check to see that a certain member is in use before doing anything  with it, as below
    if (info.type == 'c')
    {
        for (int i = 0; i < 10; i++)
            printf("info.buffer.x[%d] = %c\n",
                   i, info.buffer.x[i]);
    }
    info.type = 'f';
    for (int i = 0; i < 10; i++)
        info.buffer.y[i] = i + 0.12;

    // we could check to see that a certain member is in use before doing anything  with it, as below
    if (info.type == 'f')
    {
        for (int i = 0; i < 10; i++)
            printf("info.buffer.x[%d] = %f\n",
                   i, info.buffer.y[i]);
    }

    return 0;
}