#include <iostream>
#include <string>
using namespace std;

class functions {
public:

    functions() {

    }
    int getOdd(int arr[], int size) {
        int countOdd = 0;
        for(int i = 0; i < size; i++) {
            if(arr[i] % 2 == 1) {
                countOdd++;
            }
        }
        return countOdd;
    }

    int getEven(int arr[], int size) {
        int countEven = 0;
        for(int i = 0; i < size; i++) {
            if(arr[i] % 2 == 0) {
                countEven++;
            }
        }
        return countEven;
    }
};

int main() {
    int arrSize, arr[arrSize], arrIntake;

    cout << "Enter array size: ";
    cin >> arrSize;

    cout << "Enter elements in the array: ";
    for(int i = 0; i < arrSize; i++) {
        cin >> arrIntake;
        arr[i] = arrIntake;
    }

    functions case1;
    cout << "odd count is: " << case1.getOdd(arr, arrSize) << endl << "even count is: " << case1.getEven(arr, arrSize);

    return 0;
}
