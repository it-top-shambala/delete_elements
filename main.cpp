#include <iostream>
#include "array_functions_helpers.h"
#include "array_functions.h"

using namespace std;

int main() {

    int size = 20;
    int* source = new int[size];
    RandomFillArray(source, size, 0, 10);
    PrintArray(source, size);

    int size2;
    int* arr = DeleteElementsFromArray(source, size, 5, size2);
    PrintArray(arr, size2);

    return 0;
}
