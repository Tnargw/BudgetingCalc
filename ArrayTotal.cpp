// ArrayTotal.cpp
#include "ArrayTotal.h"

ArrayTotal::ArrayTotal(int inputArray[15])
{
    arr = gcnew cli::array<int, 1>(15);
    int arr_length = 15;

    // Copy values from inputArray to the CLI array
    for (int i = 0; i < 15; i++)
    {
        arr[i] = inputArray[i];
    }
}

int ArrayTotal::GetTotal()
{
    // Your existing GetTotal implementation (assuming you have it)
    // It might look like summing up the values in the array
    int total = 0;
    for (int i = 0; i < arr_length; i++)
    {
        total += arr[i];
    }
    return total;
}
