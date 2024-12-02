#include <stdio.h>

// Define a union to represent sensor data
union SensorData
{
    int errorCode;     // For error reporting
    float temperature; // For temperature reading
    char status;       // For status reporting
};

int main()
{
    union SensorData data;

    // Case 1: Using the union to store an error code
    data.errorCode = 404;
    printf("Error Code: %d\n", data.errorCode);

    // Case 2: Using the union to store a temperature reading
    data.temperature = 36.7;
    printf("Temperature: %.2f\n", data.temperature);

    // Case 3: Using the union to store a status code
    data.status = 'A';
    printf("Status: %c\n", data.status);

    // Note: Only one member holds a valid value at a time
    // The following will show the last valid value stored (status)
    printf("\nCurrent Data (errorCode and  temperature values are invalid due to overwriting):\n");
    printf("Error Code: %d\n", data.errorCode);
    printf("Temperature: %.2f\n", data.temperature);
    printf("Status: %c\n", data.status);

    return 0;
}
