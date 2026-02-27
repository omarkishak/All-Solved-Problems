#include <iostream>
using namespace std;

int main() {
    int mainArr[4][4], numInput;
    int studentsCount = 0;

    cout << "Enter all of 16's students' correct answers count: ";
    for(int i = 0; i < 4; i++) {
        int j = 0;

        cin >> numInput;
        mainArr[i][j] = numInput;

        if(numInput > 6) {
            studentsCount++;
        }

        for(j = 1; j < 4 ; j++) {
            cin >> numInput;
            mainArr[i][j] = numInput;

            if(numInput > 6) {
                studentsCount++;
            }
        }
    }
    int sortingArr[studentsCount], index = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 ; j++) {
            if (mainArr[i][j] > 6) {

                sortingArr[index] = mainArr[i][j];
                index++;
            }
        }
    }

    for(int i = 0; i <= (studentsCount - 2); i++) {
        /*"(studentsCount - 2)" because if the array size x, you need to spin x-1 times to completely sort the array*/

        double temp = 0;

        for(int j = 0; j < studentsCount; j++)
            if(sortingArr[j+1] > sortingArr[j]) {

            temp = sortingArr[j];
            sortingArr[j] = sortingArr[j+1];
            sortingArr[j+1] = temp;

        }
    }
    cout << "All scores higher than 6 are: ";
    for(int i = 0; i < studentsCount; i++) {
        cout << sortingArr[i] << " , ";
    }

}
