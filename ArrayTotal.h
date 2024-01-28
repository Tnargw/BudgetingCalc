// ArrayTotal.h
#pragma once

public ref class ArrayTotal
{
private:
    cli::array<int, 1>^ arr;
    unsigned int arr_length;

public:
    // Constructor that takes a plain array
    ArrayTotal(int inputArray[15]);

    // Set the array method
    void SetArray(int inputArray[15]);

    // Get the total method (assuming you have this method)
    int GetTotal();
};
