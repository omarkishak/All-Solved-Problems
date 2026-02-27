#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    int counter = 0;
    if (size(s1) == size(s2)){

        for(int i = 0; i < size(s1); i++) {
            for(int j = 0; j < size(s2); j++) {

                if(s1[i] == s2[j]) {
                    counter++;
                    if(counter == size(s1)) {
                        return true;
                    }
                    break;
                }

            }
        }

        if(true) {
            return false;
        }

    }

    else {
        return false;

    }
}


int main() {
    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;
    cout << "enter s2: ";
    cin >> s2;

    if(isAnagram(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams";
    }

    else {
        cout << s1 << " and " << s2 << " are not anagrams";
    }

    return 0;
}
