#include <iostream>

int sumOfEven(const int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += array[i];
    }
    return sum;
}

double sumOfEven(const double* array, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i += 2) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "Sum of even indices (int): " << sumOfEven(intArray, 5) << std::endl;
    std::cout << "Sum of even indices (double): " << sumOfEven(doubleArray, 5) << std::endl;

    return 0;
}
