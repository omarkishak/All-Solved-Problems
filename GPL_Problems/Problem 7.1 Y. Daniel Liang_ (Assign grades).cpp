#include <iostream>
#include <sstream>
using namespace std;



int main() {
    int studentNum;
    double studentGrade, studentArr[studentNum], bestGrade = 0;

    cout << "Enter the number of students: ";
    cin >> studentNum;

    cout << "Enter " << studentNum << " scores of students: ";

    for(int i = 0; i < studentNum; i++) {
        cin >> studentGrade;
        studentArr[i] = studentGrade;
    }
    bestGrade = studentArr[0];

    for(int i = 1; i < studentNum; i++) {


        if(studentArr[i] > bestGrade) {
            bestGrade = studentArr[i];
        }
    }

    for(int i = 0; i < studentNum; ) {
        if(studentArr[i] >= (bestGrade - 10)) {
            cout << "student "<< i+1 << " score is " << studentArr[i] << " and grade is A" << endl;
        }
        else if(studentArr[i] >= (bestGrade - 20)) {
            cout << "student "<< i+1 << " score is " << studentArr[i] << " and grade is B" << endl;
        }
        else if(studentArr[i] >= (bestGrade - 30)) {
            cout << "student "<< i+1 << " score is " << studentArr[i] << " and grade is C" << endl;
        }
        else if(studentArr[i] >= (bestGrade - 40)) {
            cout << "student "<< i+1 << " score is " << studentArr[i] << " and grade is D" << endl;
        }
        else {
            cout << "student "<< i+1 << " score is " << studentArr[i] << " and grade is F" << endl;
        }
        ++i;
    }

    return 0;
}
