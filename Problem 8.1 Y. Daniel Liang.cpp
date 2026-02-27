#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for(int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    double mainArr[3][4], userInput, columnIndex = 0;
    int j;

    //To make the user fill up the array elements.
    cout <<"Enter elements for 3-by-4 array (12 element): ";
    for(int i = 0; i < 3; i++) {
        j = 0;

        cin >> userInput;
        mainArr[i][j] = userInput;

        for(j = 1; j < 4; j++) {
            cin >> userInput;
            mainArr[i][j] = userInput;
        }
    }

   for(int i = 0; i < 4; i++) {
       cout << "The sum of all of the elements in column number " << i + 1 << " is: " << sumColumn(mainArr, 3, i) << endl;
   }

    return 0;
}
