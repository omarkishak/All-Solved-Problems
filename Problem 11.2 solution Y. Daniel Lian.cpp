#include <iostream>
#include <string>
using namespace std;

int main() {
    string userWord;
    int count = 0, index = 0;

    cout << "Enter the word: ";
    cin >> userWord;

    int arrSize = static_cast<int>(userWord.length());
    char mainArr[arrSize], subArr[100];
    char vowelArr[] = {'a', 'e', 'i', 'o','u'};

    for(int i = 0; i < size(userWord); i++) {
        mainArr[i] = userWord[i];
    }

    for(int i = 0; i < size(userWord); i++) {
        for(int j = 0; j < 5; j++) {
            if(mainArr[i] != vowelArr[j]) {
                count++;
                if(count == 5) {
                    subArr[index] = mainArr[i];
                    index++;
                    count = 0;
                }
            }
            else {
                count = 0;
                break;
            }
        }
    }

    cout << subArr;
    return 0;
}

