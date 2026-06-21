#include <iostream>
// This is a trial upload file
int main() {   
    int batchSize = 32;        // A standard integer variable
    int *ptrToBatch = nullptr; // Declare a pointer to an integer.

    ptrToBatch = &batchSize; // Store the memory address of batchSize in the pointer
    *ptrToBatch = 64;        // Dereferencing the pointer to change the original variable
   

    // Both will now output 64, because they point to the exact same memory location
    std::cout << "Original variable: " << batchSize << '\n';
    std::cout << "Via pointer: " << *ptrToBatch << '\n';

    return 0;
}