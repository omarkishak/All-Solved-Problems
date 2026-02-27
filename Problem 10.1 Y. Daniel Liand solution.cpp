#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    for(int i = 0; i < sizeof(s1); i++) {
        for(int j = 0; j < sizeof(s2); j++) {
            if(s1[i] == s2[j]) {
                if((i+1) == sizeof(s1) && (j+1) == sizeof(s2)) {
                   return true;
                }
            }

            else if((i+1) == sizeof(s1) && (j+1) == sizeof(s2)){
                return false;
            }
        }
    }
}


int main() {
    string s1, s2;

    cout << "Enter s1: " << endl;
    cin >> s1;
    cout << "enter s2: " << endl;
    cin >> s2;

    if(isAnagram(s1, s2) == true) {
        cout << s1 << " and " << s2 << " are not anagrams";
    }

    else {
        cout << s1 << " and " << s2 << " are anagrams";
    }

    return 0;
}
