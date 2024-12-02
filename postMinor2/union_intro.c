#include <stdio.h>
#include <string.h>

// define a union data type called Data with 3 members... all of the members
// occupy the SAME space in memory, so assigning to one of them will effect
// (overwrite) the others!
union Data
{
    int x;
    double y;
    char z[32];
};

int main()
{
    // declare a union variable
    union Data mydata;

    // initialize the members of the union
    mydata.x = 10;
    mydata.y = 20.5;
    strcpy(mydata.z, "test 123");

    // mydata.x and mydata.z will not ouput 10 and 20.5 because the union members
    // all occupy the same space in memory, when we write "test 123" into mydata.z
    // we overwrite whatever was in that space in memory before (20.5)
    printf("mydata.x = %d\n", mydata.x);
    printf("mydata.y = %f\n", mydata.y);
    printf("mydata.z = %s\n", mydata.z);

    // if we set and output the members one at a time, we do output the value
    mydata.x = 10;
    printf("mydata.x = %d\n", mydata.x);

    mydata.y = 20.5;
    printf("mydata.y = %f\n", mydata.y);

    strcpy(mydata.z, "test 123");
    printf("mydata.z = %s\n", mydata.z);

    // the union will be allocated enough space to store the largest member, in
    // this case the 32 byte character array z
    printf("mydata size: %d\n", (int)sizeof(mydata));
    printf("char size: %d\n", (int)sizeof(char));

    // we can access the members of a union when we have a pointer to that union
    // using the arrow notation -> the same as with structs
    union Data *ptr = &mydata;
    printf("ptr->z = %s\n", ptr->z);
    return 0;
}